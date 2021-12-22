#define _CRT_SECURE_NO_WARNINGS 1

//学函数了 

#include"stdio.h"
#include "string.h"

//int main()    Strcpy  字符串复制 函数
//{
//	char arr1[20] = { 0 };       
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2); //把后边的字符串复制到前面那个
//	printf("%s", arr1);
//}

//int main()   /*Memset 内存设置函数*/
//{
//	char arr1[20] = "hello bit";
//	memset(arr1,'x', 3);//（用x替换数组arr1的前三个字符，并返回数组 ）
//	printf("%s", arr1);
//}

//int get_max(int x, int y)  //找出函数值 最大值
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//把z返回给int （int 是储存比较之后的那个结果） 然后把值赋值给下面那个max
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max (a, b);
//	printf("max=%d\n", max);
//}


//int main()//关于指针
//{
//	int a = 10;
//	int* pa = &a;//int 一个指针变量，pa存的是a的地址 所以&a取地址
//	a = 20;  //再把指针pa里面的存的a 赋值为20
//	printf("%d",*pa);
//	return 0;
//}

//void Swap(int* x, int* y)  //因为要把a,b的值放到函数x,y里面去，但是如果只交换x，y，他们的地址是发生了变化的，也就是a，b并不会做交换
//{                              //所以把a,b的地址存到指针变量里面去，相当于int *x=&a  int *y=&b ；
//	int z = 0;                  //然后再设置中间值进行交换
//	z = *x;                      //空瓶 酱油、醋
//	*x = *y;                        //这里用void 是因为它不用返回值 只是交换两个变量 ；像上面的要返回一个最大值max才要返回
//	*y = z;
//}
//int main()  //用函数交换两个变量的值   
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap(&a, &b);//这里用自定义函数swap 取a，b的地址     （a,b是实参，x,y是形参在使用后就销毁，生命周期的概念）
//	printf("交换后:a=%d b=%d\n", a, b);
//}


//int is_prime(int x)
//{
//	//2到x-1去尝试除
//	int j = 0;
//	for (j = 2; j < x; j++) //2到x-1
//	{
//		if (x % j == 0)//如果被整除了
//			return 0;//返回0,说明不是素数 然后0!=1 所以会把所有值100-200全部打印
//	}
//	return 1;//返回1 1==1；不能整除的是素数，就只打印2到x-1不能整除的
//}
//int main()                                                                    //用函数判断是不是素数 100-200之间
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i) == 1)//如果函数的值返回的是1 就是素数 然后打印
//		{
//			printf(" %d", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//}


//函数如果不写返回类型 默认返回int 但是最好还是写上
//int leap_year(int x)
//{
//	return ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0));//优化  直接返回判断 因为结果真返回1，为假返回0
// 
//	/*if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;*/
//}
//int main()   //函数判断闰年
//{
//	int a = 0;
//	scanf("%d", &a);
//	leap_year(a);
//	if(leap_year(a)==1)
//		printf("是闰年");
//	else
//		printf("不是闰年");
//
//}



//*************************************上传blog*************************************
//int binary_search(int a[],int k,int s)//返回类型 int ，由实参传递到形参
//{
//	int left = 0;//左边第一个下标
//	int right = s-1;//右边的下标
//	while (left<=right)//正常情况下都是left<right,如果left=right的时候可能就是找到了
//	{
//		int mid = (left + right) / 2;//二分
//		if (a[mid] > k)//如果要查找的数组a中的mid大于k，就说明中间值比k大，那右边的直接可以舍弃，跳到中间值，并减一位
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else//大于小于都找完了，剩下就是等于了 这时候返回中间值mid就是所要查找的值了
//		{
//			return mid;
//		}
//	
//	}
//	return -1;//如果都没有满足上面的条件 就是找不到 返回-1
//}
//
//int main()   //创建函数二分查找
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//40个byte除以4个字节 就是10 ——>10个元素
//
//	//找到了返回下标 ；找不到返回-1 （不返回0是因为第一个元素的下标也是0 容易歧义
//	int ret = binary_search(arr,key,sz);//实参传递：数组、要查找的值、元素个数
// //数组arr传参，实际传递的不是数组本身，而是数组的首位元素的地址
//	if (-1 == ret)
//		printf("没找到\n");
//	else
//		printf("找到了，下标是:%d\n",ret);
//	return 0;
//}

//void Add(int *p)//这个指针接受的是num的地址
//{
//	(*p)++;//指针++要加括号
//}
//int main()//每调用一次函数就把 num加一次
//{
//	int num = 0;
//	Add(&num);//把num的地址传给*p，然后*p++ 就是num++，只有传址才能改变 num
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d", num);
//}


//int main() //这个需要注意下
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    //注：printf函数的返回值是打印在屏幕上字符的个数
//    return 0;
//}


////***********************************************递归*************************************************
//int main()//   递归 1234 分别打印1，2，3，4 自己调用自己
//{
//	unsigned int num = 1234;
//	void print(num); //声明函数  先声明后调用
//	print(num);//调用下面的函数
//	return 0;
//}                                                     //这里还不是很理解，感觉很妙
// void print(unsigned int n)
//{
//	 //if (n > 9)//判断条件
//	 //{
//		// print(n / 10);//自己调用自己 并不断缩小范围 由大化小
//	 //}
//	 /printf("%d ", n % 10);    
//    //先打印最深的 然后打印外层的
//	
// 
// 
// 
// //尝试逆序输出
//  printf("%d", n % 10);          //先把它第一个数打印出来
//	 n = n / 10;                    //然后再除10的 你别想着先出或者先模，这样原始的数字已经变了，接下来就不好弄
//	 if (n > 0)                     
//		 print(n);
//}


//**************************************************递归求字符串长度（不创建临时变量）*********************************
//int my_strlen(char* str)//字符型指针变量str 接受了 数组第一位字符的地址  也就是把'b'的地址传过去了
//{
//	if (*str != '\0')//判断 是不是结束符号'\0'
//	{
//		return 1 + my_strlen(1 + str);
//      //如果不是  返回的时候再调用一次函数，不过这次是加了1的，也就是数组的第二个地址'i'
//		//这时就 进入到“内部”去了，开始递归。在“内部”的时候*str已经是数组的第二个地址'i'了，判断了还不是，再加1继续递归。
//		//直至到第三次递归终于轮到‘\0’，这时最里面那层判断是else，返回return0；然后返回0之后再到倒数第二次递归，是1+my_strelen也就是1；
//		//之后再返回到第一次递归1+1=2;再返回最外层1+2=3； 这是值已经是3然后返回到int值，到下面printf再把返回值一调用 ，done！
// 
//     //补充：至于这里为什么不用str++或者++str，因为不管是先加还是后加，都把str原本的值改变了，而+1不会改变str本身；
//            传进去的是加一之后的结果，留下的还是原来的
//	}
// 
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";  //define 一个字符型数组 包含字符串bit
//	//['b'] ['i'] ['t'] ['\0']
//	printf("%d\n", my_strlen(arr));//在print的时候调用函数my_strlen并把arr传过去
//
//	return 0;
//}



//int main()  //n的阶层review             （迭代
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d的阶层是：%d\n", n, ret);	
//}
//
//
//
//int Fac(int n)                     函数递归求n！
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n-1);//比如求3的阶层，3*2*1
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}


//int fib(int n)           //递归的斐波那契数
//{
//	if (n <= 2)
//		return 1;//前两个都是1
//	else
//		return fib(n - 1) + fib(n - 2); //根据公式来写 不过效率很低 因为有大量重复的计算
//}
//
//int fib(int n)            //迭代的斐波那契数（优化算法
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)//这个循环条件 ：前两个是1  只有大于二的时候满足 没什么毛病
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()//求斐波那契数
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d的斐波那契数为=%d\n",n, fib(n));
//}

//int main()  //计算1/1-1/2+1/3-1/4……的值
//{
//	int i = 0;
//	double sum = 0.0;//双精度浮点型 用0.0 
//	for (i = 1; i <= 100; i++) //创建分母 不断循环++
//	{
//		if (i % 2 == 0)//i%2==0就是 偶数呀
//			sum -= 1.0 / i;//偶数的时候就减去相应的值
//		else
//			sum += 1.0 / i;//奇数的时候就加上相应的值
//	}
//	printf("%lf\n", sum);//double 对应%lf   float对应%f
//		return 0;
//}
//************************************************另外一种做法**********************************************
//int main()  //计算1/1-1/2+1/3-1/4……的值
//{
//	int i = 0;
//	double sum = 0.0;//双精度浮点型 用0.0 
//	int flag = 1;  //用来控制正负
//	for (i = 1; i <= 100; i++) //创建分母 不断循环++
//	{
//		sum += flag * 1.0 / i;  //第一次flag就是1，然后就相当于不变，后面偶数时变为-1，算完后负负得正又变1了
//		flag = -flag;
//
//	}
//	printf("%lf\n", sum);//double 对应%lf   float对应%f
//		return 0;
//}


////十个数找出最大值
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//先设定第一个数就是最大数
//	for (i = 1; i < 10; i++)//每次循环 数组的下标加上一个1
//	{
//		if (arr[i] > max)//用下一个和第一个比较
//			max = arr[i];//如果大于它就把值赋给它
//	}
//	printf("%d\n", max);
//	return 0;
//}

//9*9乘法口诀表
//int main()
//{
//	int i = 1;//row
//	int j = 0;//column
//	for (i = 1; i <= 9; i++)
//	{
//	
//		for (j = 1; j <= i; j++)//j根据i来循环 都是9次  
//			//他这里循环 调试一次就懂了，每次j都是从1开始，打印到i的值，比如i是4，j就从1开始每次都打印
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//每循环一次就打印一次呗
//		}
//		printf("\n");//因为j不满足条件跳出了，所以下次循环需要重新从1开始，而i始终满足，所以是累加
//	}
//	return 0;
//}
//void printf_table(int n)
//{
//	int i = 0;//行数
//	for (i = 1; i <= n; i++)//i从1开始，打印n行
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()  //乘法表n是多少就打印多少行
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf_table(n);
//	return 0;
//}

//int Fun(int n)   //有意思的递归  当n=2时一层一层算 
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2*Fun(n + 1);
//}
//int main()
//{
//	int n = 0;
//	printf("%d", Fun(2));
//}




//int my_strlen(char* str)  //自定义函数求字符串长度 相当于strlen
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char *str) //用一个指针来接受str的第一个元素的地址  你写成str[]也是一样的道理
//{
//	int left = 0;
//	int right = strlen(str)-1;
//	while (left < right)
//	{
//		char tem = 0;
//		tem = str[left];//   *(str+left)可以用这个来代替
//		str[left] = str[right];
//		str[right] = tem;
//		left++;
//		right--;
//	}
//}
//int main()  //把数组里面的元素调换 ，然后输出
//{
//	char arr []= "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//#include <stdio.h>
//int main()  //理清 指针数组
//{
//	/* 带有 5 个元素的整型数组 */
//	double balance[5] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
//	double*p =&balance;
//	int i;
//
//	/*p = balance;*/
//
//	/* 输出数组中每个元素的值 */
//	printf("使用指针的数组值\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("*(p + %d) : %f\n", i, *(p + i));
//	}
//
//	printf("使用 balance 作为地址的数组值\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("*(balance + %d) : %f\n", i, *(balance + i));
//	}
//
//	return 0;
//}

//void reverse_string(char str[])//把数组arr首位的地址放在str
//{
//	char tem = str[0]; //把a的地址存到tem
//	int len = strlen(str);//求数组里面字符串长度
//	str[0] +=  len - 1;//把最后一个字符f放到原来a的位置
//	*(str + len - 1) = '\0';//把f的空位补上\0表示结束
//
//	if (strlen(str + 1) >= 2)//判断 当字符串长度大于等于二的时候 递归才有意义，（限制条件） 而且>=2的时候才能调换位置 逆序操作
//	{
//		reverse_string(str + 1);//进行相同的操作 直到把所有字符调换
//	}
//	*(str + len - 1) = tem;
//}
//int main()  //把数组里面的元素调换 ，然后输出  （递归算法）
//{
//	char arr []= "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//今天时间有点晚，明天把代码重新听一遍 然后把指针改成数组形式试一下是否是自己认为的那样
//*******事实证明 指针数组就是指向数组元素的第一个下标 ：“我用str[0]替换了*str结果还是一样的” ***********


//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);//
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()//求 n的k次方 （用递归的方法）
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double  sum =Pow(n, k);
//	printf("%lf", sum);
//}


//汉诺塔

///*   “这个代码结果看不懂”
// 算法思路：1将 n-1个盘子先放到B座位上
//          2.将A座上地剩下的一个盘移动到C盘上
//          3、将n-1个盘从B座移动到C座上
//*/
////函数声明
//void move(char x, char y);
//void hannuo(int n, char one, char two, char three)
//{
//    if (n == 1)move(one, three); //递归截止条件
//    else
//    {
//        hannuo(n - 1, one, three, two);//将 n-1个盘子先放到B座位上
//        move(one, three);//将A座上地剩下的一个盘移动到C盘上
//        hannuo(n - 1, two, one, three);//将n-1个盘从B座移动到C座上
//
//    }
//}
//void move(char x, char y)
//{
//    printf("%c--->%c", x, y);
//}
//
//int main()
//{
//    int n;
//    printf("input your number");
//    scanf("%d", &n);
//    hannuo(n, 'A', 'B', 'C');
//    return 0;
//}



//另一个人写的
//void Move(char x, char y)
//{
//	printf("%c ---> %c\n", x, y);
//}
//void Hanoi(int m, char a, char b, char c)
//{
//	void Move(char x, char y);//声明
//	if (m == 1)
//	{
//		Move(a, c);
//	}
//	else
//	{
//		Hanoi(m - 1, a, c, b);
//		Move(a, c);
//		Hanoi(m - 1, b, a, c);
//	}
//}
//int main()
//{
//	//int n = 0;
//	int m = 0;
//	printf("请输入盘子数：");
//	scanf("%d", &m);
//	Hanoi(m, 'A', 'B', 'C');
//	return 0;
//}
//

//借鉴之后 自己写的
//首先，汉诺塔移动就差不多三个步骤
//step1：把A塔上n-1个元素先移动到B，
//step2：把A塔上最后一个元素移动到C
//step3：再把B塔上的n-1个元素移动到C
//总结：这个递归每次移动都是少移动一个元素如此循环，步骤也是一样的，由大化小，终止条件就是当n=1的时候，也就是只有一个盘子的时候，直接塔A-塔C
//void Move(char x, char y)
//{
//	printf("%c——>%c\n", x, y);
//}
//void Hanoi(int n,char A,char B,char C)
//{
//	if (n == 1)
//	{
//		Move(A,C);
//	}
//	else
//	{
//		Hanoi(n - 1, A, C, B);  //原来的个数n减去1，然后先把A上面的移动到B，这时候用C来作跳板，把它放中间.
//		Move(A, C);              //为什么是n-1，因为每次移动不能把全部移走，只能留下n-1个
//		Hanoi(n - 1, B, A, C);  //step3：再把B塔上的n-1个元素移动到C
//	}
//}
//int main()
//{
//	char A,B,C;
//	int n = 0;
//	printf("请输入汉诺塔中的元素个数：");
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B','C');
//	return 0;
//}//感觉懂 但没有很深入


//青蛙跳台阶  感觉有点像斐波那契数
//int frog(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	//当只有1，2层台阶的时候，只有1，2种跳法
//	else
//	{
//		return (n - 1) + (n - 2);
//		//这个公式分析：当有3层台阶的时候：1.先跳一层，还有两层，就还有两种跳法   2.先跳两层，还有一层，只剩一种跳法了
//		//有4层台阶的时候：1.先跳一层，还有三层，就把三层的跳法加上去（3种）      2.先跳两层，还有两层，就把两层台阶的跳法加上去（2种）
//		//这样思考就可以延申了，因为青蛙只有一次一层； 一次两层这两种跳法，如果一次还可以一次跳三层，则可以加上（n-3）……可拓展（n-k）
//
//		//分析一下一次可以跳三层的方法：比如说要跳4层，先跳一层，还有三层（三种），先跳两层，还有两层（两种），先跳三层还有一层(1种)
//		//3+2+1=6种
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要跳的台阶数：");
//	scanf("%d", &n);
//	printf("共有%d种跳法\n", frog(n));
//}