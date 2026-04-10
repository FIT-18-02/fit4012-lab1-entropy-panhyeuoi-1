# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.
- Hiểu và cài đặt được công thức tính Entropy và Redundancy (Độ dư thừa) để đánh giá lượng thông tin của một chuỗi ký tự.

- Triển khai thuật toán Euclid mở rộng để tìm nghịch đảo modulo, phục vụ cho các bài toán mã hóa sau này.

- Làm quen với quy trình làm việc trên GitHub, sử dụng Git để quản lý mã nguồn và hệ thống chấm điểm tự động GitHub Actions.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0.0000 | 4.7004 | Chuỗi chỉ có 1 loại ký tự nên Entropy bằng 0, độ dư thừa cao nhất.  |
| abcd | 2.0000 | 2.7004 | Các ký tự xuất hiện với tần suất bằng nhau, Entropy đạt giá trị tối đa 4 ký tự. |
| hello world | 2.8453 | 1.8551 | Chuỗi có độ phức tạp trung bình, các ký tự xuất hiện không đều nhau. |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | -1 |

## 4. Kết luận
- Điều em học được: Em đã hiểu cách cài đặt thuật toán tính Entropy và Redundancy để đo lường lượng thông tin. Đồng thời, em đã nắm vững thuật toán Euclid mở rộng để tìm nghịch đảo modulo, một thành phần cốt lõi trong các hệ mã hóa như RSA.

- Khó khăn lớn nhất: Việc xử lý các lỗi cú pháp C++ và đảm bảo định dạng file log chuẩn xác để hệ thống chấm điểm tự động (GitHub Actions) nhận diện được kết quả.

- Điều giúp hiểu rõ hơn: Việc trực tiếp lập trình và chạy các bộ dữ liệu thử nghiệm (test cases) giúp em thấy rõ mối liên hệ giữa lý thuyết toán học và ứng dụng thực tế trong an toàn thông tin.
