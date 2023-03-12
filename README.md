# 英哩轉公里
用 fixed 跟 setprecision 顯示需要的小數點，在輸出的同時轉換成 double 並運算。
<https://github.com/QIUXIANG126/itsa/blob/1e7b270be272fd58e6a677423e293040f40c0c65/itsa_Miletokm.cpp>

# 判斷座標是否在圓形的範圍內
![Image](https://user-images.githubusercontent.com/127104134/224534435-0f250f6a-29b3-4b0a-b30a-f6736cd592d8.png)

用斜邊來判斷是否有超過。
<https://github.com/QIUXIANG126/itsa/blob/47a4c64aba0f8a83b0eee3c09680aff00f244d05/itsa_circleXYjudge.cpp>

# 停車費計算
輸入完時間後先把小時轉換成分鐘然後把少於30分鐘的部分減掉，
小於2小時:  直接除30後計算。

大於2小時但未滿4小時:  減掉2小時後計算價錢然後加120(兩小時的部分，因為超過兩小時所以直接算120。( 30\*4) )。

大於4小時:  減掉4小時後計算價錢然後加 120 +160 (4小時的部分，因為超過四小時所以直接算160。 (40\*4)。
<https://github.com/QIUXIANG126/itsa/blob/0942b47cb23693fc4d04c1573c5f937415f6d4d7/itsa_parking_calculate.cpp>

# 十進制轉二進制
用 bitset<8>  轉換。

<https://github.com/QIUXIANG126/itsa/blob/0942b47cb23693fc4d04c1573c5f937415f6d4d7/itsa_itobit.cpp>

#  季節判定
用 switch 判斷。

<https://github.com/QIUXIANG126/itsa/blob/0942b47cb23693fc4d04c1573c5f937415f6d4d7/itsa_season_judge.cpp>
