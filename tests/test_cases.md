# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

## 1. Entropy / Redundancy
- [x] Input: `aaaa` -> entropy thấp, redundancy cao
- [x] Input: `abcd` -> entropy cao hơn `aaaa`
- [x] Input: `hello world` -> entropy và redundancy được tính hợp lệ

## 2. Modulo inverse
- [x] `a=3, m=7` -> nghịch đảo modulo là 5
- [x] `a=10, m=17` -> nghịch đảo modulo là 12
- [x] `a=6, m=9` -> không tồn tại nghịch đảo modulo

## 3. Ghi chú
- Các kết quả entropy và redundancy được làm tròn đến 4 chữ số thập phân để đảm bảo độ chính xác.
- Đã kiểm tra trường hợp chuỗi nhập vào có khoảng trắng và ký tự đặc biệt, chương trình vẫn xử lý đúng.
- Với thuật toán Modulo Inverse, nhóm đã xử lý trường hợp không tồn tại nghịch đảo khi gcd(a, m) != 1.
- Môi trường thử nghiệm: Trình biên dịch g++ trên Ubuntu (thông qua GitHub Actions).
