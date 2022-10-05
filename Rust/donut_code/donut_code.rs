fn main() {
    let A : f32;
    let B : f32;

    let i : f32;
    let j : f32;
    let k : u8;
    let z: [f32; 1760];
    let b: [char; 1760];
    println!("\x1b[2J");
    loop {
       std::ptr::write_bytes(b.as_mut_ptr(), 32u8, 1760usize);
        std::ptr::write_bytes(z.as_mut_ptr(),  0u8,  7040usize);
        for j in 0..628{
            let j = f32::from(j as f32) * 0.01;
            for i in 0..628 {
                let i = f32::from(i as f32) * 0.01;
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
                let x = (40f32 + 30f32 * D * (l * h * m - t * n)) as u8;
                let y = (12f32 + 15f32 * D * (l * h * n + t * m)) as u8;
                let o = (x + 80 * y) as u8;
                let N = (8f32 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n)) as u8;
                if 22f32 > (y as f32) && (y as f32) > 0f32 && (x as f32) > 0f32 && 80f32 > ( x as f32) && D > (z[o as usize] as f32) {
                    z[o as usize] = D;
                    // b[o as usize] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
                i += 0.02;
            }
            j += 0.07;
        }
        println!("\x1b[H");
        for k in 0..1761 {
            let s = k % 80;
            if s ==  0{
                println!("{}", b[k] as u8);
            }else{
                println!("{}",  10 as u8);
                //putchar(10);
            }
            // putchar((s ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        std::thread::sleep(std::time::Duration::from_millis(30000));
        //tokio::time::sleep(30000);
    }
}
