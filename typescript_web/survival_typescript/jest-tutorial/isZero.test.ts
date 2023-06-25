import { isZero } from "./isZero";


test("if throw 0 to function when return true", () => {
    const result = isZero(0);
    expect(result).toBe(true);
});

test("if throw 1 to function when return false", () => {
    const result = isZero(1);
    expect(result).toBe(false);
});
