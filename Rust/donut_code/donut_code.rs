#![allow(non_snake_case)]
fn main() {
    let mut A : f32 = 0.0;
    let mut B : f32 = 0.0;

    let _i : f32;
    let _j : f32;
    let _k : u32;
    let mut z: [f32; 1760] = [0.0; 1760];
    let mut b: [&str; 1760] = ["i"; 1760];
    println!("\x1b[2J");
    loop {
        //let vec_ptr = z.as_mut_ptr();
        //let vec1_ptr = b.as_mut_ptr();
        /*unsafe{
            std::ptr::write_bytes(vec_ptr, 32u8, 1760usize);
            std::ptr::write_bytes(vec1_ptr,  0u8,  7040usize);
        }*/
        let mut j_plus = 0.0;
        let mut i_plus = 0.0;
        for j in 0..628{
            let j = f32::from((j as f32) + j_plus) * 0.01;
            for i in 0..628 {
                let i = f32::from((i as f32) + i_plus) * 0.01;
                let c = i.sin();
                let d = j.cos();
                let e = A.sin();
                let f = j.sin();
                let g = A.cos();
                let h = d + 2f32;
                let D = 1f32 / (c * h * e + f * g + 5f32);
                let l = i.cos();
                let m = B.cos();
                let n = B.sin();
                let t = c * h * g - f * e;
                let x = (40f32 + 30f32 * D * (l * h * m - t * n)) as u32;
                let y = (12f32 + 15f32 * D * (l * h * n + t * m)) as u32;
                let o = (x + 80 * y) as u32;
                let N = (8f32 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n)) as u32;
                if 22f32 > (y as f32) && (y as f32) > 0f32 && (x as f32) > 0f32 && 80f32 > ( x as f32) && D > (z[o as usize] as f32) {
                    z[o as usize] = D;
                    if N > 0{
                        b[o as usize] = ".,-~:;=!*#$@";
                    }
                    else{
                        b[o as usize] = ".,-~:;=!*#$@";
                    }
                }
                i_plus += 0.02;
            }
            j_plus += 0.07;
        }
        println!("\x1b[H");
        for k in 0..1761 {
            let s = k % 80;
            if s ==  0{
                println!("{}", b[k]);
            }else{
                println!("{}",  10 as u32);
            }
            A += 0.00004;
            B += 0.00002;
        }
        std::thread::sleep(std::time::Duration::from_millis(30000));
    }
}
