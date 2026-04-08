#include <iostream>
#include "Array.h" // 우리가 만든 헤더 파일을 포함!

using namespace std;

int main() {
    // 과제 사진에 있는 예제 이미지 배열
    int image[HEIGHT][WIDTH] = {
        { 10,  30,  55,  80, 120, 160, 200, 230},
        { 20,  45,  70, 100, 140, 180, 220, 210},
        { 35,  60,  90, 130, 170, 210, 240, 190},
        { 50,  80, 115, 150, 190, 230, 255, 170},
        { 40,  65, 100, 140, 175, 215, 235, 150},
        { 25,  50,  80, 115, 155, 195, 210, 130},
        { 15,  35,  60,  90, 130, 165, 185, 110},
        {  5,  20,  40,  70, 105, 140, 160,  90}
    };

    // 함수를 호출하고 결과를 변수에 저장
    int max_brightness = getMaxBrightness(image);

    // 결과 출력 (영어로 깔끔하게 변경!)
    cout << "Max pixel brightness: " << max_brightness << endl;

    return 0;
}