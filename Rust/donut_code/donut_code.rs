fn main() {
    let A : f32;
    let B : f32;

    let i : f32;
    let j : f32;
    let mut k;
    let z: [i32; 1760];
    let b: [i32; 1760];
    println!("\x1b[2J");
    loop {
       std::ptr::write_bytes(b.as_mut_ptr(), 32u8, 1760usize);
        std::ptr::write_bytes(z.as_mut_ptr(),  0fu8,  7040usize);
        for j in 0..628{
            let j = f32::from(j) * 0.01;
            for i in 0..628 {
                let i = f32::from(i) * 0.01;
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
                let x = 40f32 + 30f32 * D * (l * h * m - t * n);
                let y= 12f32 + 15f32 * D * (l * h * n + t * m);
                let o = x + 80f32 * y;
                let N = 8f32 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if 22f32 > y && y > 0f32 && x > 0f32 && 80f32 > x && D > z[o] {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@";
                    // [N > 0 ? N : 0];
                }
                i += 0.02;
            }
            j += 0.07;
        }
        println!("\x1b[H");
        for k in 0..1761 {
            let s = k % 80;
            putchar( s ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        libc::usleep(30000);
    }
}
