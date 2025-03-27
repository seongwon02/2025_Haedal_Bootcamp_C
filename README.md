# 2025_Haedal_Bootcamp_C
<h4> [시간] 화, 목 19:00 ~ 20:00 </h4>
<h4> [장소] it1호관 116호 </h4>

# 업로드 방법
### 파일명
- **폴더**는 week1, week2, ... , week8 으로 구성되어 있습니다.
- 각자 해결한 과제 파일을 해당 주차의 폴더에 업로드 해주세요.

- **파일명**은 "주차 번호_과제 번호.c"입니다.
- 예시 : 1주차 과제 1번 -> 1_1.c, 2주차 과제 2번 -> 2_1.c

# 최초 사용
- 본인의 컴퓨터에서 "Git Bash"를 실행합니다.
- `git clone "https://github.com/seongwon02/2025_Haedal_Bootcamp_C.git"`을 입력하여 저장소를 복제합니다.
- 복제가 완료되면 본인의 이름으로 된 폴더를 찾아 들어갑니다.
- 본인의 이름으로 된 폴더 안에 자신의 코드를 업로드 합니다.
- 업로드가 완료되면 `git add .` -> `git commit -m "message"` -> `git push origin main`를 통해 업로드 합니다.

# C 세팅
## [1] Git 설치

1. [Git](https://git-scm.com/) 페이지에서 `Download for XXX` 버튼을 클릭합니다.
   별도 설정없이 설치하면 됩니다.

## [2] Visual Studio Code 설치

### 1. Visual Studio Code 다운로드

1. `VSCode` 사이트에 접속해서 다운받습니다.
   자신의 운영체제에 맞는 옵션을 `Stable 버전`으로 다운로드 하면 됩니다.

   (Insiders 버전은 최신 버전이지만 불안정하여 여러 버그가 나타날 수 있습니다.
   Stable은 버그 발생률을 줄인 버전으로, Stable로 다운로드 해주시면 됩니다.)

 ![vscode_download_1](https://github.com/KNU-HAEDAL/bootcamp_division_homework/assets/138651699/7fa45d63-bc86-4664-8b0f-d4ca391cdfc7)

### 2-A. Window에서 설치

1. 다운로드한 **설치 파일**을 더블클릭하여 **실행**시킵니다.

   ![vscode_install_1](https://github.com/KNU-HAEDAL/bootcamp_division_homework/assets/138651699/836aabdf-62af-45eb-a53b-d0190d8ddc81)

2. **약관에 동의**하고, `다음` 버튼을 클릭합니다.

   ![vscode_install_2](https://github.com/KNU-HAEDAL/bootcamp_division_homework/assets/138651699/6fd9418e-f9fa-49fc-a6a5-11b76665e386)

3. 파일이 **설치될 위치를 선택**한 후 `다음` 버튼을 클릭합니다.

   ![vscode_install_3](https://github.com/KNU-HAEDAL/bootcamp_division_homework/assets/138651699/ce59c4f1-276e-42a1-87f5-cc7dae47e2f3)

4. 시작 메뉴에 폴더를 만들거나 기존의 시작 메뉴 폴더를 선택합니다.

   선택하지 않는 경우 **자동으로 Visual Studio Code폴더를 생성**하여 프로그램 바로가기가 생성됩니다.

   ![vscode_install_4](https://github.com/KNU-HAEDAL/bootcamp_division_homework/assets/138651699/65421326-d998-482e-ad8f-344bf3bb6844)

5. 필요한 추가 작업을 선택합니다.

   3, 4번은 기본으로 체크되어 있으니 **체크를 풀지 마시고** 다음 버튼을 클릭하는 것을 추천드립니다.

   ![vscode_install_5](https://github.com/KNU-HAEDAL/bootcamp_division_homework/assets/138651699/d87b39df-4336-440a-9bc1-16374ace9165)

6. `설치` 버튼을 클릭하여 완료합니다.

   ![vscode_install_6](https://github.com/KNU-HAEDAL/bootcamp_division_homework/assets/138651699/9c62d790-0b76-4cb8-b0e8-d1aba87b9997)

### 2-B. Mac에서 설치

1. 다운로드를 완료하면 `(1)`과 같은 파일이 보입니다.

   `(1)`을 더블 클릭 해주면 압축이 해제되며 `(2)`가 생성됩니다.

   ![vscode_install_mac_1](https://github.com/KNU-HAEDAL/bootcamp_division_homework/assets/138651699/ae26ad84-ab36-40e7-9691-4c8a192a36ee)

2. `(2)`를 더블클릭하면 아래와 같은 창이 뜨며 VS Code를 이용할 수 있습니다.

   ![vscode_install_mac_2](https://github.com/KNU-HAEDAL/bootcamp_division_homework/assets/138651699/75bb0948-40d0-45ce-a57f-9308a66cf96a)

## [1] GCC 설치
### 1. Windows인 경우
(주의) 폴더 경로에 한글이 있으면 안됩니다. 만약 user가 한글로 되어있다면 이름 영어로 변경하셔야 합니다.

1. [MinGW](https://sourceforge.net/projects/mingw/) 사이트 접속 후 `Download` 버튼을 클릭합니다.

   ![visit mingw](./assets/2-1.png)

1. `Install` - `Continue` 버튼을 클릭합니다.

   ![Install click](./assets/2-2.png)

   ![Continue click](./assets/2-3.png)

   ![Done install mingw](./assets/2-4.png)

1. MinGW 설치가 끝나면 아래와 같이 체크한 뒤 `Installation` - `Apply Changes` 를 클릭합니다.

   - mingw-developer-toolkit
   - mingw32-base
   - mingw32-gcc-g++
   - msys-base

   ![MinGW install check list](./assets/2-5.png)

1. `Apply` 버튼을 클릭해 설치합니다.

   ![MinGW install apply](./assets/2-6.png)

1. `시스템 환경 변수 편집`을 검색해줍니다.

   > [!WARNING]
   >
   > 띄어쓰기에 주의해주세요.

   ![search env](./assets/2-7.png)

1. `환경 변수(N)...` 버튼을 클릭합니다.

   ![click env](./assets/2-8.png)

1. 시스템 변수에서 변수 `Path`를 찾아 클릭한 뒤, `편집` 버튼을 클릭합니다.

   ![click edit](./assets/2-9.png)

1. `새로 만들기` 버튼을 클릭해 아래 2개의 값을 추가해줍니다.

    ```
    C:\MinGW\bin
    C:\MinGW\msys\1.0\bin
    ```

   ![path](./assets/2-10.png)

1. 확인을 눌러 저장한 뒤, `git bash`를 열어 아래의 명령어를 입력해봅니다.

    ```bash
    gcc -v
    ```

   ![git bash gcc -v](./assets/2-11.png)

   사진과 비슷하게 뜬다면 성공입니다.

### 2. macOS인 경우

1. `Terminal`에 아래의 명령어를 입력합니다.

    ```
    xcode-select --install
    ```
## [2] Code Runner

1. `Extension` 탭에서 `Code Runner`를 설치합니다.

   ![code runner](./assets/2-15.png)
2. `Extension` 탭에서 Code Runner 우측 하단 톱니바퀴를 클릭 - `Extension Settings`을 클릭합니다.

   우측 설정창에서 `Run In Terminal`을 찾아 체크합니다.

   ![Run In Terminal](./assets/2-21.png)

3. `Terminal Root` 를 찾아 `/`를 입력합니다.

   ![Terminal Root](./assets/2-22.png)
   
## [3] C/C++

1. `Extension` 탭에서 `C/C++`를 설치합니다.

   ![C/C++](./assets/2-17.png)
