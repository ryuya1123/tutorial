fn main() {
    let (A, B) = (0.0,  0.0);
    let (i, j, k);
    let z: [i32; 1760] = Default::default;
    let b: [i32; 1760] = Default::default;
    println!("\x1b[2J");
    loop {
        memset(b, 32, 1760);
        memset(z,  0,  7040);
        for j in (0..6.28) {
            for i in (0..6.28) {
                let c = i.sin();
                let d = j.cos();
                let e = A.sin();
                let f = j.sin();
                let g = A.cos();
                let h = d + 2;
                let D = 1 / (c * h * e + f * g + 5);
                let l = i.cos();
                let m = B.cos();
                let n = B.sin();
                let t = c * h * g - f * e;
                let x = 40 + 30 * D * (l * h * m - t * n);
                let y= 12 + 15 * D * (l * h * n + t * m);
                let o = x + 80 * y;
                let N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if 22 > y && y > 0 && x > 0 && 80 > x && D > z[o] {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
                i += 0.02;
            }
            j += 0.07;
        }
        println!("\x1b[H");
        for k in ( 0..1761 ) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        usleep(30000);
    }
    return 0;
}
