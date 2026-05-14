# ĐỀ BÀI

Với mục tiêu tuyển chọn được người học có năng lực phù hợp với triết lý và yêu cầu đào tạo toàn diện, các trường Đại học đã tổ chức kỳ thi Đánh giá năng lực (ĐGNL) để tuyển chọn những thí sinh có năng lực toàn diện nhất. Trong đó, kỳ thi ĐGNL của Đại học Quốc gia TP.HCM (gọi tắt là V-ACT) là một trong những kỳ thi tuyển chọn uy tín nhất. Dưới đây là mô phỏng cách tính điểm của bài thi:

Bài thi V-ACT có cấu trúc gồm 4 phần thi, mỗi phần sẽ có $m$ câu hỏi. Các phần thi gồm có:
*   Tiếng Việt: số thứ tự câu hỏi từ $1$ đến $m$.
*   Tiếng Anh: số thứ tự câu hỏi từ $m+1$ đến $2m$.
*   Toán học: số thứ tự câu hỏi từ $2m+1$ đến $3m$.
*   Khoa học: số thứ tự câu hỏi từ $3m+1$ đến $4m$.

Điểm tối đa từng thành phần của bài thi sẽ là $10m$ điểm. Điểm thi của thí sinh được xác định bằng phương pháp trắc nghiệm hiện đại theo lý thuyết ứng đáp câu hỏi (Item Response Theory - IRT). Công thức của IRT như sau:

$$ P_i(\theta) = \frac{1}{1 + e^{-a(\theta-b)}} $$

Trong đó:
*   $\theta$ (theta) là năng lực của thí sinh.
*   $a$ là hệ số phân biệt (discrimination parameter).
*   $b$ là độ khó của câu hỏi (difficulty parameter).
*   $P_i(\theta)$ là xác suất thí sinh có năng lực thành phần $\theta$ trả lời đúng câu hỏi số thứ tự $i$ có độ phân biệt $a$ và độ khó $b$.

Điểm thực của thí sinh chính là quy đổi từ giá trị $\theta$ sau khi trả lời $m$ câu hỏi của mỗi phần thi. Một câu hỏi phân biệt tốt là câu hỏi có độ phân biệt được khuyến nghị nằm trong khoảng từ $0.6$ đến $1.7$. Nếu quá $1.7$ thì câu hỏi phân biệt quá tốt có thể gây quá khớp dữ liệu, còn từ $0$ đến dưới $0.6$ thì câu hỏi phân biệt chưa tốt. Trường hợp độ phân biệt câu hỏi là giá trị âm thì cần phải loại bỏ câu đó khỏi ngân hàng đề thi.

Độ khó của câu hỏi thường nằm trong khoảng $-3$ đến $3$, trong đó khuyến nghị nên nằm trong khoảng $-1$ đến $1$, cũng là độ khó bình thường. Câu hỏi càng dễ thì có độ khó càng thấp. Nếu câu hỏi có độ khó không nằm trong mức độ khó được khuyến nghị, câu hỏi sẽ không có ý nghĩa trong việc kiểm tra năng lực thí sinh.

Vậy nếu đã có độ khó và độ phân biệt của tất cả câu hỏi thì giá trị $\theta$ của thí sinh sẽ được tính như thế nào? Một trong những cách tối ưu nhất là tính toán bằng phương pháp đạo hàm hợp lý logarit (Log-Likelihood) và cập nhật $\theta$ theo Gradient Ascent. Công thức tổng quát để tính toán theta của thí sinh như sau:

$$ \theta = \sum_{i=1}^{m} a_i \cdot (u_i - P_i(0)) $$

Với $a_i$ là độ phân biệt của câu hỏi thứ $i$ trong phần thi có $m$ câu hỏi, $u_i$ là kết quả thí sinh được biểu diễn theo giá trị nhị phân ($1$ là trả lời đúng, $0$ là trả lời sai), $P_i(0)$ là xác suất trả lời đúng câu hỏi thứ $i$ theo công thức IRT với năng lực giả sử bằng $0$.

Cuối cùng, để biến đổi điểm năng lực $\theta$ thành phân ra điểm thực $S$ của thí sinh, người ta sẽ sử dụng công thức nội suy tuyến tính như sau:

$$ S = \frac{\theta - \theta_{min}}{\theta_{max} - \theta_{min}} \times 10m $$

với $m$ là số câu hỏi trong phần thi, $\theta_{max}$ và $\theta_{min}$ lần lượt là điểm năng lực nếu thí sinh trả lời đúng và trả lời sai hết tất cả các câu hỏi trong phần thi có $m$ câu hỏi đó.

**1/** Áp dụng các kiến thức Lập trình hướng đối tượng (kế thừa, đa hình), vẽ sơ đồ chi tiết các lớp đối tượng được mô tả ở trên.

Viết chương trình mô phỏng tính điểm năng lực thực hiện các yêu cầu sau:

**2/** Nhập $m$ câu hỏi tối đa của mỗi phần, độ khó, độ phân biệt của mỗi câu hỏi. Mỗi độ khó, độ phân biệt của câu hỏi là một số thực được làm tròn đến hai chữ số thập phân. In ra hai danh sách là số thứ tự các câu hỏi theo được phân loại như sau:
*   Các câu hỏi có độ phân biệt bình thường, quá tốt, chưa tốt và quá kém.
*   Các câu hỏi có độ khó bình thường, quá dễ và quá khó.

**3/** Nhập vào giá trị $n$ là số thí sinh. Ở $n$ dòng tiếp theo, nhập danh sách là STT các câu hỏi mà thí sinh đã trả lời đúng trong bài thi. In ra thí sinh có số câu trả lời đúng nhiều nhất và ít nhất ở mỗi phần thi.

**4/** In ra điểm thực của tất cả thí sinh. Số điểm cao nhất và thấp nhất của mỗi phần thi.

*Lưu ý: Các thông tin trong đề thi chỉ mang tính chất giả sử, KHÔNG nhất thiết phải đúng hoặc khớp với các thông tin hiện tại trong thế giới thực. Sinh viên cần bám sát các mô tả trong đề thi và vận dụng kiến thức về lập trình hướng đối tượng để làm bài theo yêu cầu.*
