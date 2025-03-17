const int potPin = A0;  // Chân analog kết nối với chiết áp
const int fanPin = 9;   // Chân PWM kết nối với quạt

void setup() {
  pinMode(fanPin, OUTPUT);  // Cài đặt chân quạt làm đầu ra
}

void loop() {
  int potValue = analogRead(potPin);  // Đọc giá trị từ chiết áp (0-1023)
  int fanSpeed = map(potValue, 0, 1023, 0, 255);  // Ánh xạ giá trị đến phạm vi PWM (0-255)
  
  analogWrite(fanPin, fanSpeed);  // Điều chỉnh tốc độ quạt
  delay(5000);  // Quạt chạy trong 5 giây
}
