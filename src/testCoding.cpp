#define test1000 1

/*
test0：时间显示 time.h
test001:大疆笔试
test003:SHEIN笔试
test004:美团笔试
test005:腾讯笔试
test006:完美世界
***********************************华为面试题*******************************************
test1：空瓶子换汽水，最多喝几瓶
test2：数字去重和排序
test3：十六进制转十进制
test4：要求每隔两个数删掉一个数，到末尾时循环（约瑟夫环问题）
test5：字符串去重，顺序输出
test6：数独游戏
test7：成绩查询、插入操作
test8：文件名记录系统
test9：扑克牌游戏比大小
test10：括号正确匹配检测
test11：打印机打印任务
test19：输入不少于5位整数，输出：1.整数位数 2.空格间隔输出结果 3.逆序整数
test20：IP地址是否重叠检测
test21：正整数排序，认末尾三位数

***********************************网易面试题*******************************************
test100:成绩排名统计
test101:能否成功放置货物判断
test102:给定一个序列，将大于指定数字的数-1，计算每次操作减的数字的个数
test103:判断是否存在一个子集合，使得其中的所有元素按位或=指定数字
test104:小易给定你数字A,B(A<B)和系数p,q。每次操作你可以将A变成A+p或者将p变成p*q。问至少几次操作使得B<=A
test105:小易给定你一个长度为的正整数序列，你每次可以使用的代价将某个数加一或者减一，你希望用最少的代价使得所有数的乘积等于，求最小代价（操作结束后每个数也必须是正整数）。
test106:小易有n根柱子，第i根柱子的高度为hi。一开始小易站在第一根柱子上。小易能从第i根柱子跳到第j根柱子，当且仅当hj<=hi且1<=i-j<=k。其中k为指定的一个数字。
		另外小易拥有一次释放超能力的机会。这个超能力能让小易从柱子跳到任意满足的柱子而无视柱子高度的限制。
		现在小易想知道，小易是否能到达第根柱子。
test107:小易的公司一共有n名员工, 第i个人每个月的薪酬是x_i万元。
		现在小易的老板向小易提了m次询问, 每次询问老板都会给出一个整数k, 小易要快速回答老板工资等于k的员工的数量
test108:给定01序列S, 序列S是优秀的01序列，优秀的01序列定义如下:
		1、如果序列S,T是优秀的，则序列S+T是优秀的，+被定义为按顺序连接两个序列，即"010"+"110"="010110"。
		2、如果序列S是优秀的，则序列rev(S)也是优秀的。rev(S)被定义为按位翻转(0变1,1变0)序列S，并删去前导零。例如rev("1100101")="11010"。
		现在请你判断序列T是不是优秀的
test109:随着又一届学生的毕业，社团主席换届选举即将进行。
		一共有n个投票者和m个候选人，小易知道每一个投票者的投票对象。但是，如果小易给某个投票者一些糖果，
		那么这个投票者就会改变他的意向，小易让他投给谁，他就会投给谁。
		由于小易特别看好这些候选人中的某一个大神，这个人的编号是1，所以小易希望能尽自己的微薄之力让他当选主席，
		但是小易的糖果数量有限，所以请你帮他计算，最少需要花多少糖果让1号候选人当选。
		某个候选人可以当选的条件是他获得的票数比其他任何候选者都多。
test110:两数相加(链表相加)
		输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
		输出：7 -> 0 -> 8
		原因：342 + 465 = 807
test111:找出字符串中的最长无重复字符字串长度
test112:最长回文子串
test113:整数反转
test114:最长公共前缀
test115:三数之和
test116:四数之和
test117:*******有效的括号*********
		给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
		有效字符串需满足：
		左括号必须用相同类型的右括号闭合。
		左括号必须以正确的顺序闭合。
		注意空字符串可被认为是有效字符串。
		输入: "()"
		输出: true
test118:合并两个有序链表
test119:*****************最长有效括号********************
		给定一个只包含 '(' 和 ')' 的字符串，找出最长的包含有效括号的子串的长度。
		输入: "(()"
		输出: 2
		解释: 最长有效括号子串为 "()"
test120:=全排列，返回所有不重复的全排列
		给定一个可包含重复数字的序列，。
test121:Pow(x, n)
test122:第k个全排列
test123:******************不同路径 II****************************
		一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为“Start” ）。
		机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为“Finish”）。
		现在考虑网格中有障碍物。那么从左上角到右下角将会有多少条不同的路径？
		输入:
		[
		[0,0,0],
		[0,1,0],
		[0,0,0]
		]
		输出: 2
test124:******************编辑距离************************
		给你两个单词 word1 和 word2，请你计算出将 word1 转换成 word2 所使用的最少操作数 。
		输入：word1 = "horse", word2 = "ros"
		输出：3
		解释：
		horse -> rorse (将 'h' 替换为 'r')
		rorse -> rose (删除 'r')
		rose -> ros (删除 'e')
test125:*******************解码方法***************************
		一条包含字母 A-Z 的消息通过以下方式进行了编码：
		'A' -> 1
		'B' -> 2
		...
		'Z' -> 26
		输入: "12"
		输出: 2
		解释: 它可以解码为 "AB"（1 2）或者 "L"（12）。
test126:*****************复原IP地址********************
		给定一个只包含数字的字符串，复原它并返回所有可能的 IP 地址格式。
		输入: "25525511135"
		输出: ["255.255.11.135", "255.255.111.35"]
test127:*******************************分发糖果******************************
		老师想给孩子们分发糖果，有 N 个孩子站成了一条直线，老师会根据每个孩子的表现，预先给他们评分。
		你需要按照以下要求，帮助老师给这些孩子分发糖果：
		每个孩子至少分配到 1 个糖果。
		相邻的孩子中，评分高的孩子必须获得更多的糖果。
		那么这样下来，老师至少需要准备多少颗糖果呢？
test128:****************环形链表是否有环，环的入口**********************
test129:****************尾部添加，最短回文串**********************
test130:****************排队买票，最短时间**********************
test131:被围绕的区域
test131:单词拆分


**********************************树问题*********************************************
test300:二叉树的中序遍历
test301:**********************不同的二叉搜索树*******************************
		给定一个整数 n，求以 1 ... n 为节点组成的二叉搜索树有多少种？
test302:*********************************不同的二叉搜索树 II**************************************
		给定一个整数 n，生成所有由 1 ... n 为节点所组成的二叉搜索树。
test303:**********************验证二叉搜索树**********************************
		给定一个二叉树，判断其是否是一个有效的二叉搜索树。
test304:***************************对称二叉树*********************************
		给定一个二叉树，检查它是否是镜像对称的。
test305:二叉树的层序遍历
test306:二叉树的锯齿形层次遍历
test307:二叉树的最大深度
test308:二叉树的最小深度
test309:从前序与中序遍历序列构造二叉树
test310:从后序与中序遍历序列构造二叉树
test311:将有序数组转换为二叉搜索树
test312:给定一个二叉树，判断它是否是高度平衡的二叉树
test313:*************************路径总和**************************
		给定一个二叉树和一个目标和，判断该树中是否存在根节点到叶子节点的路径，这条路径上所有节点值相加等于目标和。
test314:************************ 路径总和 II***************************
		给定一个二叉树和一个目标和，找到所有从根节点到叶子节点路径总和等于给定目标和的路径
test315:二叉树的后序遍历
test316:根据前序遍历和中序遍历，计算叶子节点个数



***********************************DP问题*******************************************
DP问题（把大问题分解为若干个相互联系的重复子问题）（12-18）
test12：DP问题，走矩阵，要求权值之和最大
test13：DP问题，LCS公共最大子序列
test14、15：区间DP问题，矩阵连乘问题（14），纸牌问题，石头合并问题（15）
test16、17、18：最长递增子序列（16）、最大子段和问题（17）、01背包问题（18）

***********************************排序*******************************************
test22：插入排序
test23：冒泡排序
test24：希尔排序
test25：堆排序
test26：归并排序
test27：快速排序
test28：表排序
test29：基数排序
test30：计数排序
test31：桶排序
test32：topK

***********************************其他***********************************************
test500:KMP算法
test501:全排列Anm，组合Cnm
test502:用位运算比较两数大小
test503:位运算实现两数相加
test504:构建栈，具备push  pop  geiMin功能
test505:两个栈实现一个队列
test506:利用递归函数逆序一个栈
test507:分割字符串
test508:实现猫狗类管理
test509:快排选择
test510:用两个栈实现对其中一个栈进行排序
test511:滑动窗口 取最大值
test512:最大矩形面积
test513:复制一个含有随机指针的链表
test514:9->3->7 +  6->3 = 937+63=1000

test600:判断是否回文链表
test601:链表按照给定m，划分区间  内部要求无序或有序版本
test602:删除链表倒数第K个节点
test603:十字斩
test604:构建最大树
*/


/*
有这样一道智力题：“某商店规定：三个空汽水瓶可以换一瓶汽水。
小张手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？”答案是5瓶，
方法如下：先用9个空瓶子换3瓶汽水，喝掉3瓶满的，喝完以后4个空瓶子，
用3个再换一瓶，喝掉这瓶满的，这时候剩2个空瓶子。然后你让老板先
借给你一瓶汽水，喝掉这瓶满的，喝完以后用3个空瓶子换一瓶满的还给
老板。如果小张手上有n个空汽水瓶，最多可以换多少瓶汽水喝？
输入案例：
3
10
81
0
输出案例：
1
5
40
*/
#ifdef test1
#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	while ((cin >> n) && (n != 0))
	{
		int result = n / 2;
		cout << result << endl;
	}
	return 0;
}
#endif //test1

/*
明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，
他先用计算机生成了N个1到1000之间的随机整数（N≤1000），对于其
中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不
同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找
同学做调查。请你协助明明完成“去重”与“排序”的工作(同一个测
试用例里可能会有多组数据，希望大家能正确处理)。
Input Param
n               输入随机数的个数
inputArray      n个随机整数组成的数组

Return Value
OutputArray    输出处理后的随机整数
输入案例：
3
2
2
1
11
10
20
40
32
67
40
20
89
300
400
15
输出案例：
1
2
10
15
20
32
40
67
89
300
400
*/
#ifdef test2
#include<iostream>
using namespace std;

int main()
{
	int N, n;
	while (cin >> N)
	{
		int result[1001] = { 0 };
		while (N--)
		{
			cin >> n;
			result[n] = 1;
		}
		for (int i = 0; i < 1001; i++)
		{
			if (result[i])
				cout << i << endl;
		}
	}
	return 0;
}
#endif
/*
写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。（多组同时输入 ）
输入案例：
0xA
输出案例：
10
*/
#ifdef test3
#include<iostream>
using namespace std;
int main()
{
	int N;
	while (cin >> hex >> N)
		cout << N << endl;
	return 0;
}
#endif // test3
/*
有一个数组a[N]顺序存放0~N-1，要求每隔两个数删掉一个数，到末尾时循环
至开头继续进行，求最后一个被删掉的数的原始下标位置。以8个数(N=7)为例:
｛0，1，2，3，4，5，6，7｝，0->1->2(删除)->3->4->5(删除)->6->7->0(删除),
如此循环直到最后一个数被删除。
输入案例：
8
输出案例：
6
*/
#ifdef test4
//#include <iostream>
//#include <queue>
//using namespace std;
//int main()
//{
//	int N;
//
//	while (cin >> N)
//	{
//		queue<int> q;
//		if (N > 1000)
//			N = 1000;
//		for (int i = 0; i < N; i++)
//			q.push(i);
//		int count = 0;
//		while (q.size() != 1)
//		{
//			if (count == 2)
//			{
//				q.pop();
//				count = 0;
//			}
//			else {
//              q.push(q.front());
//				q.pop();
//				count++;
//			}
//		}
//		cout << q.front() << endl;
//	}
//	return 0;
//}
#include <iostream>
using namespace std;
const int m = 3;
int main()
{
	int n, result = 0;
	while (cin >> n)
	{
		for (int i = 1; i <= n; i++) result = (result + m) % i;
		cout << result << endl;
	}
}

#endif //test4
/*
输入一个字符串，求出该字符串包含的字符集合
每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。
输入案例：
abcqweracb
输出案例：
abcqwer
*/
#ifdef test5
//哈希表
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		string result;
		int length = s.size(), i = 0;
		map<char, int> charmap;
		while (i < length)
		{
			if (charmap[s[i]] == 0)
			{
				charmap[s[i]] = 1;
				result += s[i];
			}
			i++;
		}
		cout << s << endl;
	}
	return 0;
}
#endif // test5
/*
数独是一个我们都非常熟悉的经典游戏，运用计算机我们可以很快地解开数独难题，
现在有一些简单的数独题目，请编写一个程序求解。
输入描述：
输入9行，每行为空格隔开的9个数字，为0的地方就是需要填充的
输入描述：
输出九行，每行九个空格隔开的数字，为解出的答案。
*/
#ifdef test6
#include <iostream>
#include <vector>
using namespace std;
bool fill_sudoku(vector<vector<int> > &matrix, vector<pair<int, int> > &blank, int n) {
	if (n == blank.size())
		return true;
	vector<bool> flags(9, false);
	int x = blank[n].first, y = blank[n].second;
	for (int i = 0; i < 9; ++i) {//row and column renouncement
		if (matrix[x][i] != 0)
			flags[matrix[x][i] - 1] = true;
		if (matrix[i][y] != 0)
			flags[matrix[i][y] - 1] = true;
	}
	int a[9][2] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1},{0,0} };
	int m = x / 3, k = y / 3;
	m = m * 3 + 1; k = k * 3 + 1;
	for (int i = 0; i < 9; ++i) {//square renouncement
		int temp = matrix[m + a[i][0]][k + a[i][1]];
		if (temp != 0)
			flags[temp - 1] = true;
	}
	for (int i = 1; i <= 9; ++i) {
		if (!flags[i - 1]) {
			matrix[x][y] = i;//test each of the candidates
			bool res = fill_sudoku(matrix, blank, n + 1);
			if (!res)
				matrix[x][y] = 0;
			else
				break;
		}
	}
	if (matrix[x][y] != 0)
		return true;
	else
		return false;
}
int main() {
	vector<vector<int> > matrix(9, vector<int>(9));
	vector<pair<int, int> > blank;
	for (int i = 0; i < 9; ++i)
		for (int j = 0; j < 9; ++j) {
			cin >> matrix[i][j];
			if (matrix[i][j] == 0)
				blank.push_back(make_pair(i, j));
		}
	fill_sudoku(matrix, blank, 0);
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cout << matrix[i][j];
			if (j != 8)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
#endif //test6
/*
输入包括多组测试数据。
每组输入第一行是两个正整数N和M（0 < N <= 30000,0 < M < 5000）,分别代表学生的数目和操作的数目。
学生ID编号从1编到N。
第二行包含N个整数，代表这N个学生的初始成绩，其中第i个数代表ID为i的学生的成绩
接下来又M行，每一行有一个字符C（只取‘Q’或‘U’），和两个正整数A,B,当C为'Q'的时候, 表示这是一条询问操作，他询问ID从A到B（包括A,B）的学生当中，成绩最高的是多少
当C为‘U’的时候，表示这是一条更新操作，要求把ID为A的学生的成绩更改为B。
输入案例：
5 7
1 2 3 4 5
Q 1 5
U 3 6
Q 3 4
Q 4 5
U 4 5
U 2 9
Q 1 5
输出案例：
5
6
5
9
*/
#ifdef test7
#include <iostream>
#include <map>
using namespace std;

int main()
{
	int N, n, score;
	while (cin >> N >> n)
	{
		map<int, int> allInfo;
		for (int i = 1; i <= N; i++)
		{
			cin >> score;
			allInfo.insert(pair<int, int>(i, score));
		}
		char handle;
		int num1, num2, max = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> handle >> num1 >> num2;
			switch (handle)
			{
			case 'Q':
				if (num1 > num2)
				{
					int temp = num1;
					num1 = num2;
					num2 = temp;
				}
				for (int j = num1; j <= num2; j++)
				{
					if (allInfo[j] > max)
					{
						max = allInfo[j];
					}
				}
				cout << max << endl;
				break;
			case 'U':
				allInfo[num1] = num2;
				break;
			default:
				cout << "操作错误！"; break;
			}
			max = 0;
		}
	}
	return 0;
}
#endif // test7
/*
开发一个简单错误记录功能小模块，能够记录出错的代码所在的文件名称和行号。
处理:
1.记录最多8条错误记录，对相同的错误记录(即文件名称和行号完全匹配)只记录一条，错误计数增加；(文件所在的目录不同，文件名和行号相同也要合并)
2.超过16个字符的文件名称，只记录文件的最后有效16个字符；(如果文件名不同，而只是文件名的后16个字符和行号相同，也不要合并)
3.输入的文件可能带路径，记录文件名称不能带路径

将所有的记录统计并将结果输出，格式：文件名代码行数数目，一个空格隔开，如: fpgadrive.c 1325 1

	结果根据数目从多到少排序，数目相同的情况下，按照输入第一次出现顺序排序。

	如果超过8条记录，则只输出前8条记录.

	如果文件名的长度超过16个字符，则只输出后16个字符

输入案例：
E:\V1R2\product\fpgadrive.c 1325
输出案例：
fpgadrive.c 1325 1
*/
#ifdef test8
#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

typedef struct AllInfo
{
	string file;
	int count;
	int rank;
	AllInfo(const string _file, const int _count, const int _rank)
	{
		this->file = _file;
		this->count = _count;
		this->rank = _rank;
	}
}ALLINFO;
typedef struct Info
{
	int count;
	int rank;
	Info(const int _count, const int _rank)
	{
		this->count = _count;
		this->rank = _rank;
	}
}INFO;
struct compare
{
	bool operator()(const ALLINFO& f1, const ALLINFO& f2)
	{
		if (f1.count == f2.count)
		{
			return f1.rank < f2.rank;
		}
		else {
			return f1.count > f2.count;
		}
	}
};

using SIT = set<ALLINFO, compare>::iterator;
using MIT = map<string, INFO>::iterator;

int main()
{
	string linestr;
	int i = 0, j = 0;
	set<ALLINFO, compare> all_info;
	map<string, INFO> temp_info;

	while (getline(cin, linestr))
	{
		if (linestr.length() == 0) break;
		int pos = linestr.rfind('\\');
		string file = linestr.substr(pos + 1);
		MIT mit = temp_info.find(file);
		if (mit == temp_info.end())//no find,create
		{
			temp_info.insert(pair<string, INFO>(file, INFO(1, i)));
		}
		else {
			INFO temp(mit->second.count + 1, mit->second.rank);
			temp_info.erase(mit);
			temp_info.insert(pair<string, INFO>(file, temp));
		}
		i++;
	}
	for (auto& it : temp_info)
	{
		all_info.insert(ALLINFO(it.first, it.second.count, it.second.rank));
	}
	for (SIT i = all_info.begin(); i != all_info.end() && j < 8; i++, j++)
	{
		if (i->file.find(' ') <= 16)//字符串<16
		{
			cout << i->file << " " << i->count << endl;
		}
		else {
			cout << i->file.substr(i->file.find(' ') - 16) << ' ' << i->count << endl;
		}
	}
	return 0;
}
#endif //test8
/*
扑克牌游戏大家应该都比较熟悉了，一副牌由54张组成，含3~A，2各4张，小王1张，大王1张。牌面从小到大用如下字符和字符串表示（其中，小写joker表示小王，大写JOKER表示大王）:)
3 4 5 6 7 8 9 10 J Q K A 2 joker JOKER
输入两手牌，两手牌之间用“-”连接，每手牌的每张牌以空格分隔，“-”两边没有空格，如：4 4 4 4-joker JOKER
请比较两手牌大小，输出较大的牌，如果不存在比较关系则输出ERROR

基本规则：
（1）输入每手牌可能是个子，对子，顺子（连续5张），三个，炸弹（四个）和对王中的一种，不存在其他情况，由输入保证两手牌都是合法的，顺子已经从小到大排列；
（2）除了炸弹和对王可以和所有牌比较之外，其他类型的牌只能跟相同类型的存在比较关系（如，对子跟对子比较，三个跟三个比较），不考虑拆牌情况（如：将对子拆分成个子）
（3）大小规则跟大家平时了解的常见规则相同，个子，对子，三个比较牌面大小；顺子比较最小牌大小；炸弹大于前面所有的牌，炸弹之间比较牌面大小；对王是最大的牌；
（4）输入的两手牌不会出现相等的情况。

答案提示：
（1）除了炸弹和对王之外，其他必须同类型比较。
（2）输入已经保证合法性，不用检查输入是否是合法的牌。
（3）输入的顺子已经经过从小到大排序，因此不用再排序
输入案例：
4 4 4 4-joker JOKER
输出案例：
joker JOKER
*/
#ifdef test9
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string ss, ss1, ss2;
	string temp = "345678910JQKA2";
	while (getline(cin, ss))
	{
		ss1 = ss.substr(0, ss.find('-'));
		ss2 = ss.substr(ss.find('-') + 1);
		if (ss1 == "joker JOKER")
		{
			cout << ss1 << endl; break;
		}
		if (ss2 == "joker JOKER")
		{
			cout << ss2 << endl; break;
		}
		int num1 = count(ss1.begin(), ss1.end(), ' ');
		int num2 = count(ss2.begin(), ss2.end(), ' ');
		if (num1 == num2)
		{
			string temp1 = ss1.substr(0, ss1.find(' '));
			string temp2 = ss2.substr(0, ss2.find(' '));
			if (temp.find(temp1) > temp.find(temp2))
			{
				cout << ss1 << endl;
			}
			else {
				cout << ss2 << endl;
			}
		}
		else
		{
			if (num1 == 3)
			{
				cout << ss1 << endl;
			}
			else if (num2 == 3)
			{
				cout << ss2 << endl;
			}
			else
			{
				cout << "ERROR" << endl;
			}
		}
	}
	return 0;
}
#endif //test9
/*
字符匹配
输入：
给定一个字符串，里边可能包含“()”、“[]”、“{}”三种括号，请编写程序检查该字符串中的括号是否成对出现，且嵌套关系正确。
输出：
true:若括号成对出现且嵌套关系正确，或该字符串中无括号字符；
false:若未正确使用括号字符。
*/
#ifdef test10
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string ss;
	vector<char> q;
	while (getline(cin, ss))
	{
		int length = ss.length(), i = 0;
		if (length == 0) break;
		while (i < length)
		{
			switch (ss[i])
			{
			case '{':q.push_back(ss[i]); break;
			case '[':q.push_back(ss[i]); break;
			case '(':q.push_back(ss[i]); break;
			case ')':
				if (q.back() == '(')
				{
					q.pop_back(); break;
				}
				goto it;
			case ']':
				if (q.back() == '[')
				{
					q.pop_back(); break;
				}
				goto it;
			case '}':
				if (q.back() == '{')
				{
					q.pop_back(); break;
				}
				goto it;
			default:break;
			}
			i++;
		}
	it:if (i == length)
	{
		cout << "true" << endl;
		i = 0;
	}
	   else
	{
		cout << "false" << endl;
		i = 0;
	}
	}
	return 0;
}
#endif //test10
/*
打印机任务
简要描述：
某个打印机根据打印机队列执行打印任务，打印任务分为九个优先级，分别用数字1~9表示，数字越大优先级越高。
打印机每次从队列头部取出第一个任务A，然后检查队列余下任务中有没有比A优先级更高的任务，有则将任务A放在队列尾部，
否则就执行任务A的打印。请编写一个程序，根据输入的打印队列，编出实际的打印顺序。
输入描述：
函数原型： void printOrder(const int input[], int len, int output[])
输入参数input表示打印队列，为一个由整数1~9（优先级）组成的数组，数组索引0表示打印队列头部。
对于C/C++,参数len表示input数组的长度。可以假定输入的参数总是合法有效的，input数组长度有可能为0，但不会是空指针。
输出为一个表示实际打印顺序的数组，其数组项为打印任务在输入数组中的索引值（从0开始）Java通过返回值输出。
C/C++通过输出参数output[]输出，可以假定为存放结果分配了足够的空间
输入样例：9, 3, 5
输出样例：0, 2, 1
*/
#ifdef test11
#include <iostream>
#include <set>
#include <string>

#define MAX 50

using namespace std;

using TWOINT = pair<int, int>;

struct compare
{
	bool operator()(const TWOINT f1, const TWOINT f2)
	{
		return f1.second > f2.second;
	}
};
void printOrder(const int input[], int len, int output[])
{
	set<TWOINT, compare> q;
	if (len == 0) return;
	for (int i = 0; i < len; i++)
	{
		q.insert(pair<int, int>(i, input[i]));
	}
	int j = 0;
	for (auto i = q.begin(); i != q.end(); i++, j++)
	{
		output[j] = i->first;
	}
	return;
}
int main()
{
	int input[MAX] = { 0 };
	int output[MAX] = { 0 };
	int num, len = 0;
	char tmp;
	while (cin >> num)
	{
		cin >> tmp;
		input[len++] = num;
	}
	printOrder(input, len, output);
	for (int i = 0; i < len; i++)
	{
		cout << output[i] << " ";
	}
	cout << endl;
	return 0;
}
#endif // test11
/* dp问题（动态规划）
平安果
简要描述：
给定一个M行N列的矩阵（M*N个格子），每个格子中放着一定数量的平安果。
你从左上角的各自开始，只能向下或者向右走，目的地是右下角的格子。
每走过一个格子，就把格子上的平安果都收集起来。求你最多能收集到多少平安果。
注意：当经过一个格子时，需要一次性把格子里的平安果都拿走。
限制条件：1<N,M<=50；每个格子里的平安果数量是0到1000（包含0和1000）.
输入描述：
输入包含两部分：
第一行M, N
接下来M行，包含N个平安果数量
输出描述：
一个整数
最多拿走的平安果的数量
输入案例：
2 4
1 2 3 40
6 7 8 90
输出案例：
136
*/
#ifdef test12
#include <iostream>
#include <algorithm>
//#include <vector>
#define MAX 50
using namespace std;

int main()
{
	int row, col;
	cin >> row >> col;
	//vector<vector<int>> ivec(row, vector<int>(col));
	int tmp[MAX][MAX] = { 0 };
	for (int i = 0; i < row; i++)//初始矩阵
	{
		for (int j = 0; j < col; j++)
		{
			cin >> tmp[i][j];
		}
	}
	for (int i = col - 2; i >= 0; i--)//最后一行累加
	{
		tmp[row - 1][i] += tmp[row - 1][i + 1];
	}
	for (int i = row - 2; i >= 0; i--)//最后一列累加
	{
		tmp[i][col - 1] += tmp[i + 1][col - 1];
	}

	for (int i = row - 2; i >= 0; i--)
	{
		for (int j = col - 2; j >= 0; j--)
		{
			tmp[i][j] = max(tmp[i][j + 1], tmp[i + 1][j]) + tmp[i][j];
		}
	}
	cout << tmp[0][0] << endl;
	return 0;
}
#endif //test12
/*
给你两个序列，问你他们的最长LCS序列的长度是多少？（序列可以是不连续的，只要元素的相对位置一样）
dp问题中的：LCS问题
*/
#ifdef test13   //￥不太理解
#include <iostream>
#include <string>
#include <algorithm>

#define max_v 1005
using namespace std;

string x, y;
int dp[max_v][max_v];
int l1, l2;
int dfs(int i, int j)
{
	if (i == -1 || j == -1)
		return 0;
	if (x[i] == y[j])//来自左上角
	{
		dfs(i - 1, j - 1);
		cout << x[i] << " ";//先递归到最后再输出，这样就是顺序的
	}
	else
	{
		if (dp[i - 1][j] > dp[i][j - 1])//来自上面
		{
			dfs(i - 1, j);
		}
		else//来自左边
		{
			dfs(i, j - 1);
		}
	}
	return 0;
}
int main()
{
	int t;
	cin >> t;
	//getchar();
	while (t--)
	{
		cin >> x >> y;
		int l1 = x.length();
		int l2 = y.length();
		//memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= l1; i++)
		{
			for (int j = 1; j <= l2; j++)
			{
				if (x[i - 1] == y[j - 1])
				{
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else
				{
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		cout << dp[l1][l2] << endl;
		//for (int i = 1; i <= l1; i++)
		//{
		//	for (int j = 1; j <= l2; j++)
		//	{
		//		cout << dp[i][j] << " ";
		//	}
		//	cout << endl;
		//}
		dfs(l1, l2);//输出LCS公共子序列
		cout << endl;
	}
	return 0;
}
#endif // test13
/*
区间DP问题
矩阵连乘问题，纸牌问题，石头合并问题（都是一类问题，一起分析）

①给定n个矩阵{A1，A2…..An}，其中A[i]与A[i+1]是可乘的，如何确定计算的次序，使得乘法的总次数最少
首先我们要明白，计算的次序不同，那么乘法的总次数也不同

②类似的问题：给你n张牌，每张排都有一个数字，相邻的两张牌的权值可以相乘，相乘的两张牌可以合并为
一张牌，新牌的权值是原来的两张牌的乘积

③这个问题还有石头合并问题都是同一类的问题，属于区间dp问题
石头合并问题：给你一堆石头，排成一行，相邻的两个石头可以合并，合并成的石头的权值为原来两个石头的权值之和
*/
#ifdef test14 //矩阵连乘
#include <iostream>

using namespace std;
#define max_v 1005
int dp[max_v][max_v], a[max_v], s[max_v][max_v];
void f(int i, int j)
{
	if (i == j)
		return;
	f(i, s[i][j]);
	f(s[i][j] + 1, j);
	printf("A[%d:%d]*A[%d:%d]\n", i, s[i][j], s[i][j] + 1, j);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++)
	{
		dp[i][i] = 0;
	}

	for (int r = 2; r <= n; r++)
	{
		for (int i = 1; i <= n - r + 1; i++)
		{
			int j = i + r - 1;
			dp[i][j] = dp[i + 1][j] + a[i - 1] * a[i] * a[j];
			s[i][j] = i;
			for (int k = i + 1; k < j; k++)
			{
				int t = dp[i][k] + dp[k + 1][j] + a[i - 1] * a[k] * a[j];
				if (t < dp[i][j])
				{
					dp[i][j] = t;
					s[i][j] = k;
				}
			}
		}
	}
	f(1, n);
}
#endif // test14
/*
石头合并问题：给你一堆石头，排成一行，相邻的两个石头可以合并，合并成的石头的权值为原来两个石头的权值之和
*/
#ifdef test15 // ￥不懂
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		int a[n + 1];
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &a[i]);
		}
		int sum[n + 1];
		int dp[n + 1][n + 1];
		for (int i = 1; i <= n; i++)
		{
			int t = 0;
			for (int j = 1; j <= i; j++)
			{
				t = t + a[j];
			}
			sum[i] = t;
		}
		for (int i = 1; i <= n; i++)
		{
			dp[i][i] = 0;
		}
		for (int r = 2; r <= n; r++)
		{
			for (int i = 1; i <= n - r + 1; i++)
			{
				int j = i + r - 1;
				int t = dp[i][i] + dp[i + 1][j] + sum[j] - sum[i] + a[i];
				for (int k = i; k <= j - 1; k++)
				{
					if (t > dp[i][k] + dp[k + 1][j] + sum[j] - sum[i] + a[i])
					{
						t = dp[i][k] + dp[k + 1][j] + sum[j] - sum[i] + a[i];
					}
				}
				dp[i][j] = t;
			}
		}
		printf("%d\n", dp[1][n]);
	}
	return 0;
}
/*
样例输入
3
1 2 3
7
13 7 8 16 21 4 18
样例输出
9
239
*/
#endif // test15
/*
比如
1，7，3，5，8，4，8
问你最长递增子序列(LIS)的长度是多少
这个问题的最优解有多个，但是最优值只有一个：长度为4
1，3，5，9
1，3，5，8
1，3，4，8
这三个都是最优解，但是他们长度都是一样的，长度为4
*/
#ifdef test16
#include<iostream>

using namespace std;
#define max_v 1005
int a[max_v], dp[max_v];
void f(int n, int result)
{
	bool flag = false;
	if (n < 0 || result == 0)
		return;
	if (dp[n] == result)
	{
		flag = true;
		result--;
	}
	f(n - 1, result);
	if (flag)
		cout << a[n] << " ";
}
int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for (int i = 1; i < n; i++)
		{
			int t = 0;
			for (int j = 0; j < i; j++)
			{
				if (a[j] < a[i])
				{
					if (t < dp[j])
					{
						t = dp[j];
					}
				}
			}
			dp[i] = t + 1;
		}
		int t = 0;
		for (int i = 0; i < n; i++)
		{
			if (t < dp[i])
			{
				t = dp[i];
			}
		}
		cout << t << endl;
		f(n, t);
		cout << endl;
	}
	return 0;
}
/*
输入：
7
1 7 3 5 9 4 8
输出：
4
1 3 4 8*/
#endif //test16
/*
比如：
-2，11，-4，13，-5，-2
什么叫最大字段和？就是连续的数字的和最大是多少，注意是段，而不是序列，序列可以是离散的，而段必须的连续的
*/
#ifdef test17
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> a(n + 1);
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		vector<int> dp(n + 1);;
		dp[1] = a[1];
		for (int i = 2; i <= n; i++)
		{
			int x = dp[i - 1];
			if (x < 0)
			{
				x = 0;
			}
			dp[i] = x + a[i];
		}
		int maxvalue = dp[1];
		for (int i = 2; i <= n; i++)
		{
			if (maxvalue < dp[i])
			{
				maxvalue = dp[i];
			}
		}
		cout << maxvalue << endl;
	}
	return 0;
}
/*
输入：
6
-2 11 -4 13 -5 -2
输出；
20
*/
#endif //test17
/*
背包问题
*/
#ifdef test18
#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;
//dp[i][j]表示面对第 i 件物品，且背包容量为  j 时所能获得的最大价值
int ZeroOnePack(vector<int> v, vector<int> w, int n, int c)//v1,v2....vn价值  w1,w2,w3...wn重量 n表示n个物品 c表示背包容量
{
	vector<vector<int>>  dp(n + 1, vector<int>(c + 1));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= c; j++)
		{
			if (j >= w[i])
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);//第i个物品放入之后，那么前面i-1个物品可能会因为剩余空间不够无法放入
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}

		}
	}
	return dp[n][c];
}
//空间优化，采用一维数组
int ZeroOnePack_improve(vector<int> v, vector<int> w, int n, int c)//v1,v2....vn价值  w1,w2,w3...wn重量 n表示n个物品 c表示背包容量
{
	vector<int> dp(c + 1);
	for (int i = 1; i <= n; i++)
	{
		for (int j = c; j >= 0; j--)
		{
			if (j >= w[i])
				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

		}
	}
	return dp[c];
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int n, c;
		cin >> n >> c;
		vector<int> v(n + 1), w(n + 1);
		for (int i = 1; i <= n; i++)
		{
			cin >> v[i];
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> w[i];
		}
		//cout << ZeroOnePack(v, w, n, c) << endl;
		cout << ZeroOnePack_improve(v, w, n, c) << endl;

	}
	return 0;
}

/*
1
5 10
1 2 3 4 5
5 4 3 2 1

14
*/
#endif //test18

/*
题目描述：给出一个不多于5位的整数，进行反序处理，要求

（1）求出它是几位数

（2）分别输出每一个数字（空格隔开）

（3）按逆序输出各位数字（仅数字间以空格间隔，负号与数字之间不需要间隔）

输入描述：位数不大于5的整数

输出描述：1.整数位数 2.空格间隔输出结果 3.逆序整数
*/
#ifdef test19
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string ss;
	while (cin >> ss)
	{
		int flag = 1;
		int true_length = ss.length();
		int length = true_length;;
		if (ss[0] == '-')
		{
			true_length -= 1;
		}
		if (true_length > 5) break;
		cout << true_length << " ";

		for (int i = 0; i < length; i++)//顺序输出
		{
			if (ss[i] == '-')
			{
				cout << '-';
				continue;
			}
			cout << ss[i] << " ";
		}
		for (int i = length - 1; i >= 0; i--)//逆序输出
		{
			if (true_length != length && i == 1)
			{
				cout << '-' << ss[i];
				i = -1;
				continue;
			}
			cout << ss[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

#endif // test19

/*
输入四个IP端，前两个为第一个IP段的起始和终止地址，后两个是第二个IP段的起始和终止地址，判断这两个IP段是否存在交集

输入描述：输入4个IP

输出描述：如果存在交集，输出 Overlap IP ； 如果不存在交集，输出 No Overlap IP
输入案例：
1.1.1.1
255.255.255.255
2.2.2.2
3.3.3.3
输出案例：
Overlap IP
*/
#ifdef test20
#include <iostream>
#include <string>

using namespace std;
//stoul：将字符串转换为unsigned long 
//stol:将字符串转换为Long
//stof:转换为float
//stoll：转换为long long
//stoull：转换为unsigned long long
//stod
long long str2num(string str)
{
	int length = str.length();
	string s[4];
	int i = 0;
	int index = 0;
	while (i < 3) {
		int pos = str.find('.', index);
		s[i++] = str.substr(index, pos - index);
		index = pos + 1;
	}
	s[3] = str.substr(index);
	long long num = stoul(s[0]) * 256 * 256 * 256 + stoul(s[1]) * 256 * 256 + stoul(s[2]) * 256 + stoul(s[3]);
	return num;//注意数值范围，int为2^15-1，long为2^31-1，unsigned long为2^32-1
}

int main()
{
	string ipTop1, ipEnd1, ipTop2, ipEnd2;
	while (cin >> ipTop1 >> ipEnd1 >> ipTop2 >> ipEnd2) {
		long long top1 = str2num(ipTop1);
		long long end1 = str2num(ipEnd1);
		long long top2 = str2num(ipTop2);
		long long end2 = str2num(ipEnd2);
		//cout << top1 << " " << end1 << " " << top2 << " " << end2 << endl;
		if (top1 > end2 || end1 < top2) {
			cout << "No Overlap IP" << endl;
		}
		else
			cout << "Overlap IP" << endl;
	}
}
#endif //test20
/*
给定字符串内有很多正整数，要求对这些正整数进行排序，然后返回排序后指定位置的正整数

排序要求：按照每个正整数的后三位数字组成的整数进行从小到大排序
1）如果不足三位，则按照实际位数组成的整数进行比较
2）如果相等，则按照输入字符串中的原始顺序排序

说明（以下内容考生无须检查，调用者保证）：
1) 字符串以’\0’结尾，仅包含数字、空格
2) 字符串内正整数之间以单个空格分隔，字符串首尾没有空格
3) 正整数格式为十进制，大小：1~1000000，正整数的数字非零开始


示例:
如字符串内容
1223 22 3232 2016

按照规定排序后
2016 22 1223 3232

查询排序后的第3个数是
*/
#ifdef test21
#include <iostream>
#include <string>
#include <map>

using namespace std;
int main()
{
	string s, tmp;
	map<long, long> nummap;
	while (cin >> s)
	{
		int length = s.length();
		if (length > 3)
		{
			tmp = s.substr(length - 3);
		}
		else
		{
			tmp = s;
		}
		nummap.insert(pair<long, long>(stol(tmp), stol(s)));
	}
	cout << "开始输出" << endl;
	for (auto it : nummap)
	{
		cout << it.second << " ";
	}
	cout << endl;
	return 0;
}
#endif // test21
/*
插入排序
最好情况：顺序T=O(N)
最坏情况：逆序T=O(N^2)
任何仅以交换相邻两元素来排序的算法，其平均时间复杂度为Ω(N^2)
*/
#ifdef test22
#include <iostream>
using namespace std;

#define MAX 5

void Insertion_Sort(int A[], int N)
{
	for (int p = 1; p < N; p++)
	{
		int tmp = A[p], i;
		for (i = p; i > 0 && A[i - 1] > tmp; i--)
			A[i] = A[i - 1];
		A[i] = tmp;
	}
}
int main()
{
	int A[MAX] = { 0 };
	int N, n, num;
	while (cin >> n)
	{
		N = n;
		int i = 0;
		while (n--)
		{
			cin >> num;
			A[i++] = num;
		}
	}
	Insertion_Sort(A, N);
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}

#endif // test22

/*
冒泡排序
*/
#ifdef test23
#include <iostream>

using namespace std;
void Buble_Sort(int A[], int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		int flag = 0;
		for (int j = 0; j < i; j++)
		{
			if (A[j] > A[j + 1])
			{
				swap(A[j], A[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
}

int main()
{
	int A[5] = { 5,4,3,2,1 };
	Buble_Sort(A, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}
#endif // test23
/*
希尔排序
先5间隔排序，再3间隔排序，再1间隔排序（间隔不一定，但最后一个一定是1）
原始希尔序列：N/2, N/4, N/8...(由于增量不互质，所以复杂度较高)
Hibbard增量序列：2^k-1
*/
#ifdef test24
#include <iostream>

using namespace std;

void Shell_Sort(int A[], int N)
{
	for (int i = N / 2; i > 0; i /= 2)//希尔增量序列
	{
		for (int j = i; j < N; j += i)//插入排序
		{
			int tmp = A[j];
			int k;
			for (k = j; k > 0 && A[k - i] > tmp; k -= i)
			{
				A[k] = A[k - i];
			}
			A[k] = tmp;
		}
	}
}
int main()
{
	int A[5] = { 5,4,3,2,1 };
	Shell_Sort(A, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}
#endif // test24
/*
堆排序
①构建最大堆
②交换根节点和最后一个节点
③对1到n-1的节点重新构建最大堆
*/
#ifdef test25
#include<iostream>
#include<vector>
using namespace std;

// 递归方式构建大根堆(len是arr的长度，index是第一个非叶子节点的下标)
void adjust(vector<int> &arr, int len, int index)
{
	int left = 2 * index + 1; // index的左子节点
	int right = 2 * index + 2;// index的右子节点

	int maxIdx = index;
	if (left<len && arr[left] > arr[maxIdx])     maxIdx = left;
	if (right<len && arr[right] > arr[maxIdx])     maxIdx = right;

	if (maxIdx != index)
	{
		swap(arr[maxIdx], arr[index]);
		adjust(arr, len, maxIdx);
	}
}

// 堆排序
void heapSort(vector<int> &arr, int size)
{
	// 构建大根堆（从最后一个非叶子节点向上）
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		adjust(arr, size, i);
	}

	// 调整大根堆
	for (int i = size - 1; i >= 1; i--)
	{
		swap(arr[0], arr[i]);           // 将当前最大的放置到数组末尾
		adjust(arr, i, 0);              // 将未完成排序的部分继续进行堆排序
	}
}

int main()
{
	vector<int> arr = { 8, 1, 14, 3, 21, 5, 7, 10 };
	heapSort(arr, arr.size());
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
#endif // test25
/*
归并排序（如果在内存中就能完成排序，就没必要使用该排序）
核心：有序子列的归并
*/
#ifdef test26
#include <iostream>
using namespace std;

//递归
//L=左边起始位置， R=右边起始位置， RightEnd右边终点位置
void Merge(int A[], int TmpA[], int L, int R, int RightEnd)
{
	int LeftEnd = R - 1;
	int Tmp = L;
	int NumElements = RightEnd - L + 1;
	while (L <= LeftEnd && R <= RightEnd)
	{
		if (A[L] <= A[R])
		{
			TmpA[Tmp++] = A[L++];
		}
		else
		{
			TmpA[Tmp++] = A[R++];
		}
	}
	while (L <= LeftEnd)
		TmpA[Tmp++] = A[L++];
	while (R <= RightEnd)
		TmpA[Tmp++] = A[R++];
	for (int i = 0; i < NumElements; i++, RightEnd--)
	{
		A[RightEnd] = TmpA[RightEnd];
	}
}
void MSort(int A[], int TmpA[], int L, int RightEnd)
{
	int Center;
	if (L < RightEnd)
	{
		Center = (L + RightEnd) / 2;
		MSort(A, TmpA, L, Center);
		MSort(A, TmpA, Center + 1, RightEnd);
		Merge(A, TmpA, L, Center + 1, RightEnd);
	}
}
void Merge_sort(int A[], int N)
{
	int * TmpA = (int *)malloc(N * sizeof(int));
	if (TmpA != nullptr)
	{
		MSort(A, TmpA, 0, N - 1);
		free(TmpA);
	}
	else
	{
		cout << "空间不足" << endl;
	}
}

//迭代
void Merge1(int A[], int TmpA[], int L, int R, int RightEnd)
{
	int LeftEnd = R - 1;
	int Tmp = L;
	int NumElements = RightEnd - L + 1;
	while (L <= LeftEnd && R <= RightEnd)
	{
		if (A[L] <= A[R])
		{
			TmpA[Tmp++] = A[L++];
		}
		else
		{
			TmpA[Tmp++] = A[R++];
		}
	}
	while (L <= LeftEnd)
		TmpA[Tmp++] = A[L++];
	while (R <= RightEnd)
		TmpA[Tmp++] = A[R++];
}
void Merge_pass(int A[], int TmpA[], int N, int length) //非递归方法
{
	int i;
	for (i = 0; i <= N - 2 * length; i += 2 * length)
	{
		Merge1(A, TmpA, i, i + length, i + 2 * length - 1);
	}
	if (i + length < N)
		Merge1(A, TmpA, i, i + length, N - 1);
	else
		for (int j = i; j < N; j++)
			TmpA[j] = A[j];
}
void Merge_sort1(int A[], int N)
{
	int length = 1;
	int * TmpA = (int *)malloc(N * sizeof(int));
	if (TmpA != nullptr)
	{
		while (length < N)
		{
			Merge_pass(A, TmpA, N, length);
			length *= 2;
			Merge_pass(TmpA, A, N, length);
			length *= 2;
		}
		free(TmpA);
	}
	else
	{
		cout << "空间不足" << endl;
	}
}

int main()
{
	int A[] = { 10,2,5,1,8,12,0,4 };
	int TmpA[8] = { 0 };
	//Merge_sort(A, 8);//递归算法
	Merge_sort1(A, 8);//非递归算法
	for (int i = 0; i < 8; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}
#endif // test26
/*
快速排序
①选主元，整个集合分为大于主元和小于主元
②合并
*/
#ifdef test27
#include <iostream>
using namespace std;

void Insertion_Sort(int A[], int N)//插入排序
{
	for (int p = 1; p < N; p++)
	{
		int tmp = A[p], i;
		for (i = p; i > 0 && A[i - 1] > tmp; i--)
			A[i] = A[i - 1];
		A[i] = tmp;
	}
}
int Median3(int A[], int Left, int Right)
{
	int Center = (Left + Right) / 2;
	if (A[Left] > A[Center])
	{
		swap(A[Left], A[Center]);
	}
	if (A[Left] > A[Right])
	{
		swap(A[Left], A[Right]);
	}
	if (A[Right] < A[Center])
	{
		swap(A[Right], A[Center]);
	}
	/*A[Left] <= A[Center] <= A[Right]*/
	swap(A[Center], A[Right - 1]);

	/*只需要考虑A[Left+1]...A[Right-2]*/
	return A[Right - 1];
}
void Quicksort(int A[], int Left, int Right)
{
	int Cutoff = 5;
	if (Cutoff <= Right - Left)
	{
		if (Left >= Right)
		{
			return;
		}
		int Pivot = Median3(A, Left, Right);
		int i = Left, j = Right - 1;
		for (;;)
		{
			while (A[++i] < Pivot) {}
			while (A[--j] > Pivot) {}
			if (i < j)
			{
				swap(A[i], A[j]);
			}
			else
				break;
		}
		swap(A[i], A[Right - 1]);
		Quicksort(A, Left, i - 1);
		Quicksort(A, i + 1, Right);
	}
	else
	{
		Insertion_Sort(A + Left, Right - Left + 1);
	}
}
void Quick_Sort(int A[], int N)
{
	Quicksort(A, 0, N - 1);
}
int main()
{
	int N;
	cin >> N;
	//int *A = (int *)malloc(N * sizeof(int));
	int *A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	Quick_Sort(A, N);
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	delete[] A;
	//free(A);
	return 0;
}
#endif //test27
/*
表排序(用以排序单个“元素”比较庞大的时候)
*/
#ifdef test28

#endif //test28
/*
基数排序（保持常数时间复杂度）
假设我们有N=10个整数，每个整数的值在0-999之间（于是有1000个不同的值）。
还有可能在线性时间内排序吗？
输入序列：64 8 216 513 27 729 0 1 343 125
Bucket 0  1   2    3    4   5    6   7   8   9
Pass1  0  1  512  343  64  125  216  27  8  729

Pass2  0 512 125       343       64
	   1 216  27
	   8     729

Pass3  0 125 216  343      512       729
	   1
	   8
	   27
	   64
*/
#ifdef test29
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void RadixSort(vector<int> &a)
{
	int len = a.size();
	if (len < 2)
		return;
	int Max = a[0];
	for (int i = 1; i < len; i++)
	{
		Max = max(Max, a[i]);
	}
	int maxDigit = log10(Max) + 1;
	//直接使用log10函数获取位数，这样的话就不用循环了，这里被强制转换是向下取整
	int mod = 10, div = 1;
	vector<int> bucketList[10];
	for (int i = 0; i < maxDigit; i++, mod *= 10, div *= 10)
	{
		for (int j = 0; j < len; j++)
		{
			int num = (a[j] % mod) / div;
			bucketList[num].push_back(a[j]);
		}
		int index = 0;
		for (int j = 0; j < 10; j++)
		{
			int tlen = bucketList[j].size();
			for (int k = 0; k < tlen; k++)
				a[index++] = bucketList[j][k];
			bucketList[j].clear();
		}
	}
}
int main()
{
	vector<int> v = { 5,3,2,6,10,23,9 };
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	RadixSort(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
#endif //test29
/*
计数排序
1.找出待排序的数组中最大和最小的元素；
2.统计数组中每个值为 i 的元素出现的次数，存入数组 C 的第 i 项；
3.对所有的计数累加（从数组 C 中的第一个元素开始，每一项和前一项相加）；
4.反向填充目标数组：将每个元素 i 放在新数组的第 C[i] 项，每放一个元素就将 C[i] 减去1
*/
#ifdef test30
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void CountingSort(vector<int> &a)
{
	int len = a.size();
	if (len == 0)
		return;
	int Min = a[0], Max = a[0];
	for (int i = 1; i < len; i++)
	{
		Max = max(Max, a[i]);
		Min = min(Min, a[i]);
	}
	int bias = 0 - Min;
	vector<int> bucket(Max - Min + 1, 0);
	for (int i = 0; i < len; i++)
	{
		bucket[a[i] + bias]++;
	}
	int index = 0, i = 0;
	while (index < len)
	{
		if (bucket[i])
		{
			a[index] = i - bias;
			bucket[i]--;
			index++;
		}
		else
			i++;
	}
}
int main()
{
	vector<int> v = { 5,3,2,-6,10,23,9 };
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	CountingSort(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
#endif //test30
/*
桶排序的算法步骤如下：
1.设置一个定量的数组当作空桶子；
2.寻访序列，并且把项目一个一个放到对应的桶子去；
3.对每个不是空的桶子进行排序；
4.从不是空的桶子里把项目再放回原来的序列中。
*/
#ifdef test31
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(vector<int> &a, int bucketSize)
{
	int len = a.size();
	if (len < 2)
		return;
	int Min = a[0], Max = a[0];
	for (int i = 1; i < len; i++)
	{
		Max = max(Max, a[i]);
		Min = min(Min, a[i]);
	}
	int bucketCount = (Max - Min) / bucketSize + 1;
	//这个区间是max-min+1，但是我们要向上取整，就是+bucketSize-1，和上面的形式是一样的
	vector<vector<int>> bucketArr(bucketCount, vector<int>());
	for (int i = 0; i < len; i++)
	{
		bucketArr[(a[i] - Min) / bucketSize].push_back(a[i]);
	}
	a.clear();
	for (int i = 0; i < bucketCount; i++)
	{
		int tlen = bucketArr[i].size();
		sort(bucketArr[i].begin(), bucketArr[i].end());
		for (int j = 0; j < tlen; j++)
			a.push_back(bucketArr[i][j]);
	}
}
int main()
{
	vector<int> v = { 5,3,2,-6,10,23,9 };
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	bucketSort(v, 5);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
#endif // test31

/*
输入描述:
第一行一个整数 n，表示班级人数。
第二行共 n 个自然数，第 i 个数表示第 i 位同学的成绩 a_i。
第三行一个整数 q，表示询问的次数。
接下来 q 行，每行一个数 x，表示询问第 x 位同学的百分数。
输入案例:
3
100 98 87
3
1
2
3
输出案例:
66.666667
33.333333
0.000000

*/
#ifdef test100
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, q, score, people;
	cin >> N;
	vector<int> score_vec;
	for (int i = 0; i < N; i++)
	{
		cin >> score;
		score_vec.push_back(score);
	}
	cin >> q;
	while (q--)
	{
		cin >> people;
		int count = 0;
		for (int i = 0; i < N; i++)
		{
			if (score_vec[i] <= score_vec[people - 1]) count++;
		}
		cout.setf(ios::fixed);//保留小数点后6位
		cout.precision(6);
		cout << (count - 1)*100.0 / N << endl;
	}
	return 0;
}
#endif // test100
/*
小易有一个体积巨大的货物，具体来说，是个在二维平面上占地的货物。
小易有一个的广场，想把货物放在这个广场上。不幸的是，广场上已经有了一些障碍物，障碍物所在的格子不能放置你的货物。小易现在想知道能否成功地放置货物。
输入描述:
第一行数字t，表示有t组数据。
对于每一组数据，第一行三个数字n,m,k，表示广场的大小和障碍物的个数。接下来k行，每行两个数x,y，表示一个障碍物的坐标。
接下来一行两个数c,d，表示货物的大小。
输入案例:
2
3 3 1
1 1
2 2
3 3 1
2 2
2 2
输出案例:
YES
NO
*/
#ifdef test101
#include <vector>
#include <iostream>

using namespace std;

int t;
int n, m, k;

bool judge(vector<vector<bool>> &v, int ni, int nj, int c, int d) {
	for (int i = 0; i < c; i++) {
		if (ni + i >= n) return false;
		for (int j = 0; j < d; j++) {
			if (nj + j >= m) return false;
			if (v[ni + i][nj + j]) {

				// 遍历到一个障碍后，将起点和障碍之内的点全部不可能为结果的起点
				// 因此全部置为障碍
				for (int p = 0; p <= i; p++) {
					for (int k = 0; k <= j; k++) {
						v[ni + p][nj + k] = true;
					}
				}

				return false;
			}
		}
	}

	return true;
}

int main()
{
	//cin.tie();
	//ios::sync_with_stdio(false);

	cin >> t;

	while (t--) {
		cin >> n >> m >> k;
		vector<vector<bool>> v(n, vector<bool>(m, false));
		while (k--) {
			int a, b;
			cin >> a >> b;
			v[a - 1][b - 1] = true;
		}

		int c, d;
		cin >> c >> d;

		bool flag = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!v[i][j] && judge(v, i, j, c, d)) {
					flag = true;
					break;
				}
			}
			if (flag) break;
		}

		if (flag) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}

	return 0;
}

#endif //test101
/*
输入描述
小易在维护数据的时候遇到一个需求，具体来说小易有一系列数据，这些数据了构成一个长度为n的数字序列，接下来小易会在这个序列上进行q次操作。
每次操作有一个查询的数字x，小易需要将序列数据中所有大于等于x的数字都减一，并输出在本次操作中有多少个数字被减一

第一行n,q，表示数字个数和操作个数。
接下来一行n个数表示初始的数字。
接下来q行，每行一个数，表示指定的数字x。

输入案例
4 3
1 2 3 4
4
3
1
输出案例
1
2
4
*/
#ifdef test102
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n, q, temp;
	cin >> n >> q;
	vector<int> num_vec;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		num_vec.push_back(temp);
	}
	int num;
	while (q--)
	{
		int count = 0;
		cin >> num;
		auto it = lower_bound(num_vec.begin(), num_vec.end(), num);
		while (it != num_vec.end())
		{
			(*it)--;
			count++;
			it++;
		}
		cout << count << endl;
	}
	return 0;
}

#endif //test102
/*
小易有一个初始为空的数字集合，支持两种操作：
1、加入数字x到集合中。
2、询问集合中是否存在一个子集，满足子集中所有数字的Or值恰好为k。
Or为二进制按位或操作，C++中表示为"|"。
输入描述
第一行数字q,表示操作个数
接下来q行，每行两个数字：
1 x表示插入数字x
2 x表示询问数字x(即题设中询问的数值k)
输入案例
9
1 4
2 5
1 9
1 15
2 4
1 11
2 10
2 7
2 9
输出案例
NO
YES
NO
NO
YES
*/
#ifdef test103
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int q, p, x;
	vector<int> s;
	cin >> q;
	while (q--) {
		cin >> p >> x;
		if (p == 1)s.push_back(x);
		else {
			int y = 0;
			for (int i = 0; i < s.size(); i++) {
				if ((x | s[i]) == x) {
					y |= s[i];
				}
			}
			if (x == y)cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
#endif // test103
/*
小易给定你数字A,B(A<B)和系数p,q。每次操作你可以将A变成A+p或者将p变成p*q。问至少几次操作使得B<=A
第一行数据组数T，对于每组数据，一行四个整数A,B,p,q
输入案例
2
1 5 7 2
3 5 1 2
输出案例
1
2
*/
#ifdef test104
#include <iostream>
using namespace std;

int main()
{
	int T;
	long long A, B, p, q;
	cin >> T;
	while (T--)
	{
		cin >> A >> B >> p >> q;
		long long n1 = B - A;
		int count = 0;
		while (p < n1)
		{
			p *= q;
			count++;
		}
		cout << count + 1 << endl;
	}
	return 0;
}
#endif // test104

/*
输入描述:
第一行数字,,表示序列长度和目标乘积。
接下来一行个正整数表示初始序列
输入案例:
5 12
1 3 9 2 6
输出案例:(把3变为1需要2的代价，把9变为1需要8的代价，总代价为10)
10
*/
#ifdef test105
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, B, sum = 0;
	int a;
	cin >> n >> B;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		sum += a;
	}
	sum -= n;
	int ans = 0x7fffffff;
	for (int i = 1; i * i <= B; i++) {
		if (B % i == 0) {
			ans = min(ans, abs(sum - i - B / i + 2));
		}
	}
	cout << ans << endl;
	return 0;
}
#endif //test105
/*
输入描述:
第一行数据组数T
对于每组数据，第一行数字n,k，接下来一行n个数字表示.
输入案例:
1
5 3
6 2 4 3 8
输出案例:
YES
*/
#ifdef test106
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

#define N 1005

int T, n, k;
int h[N];
int dp[N];

int main() {
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> h[i];
		for (int i = 0; i < n; i++)dp[i] = 0;
		dp[0] = 2;

		for (int i = 0; i < n; i++) {
			for (int j = i - k; j <= i - 1; j++) {
				if (j < 0)continue;
				if (h[j] >= h[i])dp[i] = max(dp[i], dp[j]);
				else if (dp[j] > 1)dp[i] = max(dp[i], dp[j] - 1);
			}
		}
		if (dp[n - 1] > 0)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
#endif // test106
/*
小易的公司一共有n名员工, 第i个人每个月的薪酬是x_i万元。
现在小易的老板向小易提了m次询问, 每次询问老板都会给出一个整数k, 小易要快速回答老板工资等于k的员工的数量
输入描述:
第一行，两个空格间隔的整数n和m,表示人数和提问的次数
第二行，n个用空格间隔的整数x_i，表示每名员工的薪酬
接下来有m行，每行一个整数，表示老板的一次提问。
输入案例:
7 4
6 2 1 2 6 2 5
6
5
8
2
输出案例：
2
1
0
3
*/
#ifdef test107
#include <iostream>
#include <map>
using namespace std;
int main()
{
	map<int, int> mm;
	int n, m, num;
	cin >> n >> m;
	while (n--)
	{
		cin >> num;
		mm[num]++;
	}
	while (m--)
	{
		cin >> num;
		cout << mm[num] << endl;
	}
	return 0;
}
#endif // test107
/*
给定01序列S, 序列S是优秀的01序列，优秀的01序列定义如下:
1、如果序列S,T是优秀的，则序列S+T是优秀的，+被定义为按顺序连接两个序列，即"010"+"110"="010110"。
2、如果序列S是优秀的，则序列rev(S)也是优秀的。rev(S)被定义为按位翻转(0变1,1变0)序列S，并删去前导零。例如rev("1100101")="11010"。
现在请你判断序列T是不是优秀的

输入描述:
第一行数据组数T，表示有T组数据。
每组数据的第一行是一个01序列，表示序列S。第二行是另一个01序列，表示序列T
输出描述:
对于每组数据，一行输出"YES"或者"NO"，表示序列T是不是优秀的。（大小写敏感）

输入案例
1
1100
110011
输出案例
YES
*/
#ifdef test108
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string rev(string & a) {
	string res = "";
	int last = 0;
	while (last < a.size() && a[last] != '0') {
		++last;
	}
	while (last < a.size()) {
		res += (1 - (a[last++] - '0')) + '0';
	}
	return res;

}

bool add(vector<string>& vec, string b) {
	if (b == "")return true;
	int bn = b.size();
	for (int j = 0; j < vec.size(); ++j) {
		int an = vec[j].size();
		if ((bn >= an) && (b.substr(0, an) == vec[j])) {
			if (add(vec, b.substr(an, bn - an)))return true;
		}
	}
	return false;
}
bool check(string s, string t) {
	vector<string> rv;
	while (s != "") {
		rv.push_back(s);
		s = rev(s);
	}
	if (rv.size() > 0 && rv.back() == "1")
		return true;
	return add(rv, t);
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		string a;
		string b;
		cin >> a;
		cin >> b;
		if (check(a, b))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
#endif //test108

/*
输入描述
第一行两个整数n和m，表示投票者的个数和候选人的个数。
接下来n行，每一行两个整数x和y，x表示这个投票者的投票对象，y表示需要花多少个糖果让这个人改变意向。
满足1 <= n, m <= 3000，1 <= x <= m，1 <= y <= 10^9
输入案例
1 2
1 20
输出案例
0
*/
#ifdef test109
/*
DFS,每一步有两种选择；
1、收买花费最少的；2、收买最多得票的支持者中花费最少的
*/
#include <bits/stdc++.h>
using namespace std;
#define N 3001
int n, m;
int x[N], y[N];
bool vis[N];
long ans = LONG_MAX;
unordered_map<int, int> cnt;

int candidate_max()
{//找到最多支持者的*** 
	int candidate = -1, tmp = 0;
	for (int i = m; i > 0; --i) {
		if (cnt[i] > tmp) {
			tmp = cnt[i];
			candidate = i;
		}
	}
	return candidate;
}

pair<int, int> idx_min(int candidate)
{//找到两种选择的投票人的下标 
	int c_min = INT_MAX, t_min = INT_MAX, c_idx, t_idx;
	for (int i = 0; i < n; ++i) {
		if (vis[i]) continue;
		if (t_min > y[i]) {
			t_min = y[i];
			t_idx = i;
		}
		if (x[i] == candidate) {
			if (c_min > y[i]) {
				c_min = y[i];
				c_idx = i;
			}
		}
	}
	return make_pair(t_idx, c_idx);
}

void dfs(long cost)
{
	if (cost >= ans) return;
	int candidate = candidate_max();
	if (candidate == 1) {
		if (cost < ans) ans = cost;
		return;
	}
	pair<int, int> idx = idx_min(candidate);
	// 收买花费最少的
	vis[idx.first] = true;
	cnt[1]++;
	cnt[x[idx.first]]--;
	dfs(cost + y[idx.first]);
	vis[idx.first] = false;
	cnt[1]--;
	cnt[x[idx.first]]++;
	if (idx.first == idx.second) return;
	// 收买最多得票的支持者中花费最少的
	vis[idx.second] = true;
	cnt[1]++;
	cnt[x[idx.second]]--;
	dfs(cost + y[idx.second]);
	vis[idx.second] = false;
	cnt[1]--;
	cnt[x[idx.second]]++;
}

int main(void)
{
	//    freopen("input.txt", "r", stdin);
	memset(vis, 0, sizeof(0));
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &x[i], &y[i]);
		cnt[x[i]]++;
	}
	dfs(0);
	printf("%ld", ans);
	return 0;
}
#endif //test109
/*
两数相加(链表相加)
输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
*/
#ifdef test110

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* cur = new ListNode(0);
		ListNode* head = cur;
		int carry = 0;
		while (l1 != nullptr || l2 != nullptr)
		{
			int x = (l1 == nullptr) ? 0 : l1->val;
			int y = (l2 == nullptr) ? 0 : l2->val;
			int sum = x + y + carry;
			carry = sum / 10;
			cur->next = new ListNode(sum % 10);
			cur = cur->next;
			if (l1) { l1 = l1->next; }
			if (l2) { l2 = l2->next; }
		}
		if (carry > 0)
		{
			cur->next = new ListNode(carry);
		}
		return head->next;
	}
};
#endif //test110

/*
*************************无重复字符的最长子串******************************
给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度
输入: "abcabcbb"
输出: 3
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
*/
#ifdef test111

class Solution
{
public:
	int lengthOfLongestSubstring(string s)
	{
		//s[start,end) 前面包含 后面不包含
		int i = 0, j = 0, length = 0, result = 0;
		int m = s.length();
		if (m == 1) return 1;
		unordered_map<char, int> hash;
		for (i = 0, j = 0; j < m; j++)
		{
			if (hash.count(s[j]))
			{
				i = max(i, hash[s[j]]);
			}
			hash[s[j]] = j + 1;
			result = max(result, j - i + 1);
		}
		return result;
	}
};

#endif // test111

/*
**********************最长回文子串*******************************
给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。
输入: "babad"
输出: "bab"
注意: "aba" 也是一个有效答案。
*/
#ifdef test112
class Solution {
public:
	string longestPalindrome(string s) {
		int n = s.length();
		if (n == 0 || n == 1) return s;
		//vector<vector<bool>> dp(n, vector<bool>(n);
		vector<vector<int>> dp(n, vector<int>(n, 0));
		int s1 = 0, maxs = 0;
		for (int j = 0; j < n; j++)
		{
			for (int i = j; i >= 0; i--)
			{
				if (i == j)
				{
					dp[i][j] = 1;
				}
				else {
					dp[i][j] = (s[i] == s[j] && (dp[i + 1][j - 1] || j - i <= 2));
					if (dp[i][j])
					{
						if (maxs < j - i)
						{
							maxs = j - i;
							s1 = i;
						}
					}
				}
			}
		}
		return s.substr(s1, maxs + 1);
	}
};

#endif // test112
/*
********************整数反转**************************
给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
输入: -123
输出: -321
*/
#ifdef test113
class Solution {
public:
	int reverse(int x) {
		if (x == 0) return 0;
		double ans = 0;
		while (x != 0)
		{
			int _ans = x % 10;
			x /= 10;
			if ((ans * 10 + _ans) > numeric_limits<int>::max()) return 0;
			if ((ans * 10 + _ans) < numeric_limits<int>::min()) return 0;
			ans = ans * 10 + _ans;
		}
		return ans;
	}
};

#endif // test113

/*
********************最长公共前缀******************************
编写一个函数来查找字符串数组中的最长公共前缀。
如果不存在公共前缀，返回空字符串 ""。
输入: ["flower","flow","flight"]
输出: "fl"
*/
#ifdef test114
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0) return "";
		string s = strs[0];
		for (auto s2 : strs)
		{
			while (s2.substr(0, s.size()) != s)
			{
				s = s.substr(0, s.size() - 1);
				if (s == "") return "";
			}
		}
		return s;
	}
};
#endif //test114

/*
*********************三数之和*******************************
给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有满足条件且不重复的三元组。
给定数组 nums = [-1, 0, 1, 2, -1, -4]，
满足要求的三元组集合为：
[
  [-1, 0, 1],
  [-1, -1, 2]
]
*/
#ifdef test115
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> ans;
		int m = nums.size();
		if (m < 3) return ans;
		sort(nums.begin(), nums.end());
		for (int a = 0; a < m - 2; a++)
		{
			if (a > 0 && nums[a] == nums[a - 1]) continue;
			int b = a + 1, c = m - 1;
			while (b < c)
			{
				int sum = nums[a] + nums[b] + nums[c];
				if (sum > 0)
				{
					while (b < c && nums[c] == nums[--c]);
				}
				else if (sum < 0) {
					while (b < c && nums[b] == nums[++b]);
				}
				else {
					ans.push_back(vector<int>{nums[a], nums[b], nums[c]});
					while (b < c && nums[c] == nums[--c]);
					while (b < c && nums[b] == nums[++b]);
				}
			}
		}
		return ans;
	}
};
#endif // test115

/*
*************************四数之和****************************
给定一个包含 n 个整数的数组 nums 和一个目标值 target，判断 nums 中是否存在四个元素 a，b，c 和 d ，
使得 a + b + c + d 的值与 target 相等？找出所有满足条件且不重复的四元组。
*/
#ifdef test116
class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> ans;
		int m = nums.size();
		if (m < 4) return ans;
		sort(nums.begin(), nums.end());
		for (int a = 0; a < m - 3; a++)
		{
			if (a > 0 && nums[a] == nums[a - 1]) continue;
			for (int b = a + 1; b < m - 2; b++)
			{
				if (b > a + 1 && nums[b] == nums[b - 1]) continue;
				int c = b + 1, d = m - 1;
				while (c < d)
				{
					int sum = nums[a] + nums[b] + nums[c] + nums[d];
					if (sum > target)
					{
						while (c < d && nums[d] == nums[--d]);
					}
					else if (sum < target) {
						while (c < d && nums[c] == nums[++c]);
					}
					else {
						ans.push_back(vector<int>{nums[a], nums[b], nums[c], nums[d]});
						while (c < d && nums[d] == nums[--d]);
						while (c < d && nums[c] == nums[++c]);
					}
				}
			}
		}
		return ans;
	}
};

#endif // test116

/*
*******有效的括号*********
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
有效字符串需满足：
左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。
输入: "()"
输出: true
*/
#ifdef test117
class Solution {
public:
	bool isValid(string s)
	{
		stack<char> stack;
		int len = s.length();
		if (len == 0) return true;
		if (len == 1) return false;

		for (int i = 0; i < len; i++)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				stack.push(s[i]);
				continue;
			}
			else if (stack.empty())
			{
				return false;
			}
			switch (s[i])
			{
			case ')':
			{
				char c = stack.top();
				if (c == '(') { stack.pop(); break; }
				else { return false; }
			}
			case '}':
			{
				char c = stack.top();
				if (c == '{') { stack.pop(); break; }
				else { return false; }

			}
			case ']':
			{
				char c = stack.top();
				if (c == '[') { stack.pop(); break; }
				else { return false; }

			}
			default: break;
			}
		}
		return stack.empty();
	}
};

#endif // test117

/*
******************** 合并两个有序链表************************
将两个升序链表合并为一个新的升序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
*/
#ifdef test118
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		/*ListNode* head = new ListNode(0);
		ListNode** t1 = &l1;
		ListNode** t2 = &l2;

		while((*t1)!=nullptr || (*t2) != nullptr)
		{
			if((*t1)==nullptr){head->next = (*t2);break;}
			if((*t2)==nullptr){head->next = (*t1);break;}

			head->next=((*t1)->val > (*t2)->val)?(*t2):(*t1);

			if(*t1) t1= &((*t1)->next);
			if(*t2) t2= &((*t2)->next);
		}
		return head->next;*/
		ListNode* head = new ListNode(0);
		ListNode* pre = head;
		while (l1 != nullptr && l2 != nullptr)
		{
			if (l1->val > l2->val)
			{
				head->next = l2;
				l2 = l2->next;
			}
			else {
				head->next = l1;
				l1 = l1->next;
			}
			head = head->next;
		}
		if (!l1) head->next = l2;
		if (!l2) head->next = l1;
		return pre->next;
	}
};

#endif // test118

/*
*****************最长有效括号********************
给定一个只包含 '(' 和 ')' 的字符串，找出最长的包含有效括号的子串的长度。
输入: "(()"
输出: 2
解释: 最长有效括号子串为 "()"
*/
#ifdef test119
class Solution {
public:
	int longestValidParentheses(string s) {
		int n = s.length();
		int maxlen = 0;
		if (n == 0) return 0;
		vector<int> dp(n, 0);
		for (int i = 1; i < n; i++)
		{
			if (s[i] == ')')
			{
				if (s[i - 1] == '(')
				{
					dp[i] = (i >= 2 ? dp[i - 2] : 0) + 2;
				}
				else if (s[i - 1] == ')' && i - dp[i - 1] - 1 >= 0 && s[i - dp[i - 1] - 1] == '(')
				{
					if (i - dp[i - 1] - 2 >= 0)
						dp[i] = dp[i - dp[i - 1] - 2] + dp[i - 1] + 2;
					else
						dp[i] = dp[i - 1] + 2;
				}
			}
			maxlen = max(maxlen, dp[i]);
		}
		return maxlen;
	}
};
#endif // test119
/*
******************全排列**************************
给定一个可包含重复数字的序列，返回所有不重复的全排列。
输入: [1,1,2]
输出:
[
  [1,1,2],
  [1,2,1],
  [2,1,1]
]
*/

#ifdef test120
class Solution {
public:
	vector<vector<int>> ans;
	vector<bool> visited;
	void dfs(vector<int>& nums, vector<int>& path, int len, int depth)
	{
		if (len == depth)
		{
			ans.push_back(path);
			return;
		}
		for (int i = 0; i < len; i++)
		{
			if (!visited[i])
			{
				if (i > 0 && nums[i] == nums[i - 1] && !visited[i - 1])
					continue;
				path.push_back(nums[i]);
				visited[i] = true;
				dfs(nums, path, len, depth + 1);
				path.pop_back();
				visited[i] = false;
			}
		}
	}
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		int len = nums.size();
		if (len == 0) return ans;
		vector<int> path;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < len; i++)
		{
			visited.push_back(false);
		}
		int depth = 0;

		dfs(nums, path, len, depth);

		return ans;
	}
};
#endif // test120

/*
***************Pow(x, n)*******************
实现 pow(x, n) ，即计算 x 的 n 次幂函数。
*/
#ifdef test121
class Solution {
public:
	double myPow(double x, double n) {
		double result = 0.0;
		if (n >= 0)
		{
			result = mypow(x, n);
		}
		else {
			result = 1. / mypow(x, -n);
		}
		return result;
	}
	double mypow(double x, long long n)
	{
		double result, half;
		long long N = n;
		//N = n;
		if (n == 0)
		{
			return 1.0;
		}
		half = mypow(x, N / 2);
		if (n % 2 == 0)
		{
			result = half * half;
		}
		else {
			result = half * half * x;
		}
		return result;
	}
};
#endif // test121
/*
*****************第k个排列***********************
给出集合 [1,2,3,…,n]，其所有元素共有 n! 种排列。
按大小顺序列出所有排列情况，并一一标记，当 n = 3 时, 所有排列如下：
"123"
"132"
"213"
"231"
"312"
"321"
输入: n = 3, k = 3
输出: "213"
*/
#ifdef test122
class Solution {
public:
	vector<int> fac = { 0,1,2,6,24,120,720,5040,40320,362880,3628800 };
	string getPermutation(int n, int k) {
		string res;
		string s = string("123456789").substr(0, n);
		--k;
		while (k > 0)
		{
			size_t i = k / fac[n - 1];
			res.push_back(s[i]);
			s.erase(s.begin() + i);
			k %= fac[n - 1];
			--n;
		}
		return res + s;
	}
};

#endif // test122

/*
******************不同路径 II****************************
一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为“Start” ）。
机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为“Finish”）。
现在考虑网格中有障碍物。那么从左上角到右下角将会有多少条不同的路径？
输入:
[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]
输出: 2
*/
#ifdef test123
class Solution {
public:
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();
		vector<vector<double>> dp(m, vector<double>(n, 0.0));
		if (obstacleGrid[m - 1][n - 1] == 1) return 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 || j == 0)
				{
					if (i == 0 && j == 0 && obstacleGrid[0][0] == 1) {
						return 0;
					}
					else if (i == 0 && j == 0 && obstacleGrid[0][0] == 0) {
						dp[i][j] = 1;
					}
					else if (i == 0 && obstacleGrid[i][j] == 0) {
						dp[i][j] = dp[i][j - 1];
					}
					else if (j == 0 && obstacleGrid[i][j] == 0) {
						dp[i][j] = dp[i - 1][j];
					}
				}
				else {
					if (obstacleGrid[i - 1][j] == 1 && obstacleGrid[i][j - 1] == 1)
					{
						dp[i][j] = 0;
					}
					else if (obstacleGrid[i - 1][j] == 0 && obstacleGrid[i][j - 1] == 0)
					{
						dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
					}
					else if (obstacleGrid[i - 1][j] == 0)
					{
						dp[i][j] = dp[i - 1][j];
					}
					else if (obstacleGrid[i][j - 1] == 0)
					{
						dp[i][j] = dp[i][j - 1];
					}
				}
			}
		}
		return dp[m - 1][n - 1];
	}
};
#endif // test123
/*
******************编辑距离************************
给你两个单词 word1 和 word2，请你计算出将 word1 转换成 word2 所使用的最少操作数 。
输入：word1 = "horse", word2 = "ros"
输出：3
解释：
horse -> rorse (将 'h' 替换为 'r')
rorse -> rose (删除 'r')
rose -> ros (删除 'e')
*/
#ifdef test124
class Solution {
public:
	int minDistance(string word1, string word2) {
		if (word1 == word2) return 0;
		int m = word1.length();
		int n = word2.length();
		int minnum;
		vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
		for (int i = 0; i <= m; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				if (i == 0)
				{
					dp[i][j] = j;
				}
				else if (j == 0)
				{
					dp[i][j] = i;
				}
				else {
					if (word1[i - 1] == word2[j - 1])
					{
						minnum = min(dp[i][j - 1] + 1, dp[i - 1][j] + 1);
						dp[i][j] = min(dp[i - 1][j - 1], minnum);
					}
					else {
						minnum = min(dp[i][j - 1], dp[i - 1][j]) + 1;
						dp[i][j] = min(dp[i - 1][j - 1] + 1, minnum);
					}
				}
			}
		}
		return dp[m][n];
	}
};
#endif // test124

/*
*******************解码方法***************************
一条包含字母 A-Z 的消息通过以下方式进行了编码：
'A' -> 1
'B' -> 2
...
'Z' -> 26
输入: "12"
输出: 2
解释: 它可以解码为 "AB"（1 2）或者 "L"（12）。
*/

#ifdef test125
class Solution {
public:
	int numDecodings(string s) {
		int n = s.length();
		if (s[0] == '0') return 0;
		vector<int> dp(n, 0);
		int num;
		dp[0] = 1;
		for (int i = 1; i < n; i++)
		{
			num = (s[i] - '0') + 10 * (s[i - 1] - '0');
			cout << num << endl;
			if (num == 0) return 0;
			if (s[i] == '0' && num > 20)
			{
				return 0;
			}
			else if (s[i] == '0' && (num == 10 || num == 20))
			{
				dp[i] = (i - 2 >= 0 ? dp[i - 2] : 1);
			}
			else if (num >= 10 && num <= 26)
			{
				dp[i] = dp[i - 1] + (i - 2 >= 0 ? dp[i - 2] : 1);
			}
			else {
				dp[i] = dp[i - 1];
			}
		}
		return dp[n - 1];
	}
};
#endif // test125
/*
*****************复原IP地址********************
给定一个只包含数字的字符串，复原它并返回所有可能的 IP 地址格式。
输入: "25525511135"
输出: ["255.255.11.135", "255.255.111.35"]
*/
#ifdef test126
class Solution {
public:
	vector<string>res;
	int n; //字符串s长度
	vector<string> restoreIpAddresses(string s) {
		n = s.size();
		dfs(0, 0, "", s);
		return res;
	}
	/*
	* @param start:当前开始的位置
	* @param depth: 当前选出了几个段
	* @param path: 传递的路径(一般字符串问题都将路径作为传递，可以解决回溯弹出问题)
	* @param s:给出的需要分割的字符串
	*/
	void dfs(int start, int depth, string path, string s) {
		if (depth == 4) {
			path.pop_back(); //除去传递参数时最后一次多加的'.'
			res.push_back(path);
			return;
		}
		//endMin 表示最短可以在哪里结束, endMax 表示最长可以在哪里结束
		// 3 - depth 表示剩余的 ip 段个数 (EG.当depth=0,现在正在处理第一段,还剩3段)
		// n - (3 - depth) * 3 表示剩余的 ip 段如果都是 3 位数，当前 ip 段的结束位置（取不到）
		// start + 1 也是因为取不到
		int endMin = max(start + 1, n - (3 - depth) * 3);
		// n - (3 - depth) * 1 表示剩余的 ip 段如果都是 1 位数，当前 ip 段的结束位置（取不到）
		int endMax = min(start + 3, n - (3 - depth));

		for (int end = endMin; end <= endMax; end++) {
			string split = s.substr(start, end - start); // end - start 表示截取长度
			int splitLen = split.size();
			if (splitLen > 1 && split[0] == '0') { //当长度>1时, 第一位不能为0
				break;
			}
			if (stoi(split) <= 255) { //转换为int判断
				dfs(end, depth + 1, path + (split + '.'), s);
			}
		}
	}
};
#endif // test126
/*
**************************分发糖果*****************************
*/
#ifdef test127
class Solution {
public:
	int candy(vector<int>& ratings) {
		int m = ratings.size();
		vector<int> result(m, 1);
		for (int i = 1; i < m; i++)
		{
			if (ratings[i] > ratings[i - 1])
			{
				result[i] = result[i - 1] + 1;
			}
		}
		for (int j = m - 2; j >= 0; j--)
		{
			if ((ratings[j] > ratings[j + 1]) && (result[j] <= result[j + 1]))
			{
				result[j] = result[j + 1] + 1;
			}
		}
		int sum = accumulate(result.begin(), result.end(), 0);
		return sum;
	}
};
#endif // test127
/*
****************************环形链表************************
*/
#ifdef test128
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	bool hasCycle(ListNode *head) {
		if (head == nullptr) return false;
		ListNode* slow = head;
		ListNode* fast = head;
		while (slow && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (fast == nullptr) return false;
			if (slow == fast) {
				/*fast = head;
				while(slow != fast)
				{
					slow = slow->next;
					fast = fast->next;
				}
				cout << slow->val << endl;*/
				return true;
			}
		}
		return false;
	}
};
#endif // test128



/*
***********************被围绕的区域*****************************
给定一个二维的矩阵，包含 'X' 和 'O'（字母 O）。
找到所有被 'X' 围绕的区域，并将这些区域里所有的 'O' 用 'X' 填充。
示例:

X X X X
X O O X
X X O X
X O X X
运行你的函数后，矩阵变为：

X X X X
X X X X
X X X X
X O X X
*/
#ifdef test131
class Solution {
public:
	void dfs(vector<vector<char>>& board, int i, int j)
	{
		if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] == '#' ||
			board[i][j] == 'X') {
			return;
		}
		board[i][j] = '#';
		dfs(board, i - 1, j);//up
		dfs(board, i + 1, j);//down
		dfs(board, i, j - 1);//left
		dfs(board, i, j + 1);//right
	}
	void solve(vector<vector<char>>& board) {
		int m = board.size();
		if (m == 0) return;
		int n = board[0].size();
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (board[i][j] == 'O' && (i == 0 || j == 0 || i == m - 1 || j == n - 1))
				{
					dfs(board, i, j);
				}
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (board[i][j] == '#')
				{
					board[i][j] = 'O';
				}
				else if (board[i][j] == 'O') {
					board[i][j] = 'X';
				}
			}
		}
		return;
	}
};
#endif // test131
/*
***************************单词拆分***************************
输入: s = "leetcode", wordDict = ["leet", "code"]
输出: true
解释: 返回 true 因为 "leetcode" 可以被拆分成 "leet code"。
*/
#ifdef test132
class Solution {
public:
	bool wordBreak(string s, vector<string>& wordDict) {
		int n = s.size();
		vector<bool> dp(n + 1, false);
		dp[0] = true;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (dp[j] && find(wordDict.begin(), wordDict.end(), s.substr(j, i - j)) != wordDict.end())
				{
					dp[i] = true;
					break;
				}
			}
		}
		return dp[n];
	}
};
#endif // test132



/*
*****************二叉树的中序遍历**************************
*/
#ifdef test300
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	void inOrderTree(TreeNode* root, vector<int>& res)
	{
		if (root)
		{
			inOrderTree(root->left, res);
			res.emplace_back(root->val);
			inOrderTree(root->right, res);
		}
		return;
	}
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> res;
		if (root)
		{
			inOrderTree(root, res);
		}
		return res;
		/*stack<TreeNode*> s;
		vector<int> v;
		if(root==nullptr) return v;
		TreeNode* t = root;
		while(!s.empty() || t!=nullptr)
		{
			if(t!=nullptr)
			{
				s.push(t);
				t = t->left;
			}else{
				t = s.top();
				s.pop();
				v.emplace_back(t->val);
				t = t->right;
			}
		}
		return v;*/
	}
};

#endif // test300
/*
**********************不同的二叉搜索树*******************************
给定一个整数 n，求以 1 ... n 为节点组成的二叉搜索树有多少种？
*/
#ifdef test301
class Solution {
public:
	int numTrees(int n) {
		vector<int> dp(n + 1, 0);
		if (n == 0 || n == 1) return 1;
		dp[0] = 1;
		dp[1] = 1;
		int num = 0;
		for (int i = 2; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				num += (dp[j - 1] * dp[i - j]);
			}
			dp[i] = num;
			num = 0;
		}
		return dp[n];
	}
};
#endif // test301
/*
*********************************不同的二叉搜索树 II**************************************
给定一个整数 n，生成所有由 1 ... n 为节点所组成的二叉搜索树。
*/
#ifdef test302
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<TreeNode*> helper(int start, int end) {
		vector<TreeNode*> ret;
		if (start > end)
			ret.push_back(nullptr);

		for (int i = start; i <= end; i++) {
			vector<TreeNode*> left = helper(start, i - 1);
			vector<TreeNode*> right = helper(i + 1, end);
			for (auto l : left) {
				for (auto r : right) {
					TreeNode* root = new TreeNode(i);
					root->left = l;
					root->right = r;
					ret.push_back(root);
				}
			}
		}
		return ret;
	}

	vector<TreeNode*> generateTrees(int n) {
		vector<TreeNode*> ret;
		if (n == 0)
			return ret;
		ret = helper(1, n);
		return ret;
	}
};
#endif // test302
/*
**********************验证二叉搜索树**********************************
给定一个二叉树，判断其是否是一个有效的二叉搜索树。

假设一个二叉搜索树具有如下特征：
节点的左子树只包含小于当前节点的数。
节点的右子树只包含大于当前节点的数。
所有左子树和右子树自身必须也是二叉搜索树。
*/
#ifdef test303
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	bool isBST(TreeNode* t, long long lower, long long upper)
	{
		if (t == nullptr) return true;
		int val = t->val;
		if (val <= lower || val >= upper)
			return false;
		return isBST(t->left, lower, val) && isBST(t->right, val, upper);
	}
	bool isValidBST(TreeNode* root) {
		return isBST(root, numeric_limits<long long>::min(), numeric_limits<long long>::max());
	}
};
#endif // test303
/*
***************************对称二叉树*********************************
给定一个二叉树，检查它是否是镜像对称的。
*/
#ifdef test304
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	bool isSymmetric(TreeNode* root) {
		//return ismirror(root,root);
		queue<TreeNode*> q;
		q.push(root);
		q.push(root);
		while (!q.empty())
		{
			TreeNode* t1 = q.front();
			q.pop();
			TreeNode* t2 = q.front();
			q.pop();
			if (t1 == nullptr && t2 == nullptr) continue;
			if (t1 == nullptr || t2 == nullptr) return false;
			if (t1->val != t2->val) return false;
			q.push(t1->left);
			q.push(t2->right);
			q.push(t1->right);
			q.push(t2->left);
		}
		return true;
	}
	/*bool ismirror(TreeNode* lroot,TreeNode* rroot)
	{
		if(lroot == nullptr && rroot == nullptr) return true;
		if(lroot == nullptr || rroot == nullptr) return false;
		return lroot->val == rroot->val && ismirror(lroot->right,rroot->left)
		&& ismirror(lroot->left,rroot->right);
	}*/
};
#endif // test304
/*
*******************二叉树的层序遍历******************************
*/
#ifdef test305
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		queue<TreeNode*> q;
		vector<vector<int>> v;
		if (root == nullptr) return v;
		q.push(root);
		while (!q.empty())
		{
			vector<int> _v;
			int length = q.size();
			for (int i = 0; i < length; i++)
			{
				TreeNode* t = q.front();
				q.pop();
				_v.emplace_back(t->val);
				if (t->left != nullptr) q.push(t->left);
				if (t->right != nullptr) q.push(t->right);
			}
			v.emplace_back(_v);
		}
		return v;
	}
};
#endif // test305
/*
*******************二叉树的锯齿形层次遍历*************************
	3
   / \
  9  20
	/  \
   15   7
 返回锯齿形层次遍历如下：
[
  [3],
  [20,9],
  [15,7]
]
*/
#ifdef test306
class Solution {
public:
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		queue<TreeNode*> q;
		vector<vector<int>> v;
		if (root == nullptr) return v;
		q.push(root);
		int level = 0;
		while (!q.empty())
		{
			vector<int> v2;
			int length = q.size();
			for (int i = 0; i < length; i++)
			{
				TreeNode* t = q.front();
				q.pop();
				if (level % 2 == 0)
				{
					v2.push_back(t->val);
				}
				else {
					v2.insert(v2.begin(), t->val);
				}
				if (t->left) q.push(t->left);
				if (t->right) q.push(t->right);
			}
			v.push_back(v2);
			level++;
		}
		return v;
	}
};
#endif // test306
/*
******************* 二叉树的最大深度*************************
*/
#ifdef test307
class Solution {
public:
	int getTreeDepth(TreeNode* t)
	{
		if (t)
		{
			int res1 = getTreeDepth(t->left);
			int res2 = getTreeDepth(t->right);
			int maxDepth = max(res1, res2);
			return maxDepth + 1;
		}
		else {
			return 0;
		}
	}
	int maxDepth(TreeNode* root) {
		return getTreeDepth(root);
	}
};
#endif // test307

/*
**********************二叉树的最小深度********************************
*/
#ifdef test308
class Solution {
public:
	int minDepth(TreeNode* root) {
		queue<TreeNode*> q;
		if (root == nullptr) return 0;
		q.push(root);
		int level = 1, flag = 0;
		while (!q.empty())
		{
			int length = q.size();
			for (int i = 0; i < length; i++)
			{
				TreeNode* t = q.front();
				q.pop();
				if (t->left == nullptr && t->right == nullptr) { flag = 1; break; }
				if (t->left) q.push(t->left);
				if (t->right) q.push(t->right);
			}
			if (flag == 1) return level;
			level++;
		}
		return -1;
	}
};
#endif // test308
/*
********************从前序与中序遍历序列构造二叉树****************************
*/
#ifdef test309
class Solution {
public:
	TreeNode* build(vector<int>& preorder, int pStart, int pEnd,
		vector<int>& inorder, int iStart, int iEnd)
	{
		if (pStart > pEnd || iStart > iEnd) return nullptr;
		int index = 0;
		TreeNode* root = new TreeNode(preorder[pStart]);
		while (preorder[pStart] != inorder[iStart + index])
		{
			index++;
		}
		root->left = build(preorder, pStart + 1, pStart + index, inorder, iStart, iStart + index - 1);
		root->right = build(preorder, pStart + index + 1, pEnd, inorder, iStart + index + 1, iEnd);
		return root;
	}
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		if (preorder.empty() || inorder.empty()) return nullptr;
		return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
	}
};
#endif // test309
/*
*****************************从中序与后序遍历序列构造二叉树*************************************
*/
#ifdef test310
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	TreeNode* build(vector<int>& inorder, int iStart, int iEnd,
		vector<int>& postorder, int pStart, int pEnd)
	{
		if (iStart > iEnd || pStart > pEnd) return nullptr;
		TreeNode* root = new TreeNode(postorder[pEnd]);
		int index = 0;
		while (postorder[pEnd] != inorder[iEnd - index])
		{
			index++;
		}
		root->left = build(inorder, iStart, iEnd - index - 1, postorder, pStart, pEnd - index - 1);
		root->right = build(inorder, iEnd - index + 1, iEnd, postorder, pEnd - index, pEnd - 1);
		return root;
	}
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
		if (inorder.empty() || postorder.empty()) return nullptr;
		return build(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
	}
};
#endif // test310
/*
**************************将有序数组转换为二叉搜索树*********************************
将一个按照升序排列的有序数组，转换为一棵高度平衡二叉搜索树。
*/
#ifdef test311
class Solution {
public:
	TreeNode* build(vector<int>& nums, int left, int right)
	{
		if (left > right) return nullptr;
		int med = (left + right) / 2;
		TreeNode* t = new TreeNode(nums[med]);
		t->left = build(nums, left, med - 1);
		t->right = build(nums, med + 1, right);
		return t;
	}
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return build(nums, 0, nums.size() - 1);
	}
};
#endif // test311
/*
********************给定一个二叉树，判断它是否是高度平衡的二叉树。***************************
*/
#ifdef test312
class Solution {
public:
	int comDepth(TreeNode* root)
	{
		if (root == nullptr) return 0;
		int left = comDepth(root->left);
		int right = comDepth(root->right);
		int maxdepth = left > right ? left : right;
		return maxdepth + 1;
	}
	bool isBalance(TreeNode* t)
	{
		if (t == nullptr) return true;
		return abs(comDepth(t->left) - comDepth(t->right)) < 2 &&
			isBalance(t->left) && isBalance(t->right);
	}
	bool isBalanced(TreeNode* root) {
		return isBalance(root);
	}
};
#endif // test312
/*
*************************路径总和**************************
给定一个二叉树和一个目标和，判断该树中是否存在根节点到叶子节点的路径，这条路径上所有节点值相加等于目标和。
*/
#ifdef test313
class Solution {
public:
	bool hasPath(TreeNode* root, int sum)
	{
		if (root == nullptr) return false;
		if (root->left == nullptr && root->right == nullptr) return root->val == sum;

		return (hasPath(root->left, sum - root->val) || hasPath(root->right, sum - root->val));
	}
	bool hasPathSum(TreeNode* root, int sum) {
		return hasPath(root, sum);
	}
};
#endif // test313
/*
************************ 路径总和 II***************************
给定一个二叉树和一个目标和，找到所有从根节点到叶子节点路径总和等于给定目标和的路径
*/
#ifdef test314
class Solution {
public:
	void path(TreeNode* root, vector<vector<int>>& v, vector<int> _v, int sum)
	{
		if (root == nullptr) return;
		_v.emplace_back(root->val);
		if (root->left == nullptr && root->right == nullptr && sum == root->val)
		{
			v.emplace_back(_v);
		}
		path(root->left, v, _v, sum - root->val);
		path(root->right, v, _v, sum - root->val);
		return;
	}
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		vector<vector<int>> v;
		vector<int> _v;
		path(root, v, _v, sum);
		return v;
	}
};
#endif // test314

/*
*******************二叉树的后序遍历*************************
*/
#ifdef test315
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root) {
		stack<TreeNode*> s1, s2;
		vector<int> ans;
		if (root == nullptr) return ans;
		s1.push(root);
		while (!s1.empty())
		{
			TreeNode* t = s1.top();
			s1.pop();
			s2.push(t);
			if (t->left) s1.push(t->left);
			if (t->right) s1.push(t->right);
		}
		while (!s2.empty())
		{
			TreeNode* t2 = s2.top();
			s2.pop();
			ans.push_back(t2->val);
		}
		return ans;
	}
};
#endif // test315
/*
*******************二叉树的前序遍历*************************
*/
#ifdef test315
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root) {
		stack<TreeNode*> s;
		vector<int> ans;
		if (root == nullptr) return ans;
		s.push(root);
		while (!s.empty())
		{
			TreeNode* t = s.top();
			s.pop();
			ans.push_back(t->val);
			if (t->right) s.push(t->right);
			if (t->left) s.push(t->left);
		}
		return ans;
	}
};
#endif // test315


#ifdef test32
#include<iostream>
#include<vector>

using namespace std;

//类选择排序 平均时间复杂度为O(N*K)，空间复杂度为O(N)
vector<int> TopKBySelect(vector<int>& nums, int k, int len)
{
	vector<int>res;

	vector<int>flag(len);

	for (int i = 0; i < k; i++)
	{
		int maxIndex = 0;   //保存最大数的索引
		int maxNum = nums[0];  //保存最大数

		for (int j = 0; j < len; j++)
		{
			if (nums[j] > maxNum && !flag[j])  //如果大于最大数并且没有被取出来过
			{
				maxNum = nums[j];
				maxIndex = j;

			}
		}
		flag[maxIndex] = -1;    //将此次遍历的最大数索引标记为-1，防止再次被取出
		res.push_back(maxNum);  //存入该最大数
	}

	return res;
}
//类堆排序 时间复杂度为O(NlogK)，空间复杂度是O(1)
void adjustMinHeap(vector<int>& nums, int root, int len) //小顶堆结点调整
{
	int lch = 2 * root + 1;  //左子结点
	int rch = lch + 1;   //右子结点
	int index = root;  //较大结点

	if (rch < len&&nums[rch] < nums[index])index = rch;

	if (lch < len&&nums[lch] < nums[index])index = lch;

	if (index != root) //当前结点非最小结点
	{
		swap(nums[index], nums[root]);
		adjustMinHeap(nums, index, len);
	}
	return;
}

vector<int> TopKInHeap(vector<int>& nums, int k, int len)
{
	vector<int>res(nums.begin(), nums.begin() + k); //取出前k个数

	for (int i = k / 2 - 1; i >= 0; i--)  //根据前K个数建立一个小顶堆
	{
		adjustMinHeap(res, i, k);
	}

	//将剩下的数与堆顶做比较
	for (int i = k; i < len; i++)
	{
		if (nums[i] > res[0])  //当前数比堆顶数大
		{
			res[0] = nums[i]; //将堆顶更新为该数
			adjustMinHeap(res, 0, k); //重新调整堆
		}
	}

	return res;
}
//类快排 时间复杂度为O(N)
int getIndex(vector<int>& nums, int left, int right)  //快排获取相遇点（基准数被交换后的位置）
{
	int base = nums[left];
	int start = left;
	while (left < right)
	{
		while (left < right&&nums[right] >= base)right--;
		while (left < right&&nums[left] <= base)left++;

		int temp = nums[right];
		nums[right] = nums[left];
		nums[left] = temp;
	}

	nums[start] = nums[left];
	nums[left] = base;

	return left;
}
int findTopKthIndex(vector<int>&nums, int k, int left, int right)
{
	int index = getIndex(nums, left, right);    //获取基准数位置

	int NumOverBase = right - index;  //比基准数大的数的个数

	if (NumOverBase == k)return index;  //比基准数大的刚好有K个

	//比基准数大的多于K个，就在右边子区间寻找TopK
	else if (NumOverBase > k)return findTopKthIndex(nums, k, index + 1, right);

	//比基准数大的少于K个，就在左边找剩下的
	return findTopKthIndex(nums, k - NumOverBase, left, index);

}
vector<int> TopKInQuick(vector<int>& nums, int k, int len)
{
	if (len == k)return nums;

	vector<int>res;
	vector<int>temp(nums.begin(), nums.end());  //TopK不对原数组改变

	int index = findTopKthIndex(temp, k, 0, len - 1);  //通过快排找到第K+1大的数的位置

	for (int i = len - 1; i > index; i--)res.push_back(temp[i]);  //取出TopK返回

	return res;
}

#endif // test32

#ifdef test130
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void outPutTime(int useSec)
{
	int now = 28800;
	int ans = now + useSec;
	int hour = ans / 3600;
	int min = (ans % 3600) / 60;
	int sec = ans % 3600 % 60;
	string ss;
	if (hour > 12) {
		ss = "pm";
	}
	else {
		ss = "am";
	}
	printf("%02d:%02d:%02d %s\n", hour, min, sec, ss.c_str());
}
int main()
{
	int T, n;
	int tmp;

	cin >> T;
	while (T--) {
		cin >> n;
		vector<int> dp(n + 1, 0);
		vector<int> a;;
		vector<int> b;;
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			a.push_back(tmp);
		}
		for (int i = 0; i < n - 1; i++) {
			cin >> tmp;
			b.push_back(tmp);
		}
		if (n == 0)
		{
			outPutTime(0); continue;
		}
		if (n == 1) {
			outPutTime(a[0]);
			continue;
		}
		for (int i = 0; i <= n; i++) {
			if (i == 0) {
				dp[i] = 0;
			}
			else if (i == 1) {
				dp[i] = a[i - 1];
			}
			else {
				dp[i] = min(dp[i - 1] + a[i - 1], dp[i - 2] + b[i - 2]);
			}
		}
		outPutTime(dp[n]);
	}
	return 0;
}

#endif //test130

#ifdef test129
#include <iostream>
#include <vector>
#include <string>

using namespace std;
string myReverse(string ss)
{
	string ans = "";
	for (int i = ss.size() - 1; i >= 0; i--) {
		ans += ss[i];
	}
	return ans;
}
string findStr(string ss)
{
	string ans;
	int len = ss.size(), i = 0;
	for (int j = len - 1; j >= 0; j--) {
		if (ss[i] == ss[j])
			i++;
	}
	if (i == len)
		return ss;
	ans = ss.substr(i, len);
	ans = myReverse(ans);
	ans += findStr(ss.substr(0, i)) + ss.substr(i);
	return ans;
}
int main()
{
	string ss;
	cin >> ss;
	ss = myReverse(ss);
	string ans;
	ans = findStr(ss);
	cout << ans << endl;
	return 0;
}

#endif // test129

#ifdef test0
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	struct tm *ptr;
	time_t lt;
	lt = time(0);//获取当前时间戳 默认起始日期均为1900
	//lt = (time_t)28800;//自定义秒数
	cout << lt << endl;

	ptr = localtime(&lt);//本地时区 
	printf("%04d:%02d:%02d:%02d:%02d:%02d\n", ptr->tm_year + 1900, ptr->tm_mon + 1, ptr->tm_mday, ptr->tm_hour, ptr->tm_min, ptr->tm_sec);
	cout << ctime(&lt) << endl;


	ptr = gmtime(&lt);//格林尼治标准时间 中国时区时差 +8个小时
	printf("%04d:%02d:%02d:%02d:%02d:%02d\n", ptr->tm_year + 1900, ptr->tm_mon + 1, ptr->tm_mday, ptr->tm_hour + 8, ptr->tm_min, ptr->tm_sec);
	return 0;
}

#endif // test0

#ifdef test316
#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* build(vector<int>& preorder, int pStart, int pEnd,
	vector<int>& inorder, int iStart, int iEnd, int& outNum)
{
	if (pStart > pEnd || iStart > iEnd)
	{
		outNum++;
		return nullptr;
	}
	int index = 0;
	TreeNode* root = new TreeNode(preorder[pStart]);
	while (preorder[pStart] != inorder[iStart + index])
	{
		index++;
	}
	root->left = build(preorder, pStart + 1, pStart + index, inorder, iStart, iStart + index - 1, outNum);
	root->right = build(preorder, pStart + index + 1, pEnd, inorder, iStart + index + 1, iEnd, outNum);
	return root;
}
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int& outNum) {
	if (preorder.empty() || inorder.empty()) return nullptr;
	return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, outNum);
}
int main()
{
	int N;
	cin >> N;
	vector<int> preorder(N, 0);
	vector<int> inorder(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> preorder[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> inorder[i];
	}
	int outNum = 0;
	TreeNode* root = buildTree(preorder, inorder, outNum);
	cout << outNum / 2 << endl;

	return 0;
}

#endif //test316

#ifdef test500
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int* getNext(string p)
{
	int* next = new int[p.length()];
	next[0] = -1;
	int j = 0;
	int k = -1;
	while (j < (int)p.length() - 1)
	{
		if (k == -1 || p[j] == p[k])
		{
			j++;
			k++;
			next[j] = k;
		}
		else
		{
			k = next[k];
		}
	}
	return next;
}

int KMP(string T, string p)
{
	int i = 0;
	int j = 0;
	int* next = getNext(T);
	while (i < (int)T.length() && j < (int)p.length())
	{
		if (j == -1 || T[i] == p[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next[j];
		}
	}
	if (j == (int)p.length())
	{
		return i - j;
	}
	return -1;
}

int main()
{
	string ss1 = "hello";
	string ss2 = "adghelloedgf";
	cout << KMP(ss2, ss1) << endl;
	return 0.;
}
#endif // test500

#ifdef test001
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ZeroOnePack(vector<int> v, vector<int> w, int n, int c)
{
	vector<int> dp(c + 1);
	for (int i = 1; i <= n; i++)
	{
		for (int j = c; j >= 0; j--)
		{
			if (j >= w[i])
				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

		}
	}
	return dp[c];
}
int main()
{
	int N, X;
	cin >> N >> X;
	vector<int> v(N+1, 0);
	vector<int> w(N+1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> v[i];
		cin >> w[i];
	}
	cout << ZeroOnePack(v, w, N, X) << endl;

	return 0;
}*/

/*#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ss;
	int K;
	cin >> ss;
	cin >> K;
	int flag = 0;
	if (ss.length() == K || ss.length() == 0) {
		cout << "0" << endl;
		return 0;
	}
	for (int i = 0; i < K; i++) {
		flag = 0;
		for (string::iterator it = ss.begin(); it != ss.end(); it++)
		{
			if (*it > *(it + 1)) {
				ss.erase(it);
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			ss.erase(ss.end() - K - i - 1, ss.end());
			break;
		}
	}
	string::iterator it = ss.begin();
	for (; it != ss.end() - 1; it++) {
		if (*it == '0') {
			ss.erase(it);
		}
		else {
			break;
		}
	}
	cout << ss << endl;
	return 0;
}*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int ans = 99999999;

void dfs(vector<list<pair<int, int>>>& directMap, vector<int>& vis, int start, int end, int cost)
{
	if (start == end) {
		ans = min(ans, cost);
		return;
	}
	for (auto it : directMap[start]) {
		vis[it.first] = 1;
		dfs(directMap, vis, it.first, end, cost + it.second);
		vis[it.first] = 0;
	}

}
int main()
{
	int N, P, X;
	cin >> N >> P;
	vector<list<pair<int, int>>> directMap(N);
	int start, end, value;
	vector<int> vis(N, 0);
	for (int i = 0; i < P; i++) {
		cin >> start >> end >> value;
		directMap[start].push_back(make_pair(end, value));
	}
	cin >> X;
	int cost = 0;
	dfs(directMap, vis, 0, X, cost);
	cout << ans << endl;
	return 0;
}
#endif // test001

#ifdef test002
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct compare {
	bool operator()(const pair<char, int>& a, const pair<char, int>& b)
	{
		if (a.second == b.second) {
			return a.first < b.first;
		}
		else {
			return a.second > b.second;
		}
	}
};
int main()
{
	string ss;
	getline(cin, ss);
	if (ss.length() == 0) {
		cout << "" << endl;
		return 0;
	}
	//cout << ss << endl;
	unordered_map<char, int> map;
	for (int i = 0; i < ss.length(); i++) {
		if ((ss[i] >= 'a' && ss[i] <= 'z') || (ss[i] >= 'A' && ss[i] <= 'Z') || (ss[i] >= '0' && ss[i] <= '9') || ss[i] == ' ') {
			map[ss[i]]++;
		}
	}
	for (auto it : map) {
		cout << it.first << " " << it.second << endl;
	}
	vector<pair<char, int>> map2(map.begin(), map.end());
	sort(map2.begin(), map2.end(), compare());

	for (int i = 0; i < map2.size(); i++) {
		cout << map2[i].first;
	}
	cout << endl;
	return 0;
}

#endif //test002

#ifdef test501
#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	long long ans1 = 1, ans2 = 1;
	for (int i = 1; i <= m; i++) {
		ans1 = ans1 * (n - i + 1) / i;//Cnm
		ans2 = ans2 * (n - i + 1); //Anm
	}
	cout << ans1 << endl;
	cout << ans2 << endl;

	return 0;
}
#endif //test501

#ifdef test502
#include <iostream>
using namespace std;

int flip(int n)
{
	return n ^ 1;
}
int sign(int n)
{
	return flip((n >> 31) & 1);
}
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	int num3 = num1 - num2;
	int s1 = sign(num1);//正数返回1 负数返回0
	int s2 = sign(num2);
	int s3 = sign(num3);

	int diff12 = s1 ^ s2; //两个数符号是否不同  不同1  相同0 
	int same12 = flip(diff12); //两个数符号是否相同  相同1  不同0 

	int return1 = diff12 * s1 + same12 * s3;
	int return2 = flip(return1);
	cout << num1 * return1 + num2 * return2 << endl;

	return 0;
}
#endif // test502

#ifdef test004
/*
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	int T;
	cin >> T;
	string ss;
	while (T--) {
		cin >> ss;
		if (ss.length() == 0) {
			cout << "Wrong" << endl;
			continue;
		}
		int flag = 0;
		int numflag = 0;
		for (int i = 0; i < ss.length(); i++) {
			if (i == 0) {
				if (!((ss[i] >= 'a' && ss[i] <= 'z') || (ss[i] >= 'A' && ss[i] <= 'Z'))) {
					flag = 1;
					break;
				}
				continue;
			}
			else if ((ss[i] >= 'a' && ss[i] <= 'z') || (ss[i] >= 'A' && ss[i] <= 'Z') || (ss[i] >= '0' && ss[i] <= '9')) {
				if (ss[i] >= '0' && ss[i] <= '9') {
					numflag = 1;
				}
				continue;
			}
			flag = 1;
			break;
		}
		if (flag == 1 || numflag==0) {
			cout << "Wrong" << endl;
		}
		else {
			cout << "Accept" << endl;
		}
	}
	return 0;
}*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
struct compare
{
	bool operator()(const pair<int, int>& a, const pair<int, int>& b)
	{
		if (a.second == b.second)
			return a.first < b.first;
		else
			return a.second > b.second;
	}
};
int main()
{
	int n, m;
	cin >> n >> m;
	if (m >= n) {
		for (int i = 1; i <= n; i++) {
			cout << i;
			if (i < n) {
				cout << " ";
			}
		}
		cout << endl;
		return 0;
	}
	priority_queue<pair<int, int>, vector<pair<int, int>>, compare > p;
	int v, w;
	int i = 1;
	int money = 0;
	while (n--) {
		cin >> v >> w;
		if (i <= m) {
			p.push(make_pair(i, v + (w - 1) * 2));
		}
		else {
			money = v + (w - 1) * 2;
			if (money > p.top().second) {
				p.pop();
				p.push(make_pair(i, money));
			}
		}
		i++;
	}
	vector<int> ans;
	while (!p.empty()) {
		ans.push_back(p.top().first);
		p.pop();
	}
	sort(ans.begin(), ans.end());
	for (int i = 0; i < m; i++) {
		cout << ans[i];
		if (i < m - 1) {
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> weight(n + 2, 0);
	vector<int> get(n, 0);
	int num;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		weight[i] = num;
	}
	for (int i = 0; i < n; i++) {
		cin >> get[i];
	}

	for (int i = 0; i < get.size(); i++) {
		int left = 0, right = 0;
		int maxleft = 0, maxright = 0;
		weight[get[i]] = 0;
		for (int j1 = get[i] - 1; j1 >= 0; j1--) {
			if (weight[j1] == 0) {
				left = 0;
			}
			left += weight[j1];
			maxleft = max(maxleft, left);
		}
		for (int j2 = get[i] + 1; j2 <= n; j2++) {
			if (weight[j2] == 0) {
				right = 0;
			}
			right += weight[j2];
			maxright = max(maxright, right);
		}
		cout << max(maxright, maxleft) << endl;
	}
	return 0;
}

#endif // test004

#ifdef test503
#include <iostream>

using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int sum = a;
	while (b != 0) {
		sum = a ^ b;
		b = (a & b) << 1;
		a = sum;
	}
	cout << sum << endl;

	return 0;
}

#endif // test503

#ifdef test504
#include <iostream>
#include <stack>

using namespace std;
stack<int> stackData;
stack<int> stackMin;

void push(int x)
{
	stackData.push(x);
	if (stackMin.empty() || stackMin.top() >= x)
		stackMin.push(x);
}
int pop()
{
	if (stackMin.top() == stackData.top())
		stackMin.pop();
	int ans = stackData.top();
	stackData.pop();
	return ans;
}
int getMin()
{
	return stackMin.top();
}

int main()
{
	push(5);
	push(1);
	push(2);
	push(7);
	push(10);

	cout << getMin() << endl;//1
	cout << pop() << endl;
	cout << getMin() << endl;//1
	cout << pop() << endl;
	cout << getMin() << endl;//1
	cout << pop() << endl;
	cout << getMin() << endl;//1
	cout << pop() << endl;
	cout << getMin() << endl;//5

	return 0;
}

#endif // test504

#ifdef test505
#include <iostream>
#include <stack>

using namespace std;

stack<int> pushStack;
stack<int> popStack;

void pop()
{
	if (popStack.empty() && pushStack.empty())
		return;
	if (!popStack.empty()) {
		popStack.pop();
	}
	else {
		int tmp;
		while (!pushStack.empty()) {
			tmp = pushStack.top();
			pushStack.pop();
			popStack.push(tmp);
		}
		popStack.pop();
	}
}
void push(int x)
{
	pushStack.push(x);
}
int peek()
{
	int ans = -1;
	int tmp;
	if (popStack.empty() && pushStack.empty())
		return ans;
	if (popStack.empty()) {
		while (!pushStack.empty()) {
			tmp = pushStack.top();
			pushStack.pop();
			popStack.push(tmp);
		}
	}
	ans = popStack.top();
	return ans;
}

int main()
{
	push(1);
	push(2);
	push(3);
	cout << peek() << endl;
	pop();
	cout << peek() << endl;
	pop();
	cout << peek() << endl;
	pop();
	cout << peek() << endl;

	return 0;
}

#endif // test505

#ifdef test506
#include <iostream>
#include <stack>
using namespace std;


int getAndRemoveLastOne(stack<int>& dataStack)
{
	int result = dataStack.top();
	dataStack.pop();
	if (dataStack.empty())
		return result;
	int last = getAndRemoveLastOne(dataStack);
	dataStack.push(result);
	return last;
}

void reverse(stack<int>& dataStack)
{
	if (dataStack.empty()) return;
	int tmp = getAndRemoveLastOne(dataStack);
	reverse(dataStack);
	dataStack.push(tmp);
}
void output(stack<int> dataStack)
{
	while (!dataStack.empty())
	{
		cout << dataStack.top() << endl;
		dataStack.pop();
	}
}
int main()
{
	stack<int> dataStack;
	dataStack.push(3);
	dataStack.push(2);
	dataStack.push(1);
	reverse(dataStack);
	output(dataStack);

	return 0;
}

#endif // test506

#ifdef test507
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> spiltString(string ss, string param)
{
	ss += param;
	vector<string> ans;
	int pos = ss.find(param);
	int size = ss.length();

	while (pos != string::npos) {
		string substr = ss.substr(0, pos);
		ans.push_back(substr);
		ss = ss.substr(pos + 1, size);
		pos = ss.find(param);
	}
	return ans;
}

#endif // test507

#ifdef test508

#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Pet {
public:
	Pet(string pet) :type(pet) {}
	string getType()
	{
		return type;
	}
	virtual string getName() = 0;
private:
	string type;
};
class Dog :public Pet {
public:
	Dog(string ss) :Pet("Dog"), name(ss) {}
	virtual string getName()
	{
		return this->name;
	}
private:
	string name;
};
class Cat :public Pet {
public:
	Cat(string ss) :Pet("Cat"), name(ss) {}
	virtual string getName()
	{
		return this->name;
	}
private:
	string name;
};
class PetEntranceQueue {
public:
	PetEntranceQueue(Pet* p, int cnt)
	{
		this->pet = p;
		count = cnt;
	}
	Pet* getPet()
	{
		return this->pet;
	}
	int getCount()
	{
		return this->count;
	}
private:
	int count = 0;
	Pet* pet;
};
class CatAndDogQueue {
public:
	static CatAndDogQueue& getInstance() {
		static CatAndDogQueue instance;
		return instance;
	}

public:
	void add(Pet* pet)
	{
		if (pet->getType() == "Dog") {
			PetEntranceQueue* p = new PetEntranceQueue(pet, this->count++);
			dogQue.push(p);
		}
		else if (pet->getType() == "Cat") {
			PetEntranceQueue* p = new PetEntranceQueue(pet, this->count++);
			catQue.push(p);
		}
	}
	vector<Pet*> pollCat()
	{
		vector<Pet*> v;
		while (!catQue.empty())
		{
			PetEntranceQueue* p = catQue.front();
			catQue.pop();
			v.push_back(p->getPet());
		}
		return v;
	}
	vector<Pet*> pollDog()
	{
		vector<Pet*> v;
		while (!dogQue.empty())
		{
			PetEntranceQueue* p = dogQue.front();
			dogQue.pop();
			v.push_back(p->getPet());
		}
		return v;
	}
	vector<Pet*> pollAll()
	{
		vector<Pet*> v;
		while (!dogQue.empty() || !catQue.empty())
		{
			if (!dogQue.empty() && !catQue.empty()) {
				PetEntranceQueue* dog = dogQue.front();
				PetEntranceQueue* cat = catQue.front();
				if (dog->getCount() > cat->getCount()) {
					v.push_back(cat->getPet());
					catQue.pop();
				}
				else {
					v.push_back(dog->getPet());
					dogQue.pop();
				}
			}
			else if (!dogQue.empty()) {
				PetEntranceQueue* dog = dogQue.front();
				v.push_back(dog->getPet());
				dogQue.pop();
			}
			else if (!catQue.empty()) {
				PetEntranceQueue* cat = catQue.front();
				v.push_back(cat->getPet());
				catQue.pop();
			}
		}
		return v;
	}

	bool isDogQueEmpty() {
		return dogQue.empty();
	}
	bool isCatQueEmpty() {
		return catQue.empty();
	}
private:
	CatAndDogQueue() {}
	queue<PetEntranceQueue*> dogQue;
	queue<PetEntranceQueue*> catQue;
	int count = 0;
};

int main()
{
	Cat* cat1 = new Cat("cat1");
	Cat* cat2 = new Cat("cat2");
	Dog* dog1 = new Dog("dog1");
	Dog* dog2 = new Dog("dog2");

	CatAndDogQueue::getInstance().add(cat1);
	CatAndDogQueue::getInstance().add(dog1);
	CatAndDogQueue::getInstance().add(cat2);
	CatAndDogQueue::getInstance().add(dog2);

	cout << CatAndDogQueue::getInstance().isCatQueEmpty() << endl;
	cout << CatAndDogQueue::getInstance().isDogQueEmpty() << endl;

	//vector<Pet*> all = CatAndDogQueue::getInstance().pollAll();
	vector<Pet*> cat = CatAndDogQueue::getInstance().pollCat();
	vector<Pet*> dog = CatAndDogQueue::getInstance().pollDog();

	/*for (int i = 0; i < all.size(); i++) {
		cout << all[i]->getName() << endl;
	}*/
	for (int i = 0; i < cat.size(); i++) {
		cout << cat[i]->getName() << endl;
	}
	for (int i = 0; i < dog.size(); i++) {
		cout << dog[i]->getName() << endl;
	}

	cout << CatAndDogQueue::getInstance().isCatQueEmpty() << endl;
	cout << CatAndDogQueue::getInstance().isDogQueEmpty() << endl;
	return 0;
}

#endif // test508

#ifdef test005
/*#include <list>
#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	list<int> l;
	int tmp;
	while (n--) {
		cin >> tmp;
		l.push_back(tmp);
	}
	list<int>::iterator it = l.begin();
	for (int i = 0; i < k - 1; i++) {
		it++;
	}
	l.erase(it);
	for (auto it : l) {
		cout << it << " ";
	}
	cout << endl;
}*/
/*#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;

int main()
{
	string ss;
	int k;
	cin >> ss >> k;

	priority_queue<string,vector<string>> q;
	unordered_map<string, int> uniqueFlag;
	int size = ss.length();
	string substr;
	int flag = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 1; j <= size - i; j++) {
			substr = ss.substr(i, j);
			if (uniqueFlag[substr] == 0) {
				uniqueFlag[substr] = 1;
				if (flag++ < 5) {

					q.push(substr);
				}
				else {
					if (substr < q.top()) {
						q.pop();
						q.push(substr);
					}
				}
			}
		}
	}
	int cnt = 0;
	while (!q.empty() && (cnt++ < 5-k)) {
		q.pop();
	}
	string s = q.top();
	cout << s << endl;

	return 0;
}*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int finds(int temp)
{
	int sum = 0;
	while (temp != 0) {
		int b = temp % 10;
		temp /= 10;
		sum += b;
	}
	return sum;
}
int findMax(int num)
{
	int tmp = -1;
	int tmp2;
	for (int i = 0; i <= num / 2; i++) {
		tmp2 = finds(i) + finds(num - i);
		tmp = max(tmp2, tmp);
	}
	return tmp;
}
int main()
{
	int T;
	cin >> T;
	int num;
	while (T--) {
		cin >> num;
		cout << findMax(num) << endl;
	}

	return 0;
}

/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(),v.end(), greater<int>());
	int ans = 0;
	while (v.size() != 0) {
		int tmp = v.back();
		v.pop_back();
		ans += tmp;
		for (int i = 0; i < v.size(); i++) {
			v[i] -= tmp;
		}
		while (v.size() > 0 && v.back() == 0) {
			v.pop_back();
		}
	}
	cout << min(ans, n) << endl;
}*/

/*#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int findMin(string ss)
{
	int size = ss.length();
	vector<vector<int>> v(size, vector<int>(size, 0));
	vector<int> dp(size, 99999);
	int tmp = 99999999;
	int i, j;
	for (i = 0; i < size; i++)
		v[i][i] = 1;
	for (i = 0; i < size; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (ss[i] == ss[j]) {
				if (i - j > 1) {
					v[j][i] = v[j + 1][i - 1];
				}
				else {
					v[j][i] = 1;
				}
			}
		}
	}
	for (i = 0; i < size; i++) {
		if (v[0][i] == 1)
			dp[i] = 1;
	}
	for (i = 0; i < size; i++) {
		tmp = 99999999;
		for (j = i; j >= 1; j--) {
			if (v[j][i] == 1) {
				tmp = min(tmp, dp[j - 1] + 1);
			}
		}
		dp[i] = min(dp[i], tmp);
	}
	return dp[size - 1];
}
int main()
{
	string ss;
	int Q;
	int start, end;
	cin >> ss >> Q;
	while (Q--) {
		cin >> start >> end;
		string substr = ss.substr(start - 1, end - start + 1);
		cout << findMin(substr) << endl;
	}
	return 0;
}*/
#endif // test005

#ifdef test509
#include <iostream>
#include <vector>

using namespace std;
int getMedian3(vector<int>& v, int left, int right)
{
	int center = (left + right) / 2;
	if (v[left] > v[center])
		swap(v[left], v[center]);
	if (v[left] > v[right])
		swap(v[left], v[right]);
	if (v[center] > v[right])
		swap(v[center], v[right]);
	swap(v[center], v[right - 1]);
	return v[right - 1];
}
void quicksort(vector<int>& v, int left, int right, int& index)
{
	if (left >= right)
		return;
	int med = getMedian3(v, left, right);
	int i = left, j = right - 1;
	for (;;) {
		while (v[++i] < med) {}
		while (v[--j] > med) {}
		if (i < j)
			swap(v[i], v[j]);
		else
			break;
	}
	swap(v[i], v[right - 1]);
	if (i == index - 1) {
		index = v[i];
		return;
	}

	quicksort(v, left, i - 1, index);
	quicksort(v, i + 1, right, index);
}

void quickSort(vector<int>& v, int& index)
{
	quicksort(v, 0, v.size() - 1, index);
}
int main()
{
	int N, k;
	cin >> N >> k;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	quickSort(v, k);
	cout << k << endl;

	return 0;
}

#endif // test509

#ifdef test510
#include <stack>
#include <iostream>

using namespace std;

int main()
{
	stack<int> s;
	stack<int> help;
	int N;
	int tmp;
	cin >> N;
	while (N--) {
		cin >> tmp;
		s.push(tmp);
	}
	while (!s.empty()) {
		int num = s.top();
		s.pop();
		if (help.empty() || help.top() >= num) {
			help.push(num);
		}
		else {
			while (!help.empty()) {
				s.push(help.top());
				help.pop();
			}
			help.push(num);
		}
	}
	while (!help.empty()) {
		s.push(help.top());
		help.pop();
	}
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}
#endif // test510

#ifdef test006
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
/*bool canPlantTrees(vector < int > road, int n) {

	int count = 0;
	for (int i = 0; i < road.size(); ++i)
	{
		if (road[i] == 0 &&
			(i == 0 || road[i - 1] == 0) &&
			(i == road.size() - 1 || road[i + 1] == 0))
		{
			road[i] = 1;
			count++;
		}
		if (count >= n)
			return true;
	}

	return false;

}*/
/******************************结束写代码******************************/

/*
int main() {
	bool res;

	int _road_size = 0;
	cin >> _road_size;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	vector<int> _road;
	int _road_item;
	for (int _road_i = 0; _road_i < _road_size; _road_i++) {
		cin >> _road_item;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		_road.push_back(_road_item);
	}


	int _n;
	cin >> _n;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



	res = canPlantTrees(_road, _n);
	cout << res << endl;

	return 0;

}*/
/*
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isPerfect(int x, int y)
{
	int r = sqrt(x + y);
	return r * r == x + y;
}

	int dfs(unordered_map<int, int>& count, unordered_map<int, vector<int>>& graph, int x, int todo)
	{
		count[x]--;
		int ans = 1;
		if (todo != 0) {
			ans = 0;
			for (auto y : graph[x]) {
				if (count[y]!=0) {
					ans += dfs(count, graph, y, todo - 1);
				}
			}
		}
		count[x]++;
		return ans;
	}

	int perfectArrayNum(vector<int> A)
	{
		int N = A.size();
		unordered_map<int,int> count;
		unordered_map<int,vector<int>> graph;
		for (int i = 0; i < N; i++) {
			count[A[i]]++;
		}
		for (auto it1 : count)
		{
			for (auto it2 : count) {
				if (isPerfect(it1.first, it2.first)) {
					graph[it1.first].push_back(it2.first);
				}
			}
		}
		int ans = 0;
		for (auto it : count) {
			ans += dfs(count, graph, it.first, N - 1);
		}
		return ans;
	}
	int main() {
		int res;

		int _array_size = 0;
		cin >> _array_size;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		vector<int> _array;
		int _array_item;
		for (int _array_i = 0; _array_i < _array_size; _array_i++) {
			cin >> _array_item;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			_array.push_back(_array_item);
		}



		res = perfectArrayNum(_array);
		cout << res << endl;

		return 0;

	}*/
#endif // test006

#ifdef test511
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
	int N, w;//数组大小  窗口大小
	cin >> N >> w;
	vector<int> v(N, 0);
	vector<int> ans;
	deque<int> deq;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < v.size(); i++) {
		while (!deq.empty() && v[deq.back()] <= v[i]) {
			deq.pop_back();
		}
		deq.push_back(i);

		if (deq.front() == i - w)
			deq.pop_front();
		if (i >= w - 1)
			ans.push_back(v[deq.front()]);
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}

#endif // test511

#ifdef test512
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int getMaxRect(vector<int>& height)
{
	int maxAns = -1;
	stack<int> s;
	for (int i = 0; i < height.size(); i++) {
		while (!s.empty() && height[s.top()] >= height[i]) {
			int j = s.top();
			s.pop();
			int k = s.empty() ? -1 : s.top();
			maxAns = max(maxAns, (i - k - 1)*height[j]);
		}
		s.push(i);
	}
	while (!s.empty()) {
		int j = s.top();
		s.pop();
		int k = s.empty() ? -1 : s.top();
		maxAns = max(maxAns, (int)((height.size() - k - 1)*height[j]));
	}
	return maxAns;
}

int getMaxRect(vector<vector<int>>& v)
{
	vector<int> height(v[0].size());
	int maxAns = -1;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			height[j] = v[i][j] == 0 ? 0 : height[j] + 1;
		}
		maxAns = max(maxAns, getMaxRect(height));
	}
	return maxAns;
}

int main()
{
	int N, M;
	cin >> N >> M;
	vector<vector<int>> v(N, vector<int>(M, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> v[i][j];
		}
	}
	cout << getMaxRect(v) << endl;
	return 0;
}


#endif // test512

#ifdef test600
#include <iostream>
#include <stack>

struct Node {
	int value;
	Node* next;
	Node(int v) :value(v), next(nullptr) {}
};

using namespace std;

//O(N)空间
bool isPalin(Node* head)
{
	Node* cur = head;
	stack<int> s;
	while (cur != nullptr) {
		s.push(cur->value);
		cur = cur->next;
	}
	while (!s.empty()) {
		int value = s.top();
		if (value != head->value)
			break;
		s.pop();
		head = head->next;
	}
	return s.size() == 0;
}

int main()
{
	Node* head = new Node(1);
	Node* n2 = new Node(1);
	Node* n3 = new Node(2);
	Node* n4 = new Node(1);
	Node* n5 = new Node(1);

	head->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;

	cout << isPalin(head) << endl;

}

#endif // test600

#ifdef test601
#include <iostream>
#include <vector>
#include <algorithm>
//#include <Windows.h>

struct Node {
	int value;
	Node* next;
	Node(int v) :value(v), next(nullptr) {}
};

using namespace std;

//无顺序要求
/*Node* sortNode(Node* head, int pivot)
{
	vector<Node*> v;
	while (head != nullptr)
	{
		v.push_back(head);
		head = head->next;
	}
	int small = -1;
	int big = v.size();
	int i = 0;
	while (i != big) {
		if (v[i]->value < pivot) {
			swap(v[i], v[++small]);
			i++;
		}
		else if (v[i]->value == pivot) {
			i++;
		}
		else {
			swap(v[i], v[--big]);
		}
	}
	for (int i = 0; i < v.size()-1; i++) {
		v[i]->next = v[i + 1];
	}
	v[v.size() - 1]->next = nullptr;
	return v[0];
}*/

//要求排序后的链表保持稳定性
Node* sortNodeStable(Node* head, int pivot)
{
	Node* small = nullptr;
	Node* equal = nullptr;
	Node* big = nullptr;
	Node* small2 = nullptr;
	Node* equal2 = nullptr;
	Node* big2 = nullptr;
	while (head != nullptr) {
		if (head->value < pivot) {
			if (small == nullptr) {
				small = head;
				small2 = small;
			}
			else {
				small->next = head;
				small = small->next;
			}
		}
		else if (head->value == pivot) {
			if (equal == nullptr) {
				equal = head;
				equal2 = equal;
			}
			else {
				equal->next = head;
				equal = equal->next;
			}
		}
		else {
			if (big == nullptr) {
				big = head;
				big2 = big;
			}
			else {
				big->next = head;
				big = big->next;
			}
		}
		head = head->next;
	}

	if (small2 != nullptr) {
		small->next = equal2;
		if (equal == nullptr)
			equal = small;
	}
	if (equal != nullptr) {
		equal->next = big2;
		if (big != nullptr)
			big->next = nullptr;
	}

	return small2 != nullptr ? small2 : equal2 != nullptr ? equal2 : big2;
}

int main()
{
	Node* head = new Node(7);
	Node* n2 = new Node(9);
	Node* n3 = new Node(1);
	Node* n4 = new Node(8);
	Node* n5 = new Node(5);
	Node* n6 = new Node(2);
	Node* n7 = new Node(5);


	head->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;

	//Node* cur = sortNode(head, 3);
	Node* cur = sortNodeStable(head, 3);
	while (cur != nullptr) {
		cout << cur->value << endl;
		cur = cur->next;
	}

}

#endif // test601

#ifdef test602
#include <iostream>
#include <vector>
#include <algorithm>

struct Node {
	int value;
	Node* next;
	Node(int v) :value(v), next(nullptr) {}
};

using namespace std;

Node* deleteK(Node* head, int k)
{
	int cnt = 0;
	Node* cur = head;
	Node* last = head;
	while (cur != nullptr) {
		cur = cur->next;
		if (cnt++ == k) {
			break;
		}
	}
	while (cur != nullptr) {
		cur = cur->next;
		last = last->next;
	}
	last->next = last->next->next;

	return head;
}
int main()
{
	Node* head = new Node(1);
	Node* n2 = new Node(2);
	Node* n3 = new Node(3);
	Node* n4 = new Node(4);
	Node* n5 = new Node(5);
	Node* n6 = new Node(6);
	Node* n7 = new Node(7);


	head->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;

	Node* cur = deleteK(head, 3);
	while (cur != nullptr) {
		cout << cur->value << endl;
		cur = cur->next;
	}
	return 0;
}

#endif // test602

//十字斩
#ifdef test603
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(void)
{
	int n;
	while (cin >> n) {
		vector<int> row(n, 0);
		vector<int> col(n, 0);
		vector<vector<int>> a(n, vector<int>(n, 0));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				scanf("%d", &a[i][j]);
				row[i] += a[i][j];
				col[j] += a[i][j];
			}
		}

		for (; n >= 1; n--) {
			if (n == 1) { printf("%d %d\n", 1, 1); break; }

			int r = -1, c = -1, s = -1;
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {
					if (row[i] + col[j] - a[i][j] > s) {
						s = row[i] + col[j] - a[i][j];
						r = i;
						c = j;
					}
				}
			}
			printf("%d %d\n", r + 1, c + 1);

			for (int j = 0; j < n; ++j) col[j] -= a[r][j];
			for (int i = 0; i < n; ++i) row[i] -= a[i][c];

			row.erase(row.begin() + r);
			col.erase(col.begin() + c);
			for (int i = 0; i < n; ++i) a[i].erase(a[i].begin() + c);
			a.erase(a.begin() + r);

		}
	}
	return 0;
}
#endif // test603

//根据数组构建最大树
#ifdef test604
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <queue>

using namespace std;

struct TreeNode
{
	int value;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int v) :value(v), left(nullptr), right(nullptr) {}
};

void popStackAndPutMap(stack<TreeNode*>& s, unordered_map<TreeNode*, TreeNode*>& map)
{
	TreeNode* t = s.top();
	s.pop();
	if (s.empty()) {
		map[t] = nullptr;
	}
	else {
		map[t] = s.top();
	}
}
TreeNode* getMaxTree(vector<TreeNode*> v)
{
	//get lBigMap and rBigMap
	unordered_map<TreeNode*, TreeNode*> lBigMap;
	stack<TreeNode*> s;
	for (int i = 0; i < v.size(); i++) {
		TreeNode* curNode = v[i];
		while (!s.empty() && s.top()->value < curNode->value) {
			popStackAndPutMap(s, lBigMap);
		}
		s.push(curNode);
	}
	while (!s.empty()) {
		popStackAndPutMap(s, lBigMap);
	}
	unordered_map<TreeNode*, TreeNode*> rBigMap;
	for (int i = v.size() - 1; i >= 0; i--) {
		TreeNode* curNode = v[i];
		while (!s.empty() && s.top()->value < curNode->value) {
			popStackAndPutMap(s, rBigMap);
		}
		s.push(curNode);
	}
	while (!s.empty()) {
		popStackAndPutMap(s, rBigMap);
	}
	//get maxTree
	TreeNode* head;
	for (int i = 0; i < v.size(); i++) {
		TreeNode* curNode = v[i];
		TreeNode* leftBig = lBigMap[curNode];
		TreeNode* rightBig = rBigMap[curNode];

		if (leftBig == nullptr&&rightBig == nullptr) {
			head = curNode;
		}
		else if (leftBig == nullptr) {
			if (rightBig->left == nullptr) {
				rightBig->left = curNode;
			}
			else {
				rightBig->right = curNode;
			}
		}
		else if (rightBig == nullptr) {
			if (leftBig->left == nullptr) {
				leftBig->left = curNode;
			}
			else {
				leftBig->right = curNode;
			}
		}
		else {
			TreeNode* maxBig = leftBig->value > rightBig->value ? leftBig : rightBig;
			if (maxBig->left == nullptr) {
				maxBig->left = curNode;
			}
			else {
				maxBig->right = curNode;
			}
		}
	}
	return head;
}
void levelGetTree(TreeNode* head, vector<vector<int>>& ans)
{
	if (head == nullptr) return;
	queue<TreeNode*> q;
	q.push(head);
	while (!q.empty())
	{
		int len = q.size();
		vector<int> _ans;
		for (int i = 0; i < len; i++) {
			TreeNode* cur = q.front();
			_ans.push_back(cur->value);
			q.pop();
			if (cur->left != nullptr) q.push(cur->left);
			if (cur->right != nullptr) q.push(cur->right);
		}
		ans.push_back(_ans);
	}
}

int main()
{
	int N;
	cin >> N;
	vector<TreeNode*> v(N);
	int value;
	for (int i = 0; i < N; i++) {
		cin >> value;
		TreeNode* t = new TreeNode(value);
		v[i] = t;
	}
	TreeNode* maxNode = getMaxTree(v);
	vector<vector<int>> ans;
	levelGetTree(maxNode, ans);
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}


#endif // test604

#ifdef test513
#include <iostream>
#include <unordered_map>

using namespace std;

struct Node {
	int value;
	Node* next;
	Node* rand;
	Node(int v):value(v),next(nullptr),rand(nullptr){}
};

//时间复杂度O(N) 空间复杂度O(N)
Node* copy(Node* head)
{
	unordered_map<Node*, Node*> umap;
	Node* cur = head;
	while (cur != nullptr) {
		umap[cur] = new Node(cur->value);
		cur = cur->next;
	}
	cur = head;
	while (cur != nullptr) {
		umap[cur]->next = umap[cur->next];
		umap[cur]->rand = umap[cur->rand];
		cur = cur->next;
	}
	return umap[head];
}
//时间复杂度O(N) 空间复杂度O(1)
Node* copy2(Node* head)
{
	//生成新链表
	Node* cur = head;
	while (cur != nullptr)
	{
		Node* copyNode = new Node(cur->value);
		Node* next = cur->next;
		cur->next = copyNode;
		copyNode->next = next;
		cur = cur->next->next;
	}
	//链表设置rand指针
	cur = head;
	int cnt = 1;
	Node* randNode = nullptr;
	while (cur != nullptr)
	{
		if (cnt++ % 2 == 0) {
			cur->rand = randNode;
		} else{
			randNode = cur->rand->next;
		}
		cur = cur->next;
	}
	//链表分离
	cur = head;
	Node* ans = new Node(-1);
	Node* res = ans;
	while (cur != nullptr) {
		ans->next = cur->next;
		ans = ans->next;
		cur->next = ans->next;
		cur = cur->next;
	}
	return res->next;
}
int main()
{
	Node* head = new Node(1);
	Node* n2 = new Node(2);
	Node* n3 = new Node(3);
	Node* n4 = new Node(4);
	Node* n5 = new Node(5);

	head->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;

	head->rand = n3;
	n2->rand = n2;
	n3->rand = head;
	n4->rand = n5;
	n5->rand = n4;

	Node* cur = head;
	while (cur != nullptr)
	{
		cout << cur->value << "|" << cur->rand->value << endl;
		cur = cur->next;
	}
	cout << "**********************" << endl;
	Node* newHead = copy2(head);
	//Node* newHead = copy(head);
	while (newHead != nullptr)
	{
		cout << newHead->value << "|" << newHead->rand->value << endl;
		newHead = newHead->next;
	}

	return 0;
}

#endif // test513

//9->3->7 +  6->3 = 937+63=1000
#ifdef test514
#include <iostream>
#include <stack>
using namespace std;

struct Node {
	int value;
	Node* next;
	Node(int v) :value(v), next(nullptr) {}
};
Node* addList(Node* head1, Node* head2)
{
	stack<Node*> s1;
	stack<Node*> s2;
	while (head1 != nullptr) {
		s1.push(head1);
		head1 = head1->next;
	}
	while (head2 != nullptr) {
		s2.push(head2);
		head2 = head2->next;
	}
	Node* ans = nullptr;
	int tmp = 0;
	while (!s1.empty() && !s2.empty())
	{
		Node* num1 = s1.top();
		Node* num2 = s2.top();
		s1.pop();
		s2.pop();
		int num = (num1->value + num2->value + tmp) % 10;
		tmp = (num1->value + num2->value + tmp) / 10;
		Node* curNum = new Node(num);
		if (ans == nullptr ) {
			ans = curNum;
		}
		else {
			curNum->next = ans;
			ans = curNum;
		}
	}
	while (!s1.empty()) {
		Node* num1 = s1.top();
		s1.pop();
		int num = (num1->value + tmp) % 10;
		tmp = (num1->value + tmp) / 10;
		Node* curNum = new Node(num);
		curNum->next = ans;
		ans = curNum;
	}
	while (!s2.empty()) {
		Node* num1 = s2.top();
		s2.pop();
		int num = (num1->value + tmp) % 10;
		tmp = (num1->value + tmp) / 10;
		Node* curNum = new Node(num);
		curNum->next = ans;
		ans = curNum;
	}
	if (tmp != 0) {
		Node* curNum = new Node(tmp);
		curNum->next = ans;
		ans = curNum;
	}
	return ans;
}

int main()
{
	Node* head1 = new Node(9);
	Node* n2 = new Node(3);
	Node* n3 = new Node(7);
	Node* n4 = new Node(7);
	head1->next = n2;
	n2->next = n3;
	n3->next = n4;

	Node* head2 = new Node(6);
	Node* n22 = new Node(3);
	head2->next = n22;

	Node* newHead = addList(head1, head2);
	while (newHead != nullptr)
	{
		cout << newHead->value << endl;
		newHead = newHead->next;
	}

	return 0;
}

#endif // test514










