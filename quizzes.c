#include<stdio.h>


int main() {
	//--------------------------Week-1_Simple-Quiz----------------------------------//

	/* NOTE
	x++   ==>   on next action x's value will increase
	++x   ==>	increase its value immidately, yerindece artir
	*/





	//1. answer: 6
	/*
	printf("%d", printf("1 2 3\n"));
	*/

	//2. answer:1.254
	/*
	double x = 1.2543;
	printf("%.3lf", x);
	*/

	//3. answer: 12
	/*
	printf("%d", sizeof(7/3) + sizeof(5.0/2));
	*/

	//4. answer:4
	/*
	printf("%d", printf("Hi!\n"));
	*/

	//5. answer: 7
	/*
	int a = 3. b = 11;
	int res = b/a + b%a + (a<b) + (a!=b);
	printf("%d", res)
	*/

	//6. answer: 3.77
	/*
	double x = 3.7657;
	printf("%.2lf", x);
	*/

	//7. answer: 3
	/*
	int a = 7, b = 16;
	int res = (a>b) + (b/2 > a) + (b/a);
	printf("%d", res);
	*/

	//8. answer: 15
	/*
	printf("%d", printf("I am a student\n"));
	*/

	//9. answer: 14
	/*
	int a = 25;
	printf("%d", sizeof(long long) + sizeof(a) + sizeof(short int));
	*/

	//10. answer: 2
	/*
	int a = 10, b = 5;
	int res = (a<b) + (a!=b) + (a>b);
	printf("%d", res);
	*/

	//11. answer: 9
	/*
	int a = 7, b=13;
	int res = b/a + b%a + (a!=b) + (a>b/2);
	printf("%d", res);
	*/

	//12. answer: -2
	/*
	int a = 8, b = 3, c = 5;
	int res = a++ - --b - ++c;
	printf("%d", res - b);
	*/

	//13. asnwer: 64
	/*
	long long a= 2;
	printf("%d", sizeof(double) * sizeof(a));
	*/

	//14. answer: 9
	/*
	int a = 17, b = 6;
	int res = (a>b) + (b%a) + (a/b);
	printf("%d", res);
	*/

	//15. answer: 12
	/*
	int a = 17, b = 6;
	int res = a/b*b;  //soldan saga hesablanir
	printf("%d", res);
	*/

	//16. answer: 9
	/*
	int a = 3, b = 3;
	int res = a++ + --b; // a - on next action a's value will increase that is why it is 3 here and b - b decreasing it value here and became 2
	printf("%d", a + res); // here a increase its value and become 4 and res's value is 5 therefore  output become 9
	*/

	//17. answer:3
	/*
	int a, b, c;
	int i = scanf("%d %d %d", &a, &b, &c); // we scan 3 element here and i means how many element we scan -> output become 3
	printf("%d", i);
	*/

	//18. answer: 21
	/*
	int a = 5, b = 8;
	int res = ++a + b--; // a incirease its value here and become 6 and b keep its value = 8 (on next b' operation its value dicrease)
	printf("%d", b+ res); // here b decreade and become 7 and res = 14 -> output is 21
	*/

	//19. answer: 16
	/*
	short int a = 25;
	pritnf("%d", sizeof(double) * sizeof(a));
	*/

	//20. answer: 6
	/*
	short int a = 25;
	printf("%d", sizeof(float) + sizeof(a));
	*/

	//21. answer: 20
	/*
	printf("%d", sizeof(100)+sizeof(100LL) + sizeof(100.0));
	*/


	//--------------------------Week-2_Simple-Quiz----------------------------------//


	//1. answer:3
	/*
	int a = 5, b = 7, res;
	res = (a > b/2) + (a/2 < b) + (++a == --b);
	printf("%d", res);
	*/

	//2. answer: 8
	/*
	int a = 7;
	if(++a > 7 || ++a > 6 || a++ > 2) // there is or condition and it means if one of this condition is true then cantinue to do next action
		printf("YES");	// as we see it is ++a and it increase immidately calue and become 8 and 8 > 7 is ture there fore we stop checking other conditions
	else
	printf("NO");
	printf("%d", a);
	*/

	//3. answer: 7
	/*
	int x = 2;
	swithc(x){
	case 5: x = x+3;
	default: x = x + 5;
	}
	printf("%d", x);
	*/

	//4. answer: 11
	/*
	int x = 4;
	switch(x){
	case 4: x = x+2;
	default: x=x+5;
	}
	printf("%d", x);
	*/

	//5. answer: 11
	/*
	int a = 3, b = 7;
	if(a != b || a == b)
		prinf("%d", a + b+1);
	else
	  printf("%d", a*b);
	*/

	//6. answer: 7
	/*
	int x = 5;
	switch(x){
	case 4: x = x + 1;
	break;
	case 5: x = x + 1;
	case 6: x = x + 1;
	break;
	case 7: x = x + 1;
	break;
	}
	printf("%d", x);
	*/

	//7. answer: 2
	/*
	int a = 9, b = 10;
	if(a++ != --b) a++; else --b;
	printf("%d", a - b);
	*/

	//8. answer: -2
	/*
	int a = 3, b = 4, res;
	res =  (a++ < --b) ? a + b : a - b;
	printf("%d", res - b);
	*/

	//9. answer: 16
	/*
	int a = 7, b = 6;
	if(a++ == ++b) ++a; else b--;
	printf("%d", a + b);
	*/

	//10. answer: 2
	/*
	int a = 7, b = 3, res;
	res = (a > b) + (a/2 > b) + (a != ++b);
	printf("%d", res);
	*/

	//11. answer: 6
	/*
	int a = 5;
	if(a++ > 5 && a++ > 6 && ++a > 7)
	printf("YES");
	else
	printf("NO");
	printf("%d", a);
	*/

	//12. answer: 565
	/*
	int x = 5;

	switch (x){

	case 5: printf("%d", x);

	case 7: printf("%d", x + 1); break;

	default: printf("%d", x + 2); break;
	}

	printf("%d\n",x);
	*/

	//13. answer: 3
	/*
	int x = 0;

	switch (x){

	case 1: x = x + 3;

	case 0: x = x + 2;

	case 2: x = x + 1;

	)

	printf("d\n",x);
	*/

	//14. answer: 7
	/*
	int a = 5;

	if (a++ > 0 && a++ > 10 && a++ > 0) printf("YES\n");
	else printf("NO\n");
	printf("%d\n", a);
	*/

	//15. answer:20
	/*
	int x = 0;

	switch (x){

	case 1: printf("%d", x); break;
	case 2: printf("%d", x + 1); break;
	default: printf("%d", x + 2); break;

	printf("%d\n",x);
	*/

	//16. answer: 673
	/*
	int x = 3;

	switch (x){

	case 1: printf("%d", x + 1);
	case 2: printf("%d", x + 2);
	case 3: printf("%d", x + 3);
	default: printf("%d", x + 4);

	printf("%d\n",x);
	*/

	//17. answer: 23
	/*
	switch (5/2){

	case 1: printf("1");

	case 2: printf("2");

	default: printf("3");
	*/

	//18. answer: 13
	/*
	int a = 4, b = 8;
	if(a != b) a++; else --b;
	printf("%d", a + b);
	*/

	//19. answer: 32
	/*
	int x = 2;

	switch (x){

	case 1: printf("%d", x);

	break;

	case 2: printf("%d", x + 1);

	break;

	default: printf("%d", x + 2); break;

	}

	printf("%d\n",x);
	*/

	//20. answer:3
	/*
	int a = 4, b = 8, res;
	res = (a == b/2) + (2*a != --b) + (a + 3 == b);
	printf("%d", res);
	*/

	//--------------------------Week-3_Simple-Quiz----------------------------------//

	//1. answer: 4
	/*
	int i  = 2, j = 10, cnt = 0;
	while(i++ < j--) cnt++; // 10 - 2 / 2
	printf("%d", cnt);
	*/

	//2. answer: 6
    /*
	int cnt = 1;
	for(int i = 2; i< 8; i++){
	if(i>6) continue;  // If 'i' is greater than 6, skip the rest of the loop and go to the next iteration.
	cnt++;
	}
	printf("%d", cnt);


	//3. answer: 7
	/*
	 int cnt = 3;
	 for(int i = 9; i > 3; i--){
	 if(i % 3) cnt++;  // should be diffirent from 0 cuz 0 mean false we need true
	 printf("%d", cnt);
	 }
	*/

	//4. answer: 10
	/*
	int cnt = 1;
	for(int i = 2; i  <= 10; i += 3){cnt+=3;}
	printf("%d", cnt);
	*/

	//5. answer: 7
	/*
	int cnt = 1;
	for(int i =10; i > 2; i--){
	if(i<5) continue;   // If 'i' is less than 5, skip the rest of the loop and go to the next iteration.
	cnt++;
	}
	printf("%d", cnt);
	*/

	//6. asnwer: 5
	/*
	int cnt = 2;
	for(int i = 10; i >0; i--){
	if(--i <  5)break;  // here i dicrease 2 times like 10 8 6 and more and if less than 5 stop
	cnt++;
	}
	printf("%d", cnt);
	*/

	//7. asnwer:6
	/*
	int cnt= 2;
	for(int i = 6; i < 13; i++)
	   if(i % 4>1) cnt++;  //6 7 10 11
	   printf("%d", cnt);
	*/

	//8. answer: 3
	/*
	int cnt = 0;
	for(int i =8; i>0; i--){
	if(i--<4) break;  // 2 times decreasing 8 6 4 2 and if less than 4 stop
	cnt++;  //become 3
	}
	printf("%d", cnt);
	*/

	//9. asnwer:18
	/*
	int i = 7, cnt = 2;
	while(i>= 0){
	i--;
	cnt+=2;
	}
	printf("%d", cnt);
	*/

	//10. anwer: 6 times hello
	/*
	int i = 12;
	for(;i;i-= 2)
	printf("Hello\n");
	*/

	//11. answer:6
	/*
	int i = 6, cnt = 0;
	while(i - cnt) cnt++; // 6-0|6-1|6-2|6-3|6-4|6-5|
	printf("%d", cnt);
	*/

	//12. answer: 3
	/*
	int i  = 1, j = 7, cnt = 0;
	while(i < j ){ // 1<7|2<6|3<5|
	i++; j--;
	cnt++;
	}
	printf("%d", cnt);
	*/

	//13. answer: 16
	/*
	int i  = 2, cnt = 0;
	while(i < 10){
	i ++;
	cnt+=2;

	}
	printf("%d", cnt);
	*/

	//14. anwer:5
	/*
	int i = 5, cnt = 0;
	while(i--){
	cnt++;
	}
	printf("%d", cnt);
	*/

	//15. answer: 11
	/*
	int cnt = 6;
	for(int i = 7; i <=15; i++)
		if(i%4>1) cnt++; // 7 10 11 14 15
	printf("%d", cnt);
	*/

	//16. answer: 25
	/*
	//THAT IS MATRIX
	int cnt = 0;
	for(int i = 0; i < 5; i++)
	for(int j = 0; j < 5; j++)
		cnt++;
	printf("%d", cnt);
	*/

	//17. answer: 10 x Hello
	/*
	int i = 10;
	for(;i;i--)
	printf("Hello\n");
	*/

	//18. answer: 30
	/*
	int i = 10, cnt = 3;
	while(i>1){
	i--;
	cnt += 3;
	}
	printf("%d", cnt);
	*/

	//19. answer: 14
	/*
	int i = 2, cnt = 0;
	while(true){
	cnt+=2;i++;
	if(i>8) break;
	}
	printf("%d", cnt);
	*/

	//20. answer:11
	/*
	int cnt = 1;
	for(int i = 5; i <=9; i++) cnt+=2;
	printf("%d", cnt);
	*/

	//21. asnwer:6
	/*
	int cnt = 0;
	for(int i = 0; i < 5; i++) cnt += i++;
	printf("%d", cnt);
	*/

	//22. asnwer: 3
	/*
	int cnt = 0;
	for(int i = 2; i <= 10; i++){
	if(i++ > 6) break;
	cnt++;
	}

	printf("%d", cnt);
	*/

	//23. asnwer: 18
	/*
	int cnt = 4;
	for(int i = 7; i > 0; i--) cnt +=2;
	printf("%d", cnt);
	*/

	//24. answer: 9
	/*
	int cnt = 5;
	for(int i = 3; i < 7; i += 2)
	cnt += 2;
	printf("%d", cnt);
	*/

	//25. answer:19
	/*
	int cnt = 1;
	for(int i = 3; i <= 8; i++)
	cnt+=3;
	printf("%d", cnt)
	*/

	//--------------------------Week-4_Simple-Quiz----------------------------------//

	//1. answer: 13
	/*
	int a[5] = {5 ,2, 7, 1, 6};
	res = 0;
	for(i = 0; i < 4; i++)
		if(a[i] < a[i+1]) res+=a[i+1];
	printf("%d", res);
	*/

	//2. answer:14
	/*
	int a[5] = {1 ,2, 3, 4, 5};
	res = 2; i = 1;
	while(i < 4)
	res += a[++i];
	printf("%d", res);
	*/

	//3. answer: 45
	/*
	int a[3][3] = {{1, 2, 3}, {4, 5, 6), (7, 8, 9} };
	res = a[1][1] * a[2][2];
	printf("%d\n", res);
	*/

	//4. answer: 4
	/*
	short int a[16];

	res = sizeof(a) / sizeof(long long);  // 2*16 / 8

	printf("%d\n", res);
	*/

	//5. answer:24
	/*
	int a[3][3] {{1, 2, 3}, {4, 5, 6}, {7,8,9} };

	res = a[0][2] * a[2][1];

	printf("%d\n", res);
	*/


	//6. answer:13
	/*
	int a[3] [3] = {{1, 2, 3}, {4, 5, 6}, {7,8,9} };

	res = a[1][1] + a[2][1];

	printf("%d\n", res);
	*/

	//7. answer: 3
	/*
	int a[5] = {5, 2, 7, 1, 6); res = 0;

	for (i = 0; i < 4; i++)

	if (a[i] < a[i+1]) res += a[i];

	printf("%d\n", res);
	*/

	//8. answer: 3
	/*
	int a[6] = {6, 1, 5, 5, 2, 8};

	int res = 0;

	for (int i = 0; i < 5; i++) {
		if ((a[i] + a[i + 1]) % 2 == 0) res++;
	}
	printf("d\n", res);
	*/

	//9. answer:18
	/*
	int a[6] = {6, 1, 5, 5, 2, 8};

	int res = 0;

	for (int i = 0; i < 5; i++) {
		if ((a[i] <= a[i + 1])) res+= a[i+1];
	}
	printf("d\n", res);
	*/

	//10. answer:82
	/*
	long long a[10];
	res = sizeof(a) + sizeof(short int);
	printf("%d\n", res);
	*/

	//11. answer: 3
	/*
	float a[6];
	res = sizeof(a)/sizeof(double);
	printf("%d", res);
	*/

	//12. answer: 6
	/*
	int a[5] = {1, 2, 3, 4, 5);
	res = i = 0;

	while (i < 3)
	res+=a[i++];
	printf("%d\n", res);
	*/

	//13. answer: 11
	/*
	int a[3] [3] = {{1, 2, 3}, {4, 5, 6}, {7,8,9} };

	res = a[0][1] + a[2][2];
	printf("%d\n", res);
	*/

	//14. answer: 10
	/*
	int a[6] = {7, 1, 8, 8, 1, 1};
	res = 0;
	for (i = 0; i < 5; i++)

	if ((a[i] + a[i+1]) % 2 == 0) res += a[i+1];
	printf("%d\n", res);
	*/

	//15. answer:11
	/*
	int a[6] = {4,1,7,3,5,10};
	res = 0;
	for (i = 0; i < 5; i++)

	if ((a[i] * a[i+1]) % 2) res += a[i];
	printf("%d\n", res);
	*/

	//16. answer: 8
	/*
	int a[10]={1,2,3,4,5,6,7,8,9,10);

	res=a[2] + a[4];

	printf("%d\n", res);
	*/

	//17. answer: 9
	/*
	int a[10]={1,2,3,4,5,6,7,8,9,10);

	res=a[1] + a[6];

	printf("%d\n", res);
	*/

	//18. answer:404
	/*
	int a[100];
	res = sizeof(a) + sizeof(int);
	printf("%d", res);
	*/

	//19. answer:18
	/*
	int a[10]={1,2,3,4,5,6,7,8,9,10);

	res=a[1] * a[8];

	printf("%d\n", res);
	*/

	//20. answer:12
	/*
	int a[5] = {5, 2, 7, 1, 6};

	res = 0;
	for (i = 0; i < 4; i++)

	if (a[i] > a[i+1]) res += a[i];
	printf("%d\n", res);
	*/

	//--------------------------Week-(5-6)_Simple-Quiz----------------------------------//

	//1. answer: 1
	/*
	printf("%d", strcmp("arba", "abra"));
	*/

	//2. asnwer: 6
	/*
	char a[100];
	scanf("%s", a); //crocodile     // what happen -> cat/0odile/0
	scanf("%s", a); // cat
	printf("%d", strlen(a+1) + strlen(a+5));
	*/

	//3. answer:6
	/*
	char a[] = "University";
	printf("%d", strlen(a + 4));
	*/

	//4. asnwer: 5
	/*
	char a[100];
	scanf("%s", a); //amazonka   // what happen -> dog/0onka/0
	scanf("%s", a); // dog
	printf("%d", strlen(a+1) + strlen(a+5));
	*/

	//5. asnwer: Helloty
	/*
	char s[100] = "Hello";
	char s[100] = "Kitty";
	strcat(s+2, t+3);
	puts(s);
	*/

	//6. asnwer: Helitty
	/*
	char s[100] = "Hello";
	char s[100] = "Kitty";
	strcpy(s+3, t+1);
	puts(s);
	*/

	//7. answer: 0
	/*
	printf("%d", strncmp("abcdef", "abcxyz", 3));
	*/

	//8. answer: Hety
	/*
	char s[100] = "Hello";
	char t[100] = "Kitty";
	strcpy(s+2, t+3);
	puts(s);
	*/

	//9. answer: Helloitty
	/*
	char s[100] = "Hello";
	char t[100] = "Kitty";
	strcat(s+3, t+1);
	puts(s);
	*/

	//10. answer: UnDAersity
	/*
	char s[100] = "University";
	char t[100] = "ADA";
	strncpy(s+2, t+1,2);
	puts(s);
	*/

	//11. answer: 58
	/*
	char a[50];
	res = sizeof(a) + sizeof(long long);
	printf("%d", res);
	*/

	//12. answer:0
	/*
	printf("%d", strncmp("abra", "arba", 1));
	*/

	//13. answer: W
	/*
	char ch = 'Y';
	printf("%c", ch - 2);
	*/

	//14. answer: - 1
	/*
	printf("%d", strcmp("abra", "cadabra"));
	*/

	//15. answer: 104
	/*
	char a[100];
	res = sizeof(a) + sizeof(int);
	printf("%d", res);

	*/

	//16. answer: 3
	/*
	char a[] = "Hello";
	printf("%d", strlen(a+2));
	*/

	//17. answer:og
	/*
	char a[100];
	scanf("%s", a); //amazonka  // what happen -> dog/0onka/0 when you puts it it start to read one by one till it sees "/0"- NULL and stop when see
	scanf("%s", a); //dog
	puts(a+1);
	*/

	//18. answer: -1
	/*
	printf("%d", strcmp("abra", "arba"));
	*/

	//19. answer: ersity
	/*
	char a[] = "University";
	puts(a+4);
	*/

	//20. answer: D
	/*
	char ch[] = 'B';
	pritnf("%c", ch +2);
	*/


	//--------------------------Week-7_Simple-Quiz----------------------------------//


	/*
	THIS IS MY SECRET RULE TO DO THIS EASILY
	FOR EXAMPLE LOOK FIRST QUESTION

    as we see here the return is - return f(a - 2, b - 1) + 1; when the return wants us to add THIS PART " + "
    we just need to know one rule-(i made it)
    1. find which intiger given in if - like if(b == 0) return 0;
    2.how much its given value
    3.if you know them then follow this rule
    3,1 - 3,3. burda meselen b if de verilib ne edirik birinci (b = 22 bunu bilirik) b den if in icinde verilen beraberliyi cixiriq
         yani 22 - 0 = 22 sonra bu b ni boluruk funcitondaki reqeme - meselen burda return f(a - 2, b - 1) + 1; b den 1 cixirlar
         yani biz tapdigimiz 22 ni boluruk 1 e 22/1=22 sonrada hemin 22 ni vururuq  + 1;(f(a - 2, b - 1) + 1;  burda verilib bu)
         o da olur 22 cavabimiz 22 dir fso



    4. indi meselen hemise bele vermez bu seferde burda bele verer
       if(x == 0) return 1;
        return f(x-1) * 2;

    4,1. burda gorduyumuz kimi toplama deyil orda ne edecik
         meselen x in 5 olaraq goturek (f(5))  hemiseki qayda 5 - if in icindeki reqem o da 0 di  yani 5 - 0= 5
         sonra tapdigimiz reqemi yani 5 i boluruk f(x-1) bunu icindeki reeqeme olur 5/1=5
         burda artiq vurma oldugu ucun tapdigimiz son netice olan 5 i qaldiriq 2 nin quvvetine our 2 usdu 5 2^5 buda = 32 cavab 32 di

         BURDA BIR QAYDADA VAR RETURN QAYDASI IF IN SONUNDAKI BUNLARIN EKSERYETINDE 0 DI DEYE BAXILMIR AMA 0 DAN FERQLI BIR SEY OLSA EN SON
         TAPDIGINIZ CAVABIN UZERINE GELIRSIZ EGER TOPLAMADISA  YOXXX EGER VURMADIRSA RETURN CAVABINI VURURSUN EN SON ALDIGINZI CAVABA
         if(b == 0) return 0;   BU RETURN DEN SOHBET GEDIR
	*/

	//1. answer: 22
	/*
	int f(int a,  int b){
	if(b == 0) return 0;
	return f(a - 2, b - 1) + 1;
	}

	int main (){

	printf("%d", f(11,22));
	}
	*/

	//2.  answer: 11
	/*
	int f(int a,  int b){
	if(a == 0) return b;
	return f(a - 1, b) + 1;
	}

	int main (){

	printf("%d", f(5,6));
	}
	*/

	//3. answer:8
	/*
	int a =1, b = 1, c = 1;
	void f(int a, int &b, int &c){  // a deyismir cunki locallasmir yani qlobali deyismir
	a++; b+=2; c+=3;
	}

	int main (){
	f(a, b,c);
	printf("%d", a + b + c);
	}
	*/

	//4. answer: 15
	/*
	int g(int x){
	return x+1;
	}

	int f(int x){
	return g(x+2) * 3;
	}

	int main(){
	printf("%d", f(2));
	}
	*/

	//5. answer:0
	/*
	int y;
	void f(int x, int y){
	y = y * x;  // if it was ::y = y * x the answer would be 20
	}

	int main (){
	f(5,4);
	printf("%d", y);
	}
	*/

	//6. answer: 15
	/*
	int f(int a, int b){
	if( a == 0) return 0;
	return f(a-2, b-1) + 3;
	}

	int main (){
	printf("%d", f(10, 20));
	}
	*/

	//7. answer:32
	/*
	int f(int x){
	if(x == 0) return 1;
	return f(x-1) * 2;
	}

	int main(){
	printf("%d", f(5));
	}
	*/

	//8. answer: 6
	/*
	int x;
	void f(int a, int b){
	x = a + b;
	}

	int main (){
	f(4,2);
	printf("%d", x);
	}
	*/

	//9. answer: 12
	/*
	int x;
	void f(int a, int b){
	x = a*b;
	}

	int main (){
	f(4,3);
	printf("%d", x);
	}
	*/

	//10. answer:1000
	/*
	int f(int x){
	if(x == 0) return 0;
	return f(x-1) + 2;
	}

	int main (){
	printf("%d", f(500));
	}
	*/

	//11. answer: 250
	/*

	int f(int a){
	if (a <= 0) return 0;
	return f(a - 2) + 1;
	}

	int main(){
	printf("%d", f(500));
	}
	*/

	//12. answer: 9
	/*
	int x = 3;
	void g(int x){
	::x = ++x;
	}

	void f(int x) {
	g(::x + x);
	}

	int main(){
	f(5);
	printf("%d", x);
	}
	*/

	//13. answer: 32
	/*
	int f(int a,  int b){
	if(a == 0) return 1;
	return f(a - 2, b) * b;  /// burda meselen b nin quvetine qaldirirdiq bayaq dediyim seyde b^aldigimiz son cavab hansiki 5 b ^ 5 olacaq
	}

	int main (){

	printf("%d", f(10,2));
	}
	*/

	//14. answer: 9
	/*
	int a = 3, b = 5;
	void f(int &a, int b){
	a ++;
	b ++;
	}

	int main (){
	f(a, b);
	printf("%d", a + b);
	}
	*/

	//15. answer: 6
	/*
	int a=1, b=2, c=3;          // burda a ve c locallasib deye yeni & gore qiymet deyisir ama b qlobal b ise qiymet deyismir
	void f(int &a, int b, int &c){
	a = b; b = c; c = a;  //a olur 2 c == a yazilib ele c de olur a yani 2
	}

	int main (){
	f(a, b, c);
	printf("%d", a + b + c);
	}
	*/

	//16. answer: 10
	/*
	int f(int a , int b){
	return a * b;
	}

	int main (){

	printf("%d", f(2,5));
	}
	*/

	//17. answer: 35
	/*
	int a = 5;
	void f(int &a){
	a += ::a;
	}

	int main(){
	int a = 2;
	f(a);
	printf("%d", a * ::a);  // burda da localdaki int a ni edir 7 global deyismir o qalir 5 5 * 7 = 35

	}
	*/

	//18. answer: 16
	/*
	int f(int a,  int b){
	if(a == 0) return 1;
	return f(a - 1, b) * b;  // izah elediyim qayda
	}

	int main (){

	printf("%d", f(2, 4));
	}
	*/

	//19. answer:120
	/*
	int f(int x){
	if (x == 0) return 1;
	return f(x-1) * x;  // bu factoryaldi
	}

	int main (){
	printf("%d", f(5));
	}
	*/

	//20. answer: 0
	/*
	int x;
	void f(int x, int y){
	x = x+y;  //eger globala access verseydi yani ::x yazsaydi cavab olacaqdi 7 ama yazmadigina gore 0 di
	}

	int main(){
	f(4,3);
	printf("%d", x);
	}
	*/


	//--------------------------Week-11_Simple-Quiz----------------------------------//

	//------------NOTE-------------//

	//*ptr++  => pass to the next variable
	// ptr++  => pass to the next variable
	//(*ptr)++  => increase value
	//*ptr-=2   => decrease value
	/*
            ptr-- shifts
        ptr -= shifts
        *ptr-- shifts
        *ptr -= decreases
        (*ptr) -- decreases
        (*ptr) -= decreases
	*/


	//-------------------------------//

	//1. answer: r
	// for "c" we calculate / take just the number that given, brifly 5th number (calculate from 0- first element)
	/*
	char m[] = "UniversityADA";
	printf("%c", *(m+5)); // not different form m[5]
	*/

	//2. answer: x = 4, y = 2 cvb: 4,2
	// just change value
	/*
	int x = 2, y = 4;
	void f(int* a, int* b){
	int temp = *b;
	*b = *a;
	*a = temp;
	}
	*/

	//3. answer: 8
	//  burada valuelere baxilmir sadece memory adresine baxirsan d - b de burdaki memeoy adreslerinin ciximidi
	//  bele olanda 2 olur bu ikisinin memory adresinin ciximi onda da 2 * 4/1 =8
	/*
	int a = 2, b = 3, c = 4, d = 5;
	int* p1, *p2;
	p1 = &d;
	p2 = &b;
	printf("%d", (char*)p1 - (char*)p2);
	*/

	//4. answer: 1
	// burda ilk ptr inde x 2 vahid geriye gedir yani d den b ye, menasi ptr=ptr-2 ama sonraki ise hemin memory adresindeki vaueni 2 vahid azaldir
	/*
	int a = 2, b = 3, c = 4, d = 5;
	int* ptr;
	ptr = &d;
	ptr -=2;
	(*ptr) -=2;  // *ptr= *ptr-2
	printf("%d", *ptr);
	*/

	// 5. answer: 4
	// ilk once indexi mertebeni 1 vahid qaldirdiq(PASS THE  NEXT VALUE) b den geldi c ye, IKINCI PTR DA da c nin qiymetini 1 vahid qaldirdiq
	/*
	int a,b = 1, c = 2, d;
	int* ptr;
	ptr = &b;
	*ptr++;
	(*ptr)++;
	printf("%d", b + c);
	*/

	//6. answer: 5
	// 48 - 8 = 40 olur sonrada alinan valueni 40 i printf deki size a doublin size na boluruk olur 40/8=5
	//  (M[48] ELE BIR BUNU 48 GOTURUK, O BIRINDE DE M+8 YENI 0+8 CUNKI M BURDA 0 CI ELEMTENDI)
	/*
	char m[100];
	printf("%d", (double*)&m[48] - (double*)(m+8));  // buna bolursen yani double a
	*/

	//7. answer: 10
	// m burda arrn 0 ci elementidi, ptr = m = 0 bizde 10 vahid artirirq olur 10 printf  de de 10 - 0= 10
	/*
	int m[100];
	int* ptr;
	ptr = m;
	for(int i = 0; i < 10; i++) ptr++;
	printf("%d", ptr - m);
	*/

	//8. answer: 2
	// p1- p2=> &d - &b => memory adreslerinin ferqi o da nece bilersen yerlesdiyi siraya baxaraq b den d ye 2 addim var
	/*
	int a = 2, b = 3, c = 4, d = 5;
	int* p1, *p2;
	p1 = &d;
	p2 = &b;
	printf("%d", p1-p2);

	*/

	//9. answer:3
	// &d - &a => memory adress ferqi
	/*
	double a = 2, b = 3, c = 4, d = 5;
	printf("%d", &d - &a);
	*/

	//10. answer: 16
	// burda qisa yol tapmaga her birin artma valusesini gel verilen valueye sonrada vur nece denedise ona:
	//  x 1 vahid y 2 vahid artir gelirik 1 in usdune bunu 1 + 1 + 2 = 4 indi burda eger printf("", x+y+z) olsa idi 4 *3 olardi
	// cunki hem x in qiymeti hem y hem de z in qiymeti 4 olur zincirleme kimi burdada y*z yeni 4*4 olur cabah 16 di
	/*
	int x = 1, &y = x, &z = y;
	x++;
	y+=2;
	printf("%d", z*y);
	*/

	//11. answer: -3
	// bu ele &a - &d di hansiki memory adress ferqi a nin sirasindan d nin sirasini cix
	/*
	double a = 2, b = 3, c = 4, d = 5;
	double* p;
	p = &a;
	printf("%d", p - &d);
	*/

	//12. answer: 7
	// ilk once *ptr = *ptr - 2 yeni *ptr = &d - 2 => 3
	// sonra (*ptr) = (*ptr) - 2 yeni (*ptr) = &d - 2 => 3 - 2= 1
	// ama bizden ne isteyir baxaq b + c isdeyir bu da 3 + 4 du yeni cavah 7 di eger bizden *ptr isde se idi cavab 1 olardi
	// burda onsuz verilen ptr larda aparilan processler b ve c nin qiymetine tesir elemedi o sadece d ni deyisdi
	/*
	int a = 2, b = 3, c = 4, d = 5;
	int* ptr;
	ptr = &d; // decresing value
	*ptr -= 2;
	(*ptr) -= 2; // decresing value
	printf("%d", b + c);
	*/

	//13. answer:10
	// arrr in 0 ci elementinden basdayir yeni U dan ta ki NULL u gorene qeder X i artirir bu da strlen in acilisidi demek olar eslinde
	/*
	char m[100] = "University";
	char* p;
	int x = 0;
	for(p = m; *p; p++)x++;
	printf("%d", x);
	*/

	//14. answer: -4
	// memory adress ferqi, yerine baxiriq a dan c ye 2 addim var sonrada 2 * 8 / 4 edir cavab -4
	/*
	double a = 2, b = 3, c = 4, d = 5;
	int* p1, *p2;
	p1 = &a;
	p2 = &c;
	printf("%d", (int*)p1 - (int*)p2);

	*/

	//15. answer: 15
	// 4*30/8 = 15
	// yene eyni gedir  m  0 ci elementdi ptr = 10 buna gore de sonra da 10 u 20 vahid artiririq olur 30
	// gelirik printf de ikinci hisseye burda m 0 di dedik ora 0 a getdi
	// 30 u veururuq int in size na yeni 4*30 sonrada bouruk double in size na 4*30/8 = 15

	/*
	int i, m[100];
	int* ptr;
	ptr = m + 10;
	for(int i = 10; i < 30; i++) ptr++;
	printf("%d", (double*)ptr - (double*)m);
	*/

	//16. answer: 21
	// 7 + 7 + 7 burda zincirleme tesir hammisina tesir edir artim eyni zamanda 3 vahid artir heresi
	// ZINCIRLEME BAS VERIRI BUNA OXSAR SUALDA IZAH ELEMISEM
	/*
	int i = 4, &j=i, &k=j;
	i++; j++; k++;
	printf("%d", i + j + k);
	*/

	//17. answer:4
	// arrr in 6 ci elementinden basdayir yeni U dan ta ki NULL u gorene qeder X i artirir bu da strlen(M+6) in duzsutudu eslinde
	/*
	char m[100] = "University";
	char* p;
	int x = 0;
	for(p = m + 6; *p; p++)x++;
	printf("%d", x);
	*/

	//18. answer:i
	// for "c" we calculate / take just the number that given, brifly 2th number (calculate from 0- first element)
	/*
	char m[] = "UniversityADA";
	printf("%c", *(m+2));
	*/

	//19. answer:25
	// m 0 dir, ptr 15 di, 15 i 10 vahid artirirq olur 25, printf de de 25 - 0 yaziriq olur 25
	/*
	int i, m[100];
	int* ptr;
	ptr = m + 15;
	for(int i = 10; i < 20; i++) ptr++;
	printf("%d", ptr - m);
	*/

	//20. answer: 5
	// cunki d ni goturur indexin azaldir fso
	// mertebe olaraq azalir qisaca sira ile c ve b
	/*
	int a = 1, b = 5, c = 3, d = 4;
	int* ptr;
	ptr = &d;
	for(int i = 0; i < 2; i++) ptr--;
	printf("%d", *ptr);
	*/




	//--------------------------Week-12_Simple-Quiz----------------------------------//


	//1. answer: 112

	/*
	struct MY{
	char s[100];
	int x,y,z;
	};
	printf("%d", sizeof(MY));
	*/

	//2. answer: A

	/*
	Which of yhe following is a properly defined struct?

	A) struct a_struct {int a;};
	B) struct {int a;}
	C) struct a_struct {int a;}
	D) struct a_struct int a;
	*/

	//3. answer: 8

	/*
	union test{
	long long x;
	char arr[10];
	int y, x, Z;
	};
	printf("%d", sizeof(test));
	*/

	//4. answer: 16

	/*
	union test{
	double x;
	char arr[16];
	short int y;
	};
	printf("%d", sizeof(test));
	*/

	//5. answer: 4

	/*
	struct point {
	int x,y,z;
	};
	struct point p = {1, 2, 3};
	printf("%d", p.x + p.z);
	*/

	//6. answer: 10

	/*
	struct point{
	int x, y;
	}a;

	a.x = 4; a.y = 6;
	printf("%d", a.x + a.y);
	*/

	//7. answer: 24

	/*
	struct Point{
	int x, y;
	};

	struct Point *p = (struct Point*)calloc(10, sizeof(Point));
	printf("%d", (char*)&p[5] - (char*)&p[2]); // 8 i vururq cunki orda sende bir line da iki int var ve heresi 4 size goturur

	SOMETHING LIKE:
	2. int x int y  // bu line in size edir 8
	3. int x int y  // bu line in size edir 8
	4. int x int y  // bu line in size edir 8
	5. int x int y  // bu line in size edir 8

	ve bizden de  5 ci setrden 2 ci setire kimi ne qeder size var onu tap deyir onu da 5 - 2 * 8 edirik
	*/

	//8. answer: A

	/*
	Which of the following accesses a variable in strucure *b? // pointere gore A

	A) b->var
	B) b.var
	C) b-var
	D) b>var

	*/

	//9. answer: A

	/*
	Which properly declares a variable of struct foo?

	A) struct foo var;
	B) struct foo;
	C) foo;
	D) int foo;

	*/

	//10. answer: -40

	/*
	struct Point{
	int x, y;
	};

	struct Point *p = (struct Point*)calloc(10, sizeof(Point));
	struct Pointer *q = p+2, *w = p+7;
	printf("%d", (char*)q - (char*)w);
	*/

	//11. answer: 46

	/*
	struct MY{
	char name[10];
	char surname[20];
	long long x, y;
	};

	printf("%d", sizeof(MY));

	*/

	//12. answer: A

	/*
	--Consider the following struct. Which is the correct option to chanfe the ranging variable to 45?--

	struct video{
	char name[50];
	int ranking;
	};

	struct video cats = {"CatVid", 53};
	struct video *ptr = &cats;

	A) ptr-> renking = 45;
	B) ptr.ranking = 45;
	C) ranking -> ptr = 45;
	D) ptr = 45;

	*/

	//13. answer: -3

	/*
	struct Point{
	int x, y;
	};

	struct Point *p = (struct Point*)calloc(10, sizeof(Point));
	struct Pointer *q = p+2, *w = p+5;
	printf("%d", q - w);
	*/


	//14. answer: A

	/*
	Which of the following accesses a variable in structure b?

	A) b.var
	B) b->var
	C) b-var
	D) b>var

	*/

	//15. answer:A

	/*
	struct node
	{
	int i;

	float j;
	};
	struct node *s[10];

	The above declaration define 's' to be

	A) An array, each element of which is a pointer to a structure of type node

	B) A structure of 2 fields, each field being a pointer to an array of 10 elements

	C) A structure of 3 fields: an integer, a float, and an array of 10 elements

	D) An array, each element of which is a structure of type node.
	*/


}





//<---------------------------------------------------//GRADED//--------------------------------------------------->





#pragma region Graded Quiz 1

/*1. int cnt = 2;
for (int i = 2; i < 10; i++) {
	cnt++;
	if (i > 7) break;
}
printf("%d\n", cnt); 9 */

/*2. int cnt = 1;
for (int i = 35; i > 7; i--) {
	switch (i)
	{
	case 15:
		cnt += 15;
		break;

	case 10:
		cnt += 10;
		break;

	case 7:
		cnt += 7;
	}
}

printf("%d\n", cnt); 26 */

/*3.
int cnt = 0;
for (int i = 10; i > 0; i--) {
	cnt++;
	i -= 2;
}
printf("%d\n", cnt); 4 */

/*4. int cnt = 4;
for (int i = 10; i >= 2; i--) {
	if (i % 3 > 1) cnt++;
}
printf("%d\n", cnt); 7 */

/*5. int i = 17;
for (; i; i--) {
printf("Hello\n"); 17
} */

/*6. int a = 7, b = 2;
int res = ++a + ++b;
printf("%d\n", res + a); 19 */

/*7. int a = 3, b = 8;
int res = (a % 2) + (a % b) + (b % a);
printf("%d\n", res); 6 */

/*8. int a = 6, b = 13;
int res = b / a + b % a + (a < b) + (a > b);
printf("%d\n", res); 4 */

/*9. double x = 4.3757;
printf("%.3lf\n", x); 4.376*/

/*10. printf("%.d\n", printf("ADA University\n")); 15 */

/*12. float a[10];
int res = sizeof(a) / sizeof(long long);
printf("%.d\n", res); 5 */

/*13. int a[6] = { 5,2,7,1,6,2 };
int res = 0;
for (int i = 1; i < 5; i++) {
	if (a[i] > a[i - 1]) res += a[i];
}
printf("%.d\n", res); 13 */

/*15. double a[10];
int res = sizeof(a) / sizeof(int);
printf("%.d\n", res);
return 0; 20 */

/*16. int a = 4, b = 9, res;
res = (++a > --b - 4) ? a++ : --b;
printf("%.d\n", res - a); - 1 */

/*17. int a = 8;
if (a++ > 7 || ++a >= 5 || a++ > 2) {
	printf("YES\n");
}
else {
	printf("NO\n");
}
printf("%.d\n", a); YES and 9 */

/*18. int a = 11, b = 7, res;
if (a % 3 > b % 3) {
	res = ++a * --b;
}
else {
	res = --a / ++b;
}
printf("%.d\n", res); 72 */

/*19. int x = 7;
switch (x) {
case 7: x--;
case 4: x--;
default: x--;
}

printf("%.d\n", --x); 3 */

/*20. int x = 10;
switch (x) {
case 7: x--;
case 4: x--;
default: x--;
}

printf("%.d\n", --x); 8 */

#pragma endregion
//}

#pragma region Graded Quiz 2

//1. int a = 2, c = 3;
//
//int f(int a, int b) {
//	return a + b + c;
//}
//
//int main()
//{
//	printf("%d\n", f(1, 2));
//} 6


//2. int f(int x) {
//	if (x == 1) return x + 1;
//	return f(x - 1) * 3;
//}
//
//int main()
//{
//	printf("%d\n", f(3));
//} 18


//3. int f(int n) {
//	while (n > 99) n /= 10;
//	return n;
//}
//
//int main()
//{
//	printf("%d\n", f(1234));
//} 12

//4. int x = 1, y = 1;
//
//void f(int x) {
//	x++; y++;
//}
//
//int main() {
//	f(5);
//	printf("%d\n", x + y);
//} 3

//5. int f(int a, int b) {
//	if (a == 2) return b++;
//	return f(a - 1, b) + 3;
//}
//
//int main()
//{
//	printf("%d\n", f(4, 10));
//} 16

//6.int f(int x) {
//
//	if (x == 0) return 0;
//	return f(x - 1) * 532;
//}
//int main() {
//	int x = 123456;
//	f(x);
//	printf("%d\n", f(x));
//} // 0

//7. int f(int x) {
//	if (x == 1) return x + 1;
//	return f(x - 2) + 5;
//}
//
//int main()
//{
//	printf("%d\n", f(9));
//} 22

//8. int f(int a, int b) {
//	if (a == 0) return 1;
//	return f(a - 1, b) * 3;
//}
//
//int main()
//{
//	printf("%d\n", f(2, 3));
//} 9

//9. int f(int a, int b) {
//	if (a == 0) return b;
//	if (b == 0) return a;
//	return f(a - 1, b - 2);
//}
//
//int main()
//{
//	printf("%d\n", f(10, 10));
//} 5

//10. int f(int n) {
//	int cnt = 0;
//	while (n > 0) {
//		cnt++;
//		n /= 10;
//	}
//	return cnt;
//}
//
//int main()
//{
//	printf("%d\n", f(1234));
//} 4


//11. int main()
//{
//	char a[] = "Crocodile";
//	a[5] = '0';
//	printf("%d\n", strlen(a + 2));
//} 7


//12. int main()
//{
//	char a[] = "ADA Uni";
//	printf("%d\n", strlen(a + 3));
//} 4

//13. int main()
//{
//	char s[100] = "home";
//	char t[100] = "student";
//	strcat(s + 2, t + 4);
//	puts(s);
//} homeent

//14. int main()
//{
//	char s[100] = "table";
//	char t[100] = "chair";
//	strncat(s + 2, t + 3, 2);
//	puts(s);
//} tableir


//15. int main()
//{
//	char s[100] = "catcatcat";
//	char t[100] = "student";
//	strncat(s + 1, t + 3, 2);
//	puts(s); // strncat cat olan yerde ferq elemir hecne
//} catde

//16. int main()
//{
//	printf("%d\n", strncmp("camp", "can", 3));
//} -1

//17. int main()
//{
//	char a[50];
//	int res = sizeof(a) * sizeof(int);
//	printf("%d\n", res);
//} 200

//18. int main()
//{
//	char s[100] = "cool";
//	char t[100] = "weather";
//	strcat(s + 1, t + 4);
//	puts(s);
//} coolher

//19. int main()
//{
//	char a[100];
//	scanf("%s", a); // amazonka;
//	scanf("%s", a); // site;
//	printf("%d\n", strlen(a + 2) * strlen(a + 5));
//} 6

//20. int main()
//{
//	printf("%d\n", strcmp("camp", "cam"));
//} 1

#pragma endregion
#pragma region Graded Quiz 4
	/*
//1.answer: 9
	/*
	int* ptr =(int*)malloc(20);
	for(int i=0; i<5; i++) ptr[i]=i+7;
	printf("%d\n", *(ptr+2));   // p[2] means
	*/

	//2. answer: -16
	/*
		double* p = (double*)calloc(100,sizeof(long long));
		printf("%d\n", (char*)(p+1) - (char*)(p+3)); // iki pointer arasindaki size yani 1-3 * 8 / 1
	*/


	//3. answer: 12
	/*
		long long *p= (long long*)calloc(80, sizeof(long long));
		for(long long i=0; i<10; i++) p[i]=i+1;
		long long *q= p+5;
		printf("%d\n", *(q-1) + *(q+1)); // 4 6  p[4] and p[6]
	*/

	//4. answer: A
	/*
	Which of the following is the proper declaration of a pointer?
		A.int *x;
		B.int x;
		C.int &x;
		D.ptr *x;
		E.ptr x;
	*/

	//5. answer: 12
	/*
		long long *p = (long long*)calloc(80, sizeof(long long));
		for(long long i=0; i<10; i++) p[i]=i+1;
		long long *q= p+5;
		printf("%d\n", *(q-1) + *(q+1)); // 4 6  p[4] and p[6]

	*/

	//6. answer: -8
	/*
		double* p=(double*)calloc(100, sizeof(long long));
		printf("%d\n", (int*)(p+2) - (int*)(p+6));  //4 * 8 / 4 = -8

	*/

	//7. answer: 12
	/*
		long long *p = (long long*)calloc(80, sizeof(long long));
		printf("%d\n",(short int*)(p+4) - (short int*)(p+1)); // 3 * 8 / 2 = 12
	*/

	//8. answer: 8 ???
	//What is the output for the next code(for 64-bit architecture)
	/*
		int* p= (int*)malloc(100);
		printf("%d\n", sizeof(p));

	*/

	//9. answer: A
	/*
	Which of the following gives the value stored at the adress pointed to by pointer a?
		A.*a
		B.&a
		C.a
		D.address(a)
		E.->a
	*/

	//10. answer: A
	/*
	What will be the output of the following C code?
	   char s[]="hello";
		char* p= s+3;
		printf("%c %c\n", *(p+1), *(s+1));
	*/
	/*
		A.o e
		B.e o
		C.l h
		D.o l
		E.l o

	*/


	//11. answer: A
	/*
	Combine the following two statements into one:
		char* p;
		p=(char*)malloc(100);
	*/
	/*
		A.char *p= (char*)malloc(100);
		B.char p = *malloc(100);
		C.char *p=(char) malloc(100);
		D.char *p= (char *)(malloc *)(100);

	*/

	//12. answer: -36
	/*
		struct Point
		{
			int x,y,z;
		};
		struct Point* p=(struct Point*)calloc(10, sizeof(Point));
		printf("%d", (char*)&p[2] - (char*)&p[5]); // 2 - 5 vur size of struct  =  sizeof(Point)  o da olur  - 3* 12/1
	*/

	//13. answer: A
	/*
	What is the size of a C sturcture?
		A.Size of C structure is the total bytes of all elements of structure.
		B.C structure is always 128 bytes.
		C.Size of C structure is the size of largest element.
		D.Size of C structure is the size of smallest element.
		E.C structure is always 64 bytes.
	*/


	//14. answer: 80
	/*
		union Person{
			char name[80];
			int x,y,z;
			long long u;
		}p;
		printf("%d\n", sizeof(p));
	*/


	//15. answer: 96
	/*
		struct Person{
			char name[80];
			int x,y;
			double z;
		};
		printf("%d\n", sizeof(Person));
	*/

	//16. answer: 10
	/*
		struct Point{
			int x,y,z;
		}p[10];
		printf("%d\n", (short int *)&p[4].y - (short int *)&p[2].z);

		2. x y z
		3. x y z
		4. x y z
	*/

	//17.answer: 32
	/*
		struct Point
		{
		  int x,y;
		};
		struct Point* p = (struct Point*)calloc(20, sizeof(Point));
		printf("%d\n", (char*)&p[7] - (char*)&p[3]);

	*/

	//18. answer: 28
	/*
		struct Point{
			int x,y,z;
		}p[10];
		printf("%d\n", (char *)&p[5].x - (char *)&p[2].z); // 7 * size of one intiger it is equal 4 | 7 * 4=8
		2.x y z
		3.x y z
		4.x y z
		5.x y z
	*/

#pragma endregion


#pragma region Midterm


	/*1.
    char s[100] = "university";
	char t[100] = "school";
	strncpy(s + 2, t + 1, 3);
	puts(s); unchorsity */

	/*2.
	char a[] = "crocodile";   // burda  5 cinin yerine qoyanda onda sonrada bi dene /0 gelir deye null kimi oxuyur
	a[5] = 0;
	printf("%d\n", strlen(a + 2)); 3 */

	/*3.
	char s[100] = "school";
	char t[100] = "chair";
	strncpy(s + 1, t + 1, 2);
	puts(s); shaool */

	// 4. printf("%d\n", strncmp("camp", "camping", 4)) 0;

	// 5. printf("%d\n", strcmp("camp", "cam")); 1;

	/*6.
	int a = 2, c = 3;

	int f(int a, int b) {
		return a + b + c;
	}

	int main() {
		printf("%d\n", f(1, 2));
	} 6 */


	/*7.
	int x = 2, y = 3;

	void f(void) {
		x++; y++;
	}

	int main() {
		f();
		printf("%d\n", x + y);
	} 7 */


	/*8.
	int x = 1, y = 1;

	void f(int x) {
		x++; y++;
	}

	int main() {
		f(5);
		printf("%d\n", x + y);
	} 3 */


	/*9.
        int f(int n) {
		int cnt = 0;
		while (n > 0) {
			cnt += n % 10;
			n /= 10;
		}
		return cnt;
	}

	int main() {
		printf("%d\n", f(1234));
	} 10 */

	/*10.
        int f(int a, int b) {
		if (a == 0) return b;
		return f(a - 1, b) * 2;
	}

	int main() {
		printf("%d\n", f(3, 4));
	} 32 */

	/*11.
         float a[5];
	int res = sizeof(a) * sizeof(double);
	printf("%d\n", res); 160 */

	/*12.
	int a[6] = { 7,4,6,10,6,5 };
	int res = 0;
	for (int i = 2; i < 6; i++)
		if (a[i] > a[i - 1]) res += a[i - 1];

	printf("%d\n", res); 10 */

	/*13.
	int a[5] = { 1,2,3,4,5 };
	int res = a[1] + a[3];
	printf("%d\n", res); 6 */

	/*14.
	int a[6] = { 7,9,6,3,5,8 };
	int res = 2;
	for (int i = 1; i < 5; i++)
		if (a[i - 1] > a[i + 1]) res += a[i];

	printf("%d\n", res); 20 */

	/*16.
	int a = 3, b = 8;
	int res = (a % 2) + (a % b) + (b % a);
	printf("%d\n", res); 6 */

	/*17.
	int i = 9, cnt = 0;
	while (i >= 4) {
		i--;
		cnt += 3;
	}
	printf("%d\n", cnt); 18 */

	/*18.
	int cnt = 5;
	for (int i = 3; i < 10; i += 2)
		cnt += 3;
	printf("%d\n", cnt); 17 */

	/*19.
	int a = 5;
	if (a++ > 5 && ++a >= 5 && a++ > 5)
		printf("YES\n");
	else
		printf("NO\n");

	printf("%d\n", a); 6 */

	/*20.
	int a = 8;
	if (a++ > 7 || ++a >= 5 || a++ > 2)
		printf("YES\n");
	else
		printf("NO\n");

	printf("%d\n", a); 9 */
#pragma endregion
