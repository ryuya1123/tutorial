import { GetServerSideProps, NextPage } from "next";
import { useEffect, useState } from "react";
import styles from "./index.module.css";

type Props = {
    initialImageUrl: string;
};


const IndexPage: NextPage<Props> = ({ initialImageUrl }) => {
    // 1.Definition of state use useState
    const [imageUrl, setImageUrl] = useState(initialImageUrl);
    const [loading, setLoading] = useState(false);

    // 2.Declaration when Mount loading image
    //useEffect(() => {
    //    fetchImage().then((newImage) => {
    //        setImageUrl(newImage.url);
    //        setLoading(false);
    //    });
    //}, []);

    // loading image when i click buttom.
    const handleClick = async () => {
        setLoading(true);
        const newImage = await fetchImage();
        setImageUrl(newImage.url);
        setLoading(false);
    };

    // 3. Printing image when not in loading
    return (
        <div className={styles.page}>
            <button onClick={handleClick} className={styles.button}>
                other cat images
            </button>
            <div className={styles.frame}>
                {loading || <img src={imageUrl} className={styles.img} />}
            </div>
    </div>
    );
    };

export default IndexPage;


// action by sever side
export const getServerSlideProps: GetServerSideProps<Props> = async () => {
    const image = await fetchImage();
    return {
        props: {
            initialImageUrl: image.url, 
        }, 
    };
};

type Image = {
    url: string;
};

const fetchImage = async (): Promise<Image> => {
    const res = await fetch("https://api.thecatapi.com/v1/images/search");
    const images: unknown = await res.json();

    // Expression as array?
    if (!Array.isArray(images)) {
        throw new Error("cat image can't acquisition");
    }
    const image: unknown = images[0];

    // Whether of not structure of Image?
    if (!isImage(image)) {
        throw new Error("cat image can't acquisition")
    }
    return images[0];
};

// Type guard function
const isImage = (value: unknown): value is Image => {
    // Object is value?
    if (!value || typeof value !== "object"){
        return false;
    }

    // Exist url property and it string?
    return "url" in value && typeof value.url === "string";
};
