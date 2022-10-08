#![allow(non_snake_case)]
extern crate libc;

fn main() {
    let (mut A, mut B) : (f64, f64) = (0., 0.);
    print!("\x1b[2J");

    loop {
        let ( mut z, mut b ) = ([0.; 1760], [' '; 1760], );
        let mut _j_plus = 0.0;
        let mut _i_plus = 0.0;
        for j in (0..628).step_by(7){
            for i in (0..628).step_by(2) {
                let c = ((i as f64)/100.).sin();
                let d = ((j as f64)/100.).cos();
                let e = A.sin();
                let f = ((j as f64)/100.).sin();
                let g = A.cos();
                let h = d + 2f64;
                let D = 1f64 / (c * h * e + f * g + 5f64);
                let l = ((i as f64)/100.).cos();
                let m = B.cos();
                let n = B.sin();
                let t = c * h * g - f * e;
                let x = (40f64 + 30f64 * D * (l * h * m - t * n)) as i32;
                let y = (12f64 + 15f64 * D * (l * h * n + t * m)) as i32;
                let o = (x + 80 * y) as i32;
                let N = (8f64 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n)) as i32;
                if 22f64 > (y as f64) && (y as f64) > 0f64 && (x as f64) > 0f64 && 80f64 > ( x as f64) && D > (z[o as usize] as f64) {
                    z[o as usize] = D;
                    let put_char = ".,-~:;=!*#$@";
                    if N > 0{
                        b[o as usize] = put_char.chars().nth(N as usize).unwrap();
                    }
                    else{
                        b[o as usize] = put_char.chars().nth(0).unwrap();
                    }
                }
            }
        }
        print!("\x1b[H");
        for k in 0..1761 {
            let s = k % 80;
            if s != 0 {
                print!("{}", b[k]);
            }else{
                println!("");
            }
            A += 0.04;
            B += 0.02;
        }
        std::thread::sleep(std::time::Duration::from_millis(50));
    }
}
