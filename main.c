/*
    Ctrl+D可复制当前行或选中块。
    Ctrl+Shift+C注释掉当前行或选中块  Ctrl+Shift+X则解除注释。
    Tab缩进当前行或选中块,Shift+Tab减少缩进。
    需要更大编辑空间时，F2和Shift+F2分别可以显隐下方Logs & others栏和左方的Management栏。

*/
#include <stdio.h>
#include <stdlib.h>

//1.easy question of from 1 to 100 add daoshu!
//int main()
//{
//    float sum, i;
//    sum = 0;
//    for(i=1;i<=100;i++)
//    {
//        sum += 1/i;
//    }
//    printf("%f", sum);
//
//    return 0;
//}

//2.question of whether a year is a leap year or not!
//((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)
//int main()
//{
//    int year;
//    scanf("%d", &year);
//    if(year%4 == 0)
//    {
//        if(year%400 == 0 || year%100 != 0)
//            printf("%d is a leap year!\n", year);
//        else
//            printf("%d is not a leap year!\n", year);
//    }
//    else
//
//            printf("%d is not a leap year!\n", year);
//
//    return 0;
//}

//3.question of a num is a prime number or not!
//#include <math.h>
//int main ()
//{
//    int N;
//    int i, p;
//    p = 0;
//    printf("Please input a number which is big than 0!\n");
//    scanf("%d", &N);
////    for(i = 2;i<N;i++) //when N is 6,i is 2 is the same case when i is 3.
////    {
////        if(N%i == 0)
////        {
////            p = 1;
////            break;
////        }
////    }
//    for(i = 2; i<=sqrt(N);i++)
//    {
//        if(N%i == 0)
//        {
//            p =1;
//            break;
//        }
//    }
//    if(p == 0)
//        printf("%d is a prime number!\n", N);
//    else
//        printf("%d is not a prime number!\n", N);
//
//    return 0;
//
//}

////4.Printf的输出格式
//int main()
//{
//  int i;
//  float x;
//  i = 40;
//  x = 839.21;
//  printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
//  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
//  return 0;
//}

////5.辗转相除求最大公约数
//int main()
//{
//    int m, n;
//    int r = 1;
//    scanf("%d%d", &m, &n);
//    while(r!=0)
//    {
//        r = m%n;
//        m = n;
//        n = r;
//    }
//    printf("%d", m);
//
//    return 0;
//}


////6.倒计时
//#include <windows.h>
//int main()
//{
//    int i;
//    for (i=10; i>=0; i--)
//    {
//      printf("\a\t\t\t\t\t%d\t\r", i);
//      Sleep(1000);
//    }
//    return 0;
//}


////7.牛顿法求平方根  //未解
//#include <math.h>
//double sqr(double n)
//{
//    double k = 1.0;
//    while(fabs(k*k-n)>1e-9)
//    {
//        k = (k+n/k) / 2;
//    }
//    return k
//}
//
//int main()
//{
//
//}


////8.Determines the length of a message!
//int main()
//{
//    int len = 0;
//    printf("Enter a message: ");
//    while(getchar() != '\n')
//        len++;
//    printf("Your message was %d character(s) long.\n", len);
//
//    return 0;
//}


////9.查看数中重复的数字出现的次数。
//int main()
//{
//    int digit_seen[10] = {0};
//    int digit, i;
//    long n;
//
//    printf("Enter a number: ");
//    scanf("%ld", &n);
//
//    while(n>0)
//    {
//        digit = n%10;
//        digit_seen[digit]++;
//        n /= 10;
//    }
//
//    for(i = 0; i< 10; i++)
//    {
//        printf("%d  %d\n", i, digit_seen[i]);
//    }
//
//    return 0;
//}

//
////10.n*n幻方
////起始把数1放在0行的中间，剩下的数依次向上移动一行并且向右移动一列，当可能越过数组边界时需要绕回到数组的另一端。
////如果某个特定的数组元素已经被占，那就把该数存储在前一个数的正下方。
//int main()
//{
//    int n, i ,k, l, j;
//    printf("Enter the size of this magic square: ");
//    scanf("%d", &n);
//
//    int magic_square[n][n];
//    for(i=0;i<n;i++)
//        for(j=0;j<n;j++)
//        magic_square[i][j] = 0;
//    k = n/2;
//    l = 0;
//    magic_square[l][k] = 1;
//    for(i = 2; i<=n*n; i++)
//    {
//        int l1, k1;
//        l1 = l;
//        k1 = k;
//        l = l - 1;
//        k = k + 1;
//
//        if(l == -1)
//            l = n - 1;
//        else if(k == n)
//            k = 0;
//
//        if(magic_square[l][k] != 0)
//        {
//            l = l1+1;
//            k = k1;
//            if(l == n)
//                l = 0;
//        }
//        magic_square[l][k] = i;
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            printf("%d ", magic_square[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//
////11.判断是否为prime. 使用函数。
//#include <stdbool.h>
//
//bool is_prime(int n)
//{
//    int divisor; //因子
//
//    if(n<=1)
//        return false;
//    for(divisor = 2; divisor*divisor <=n; divisor++)
//        if(n % divisor == 0)
//            return false;
//    return true;
//}
//
//int main()
//{
//    int n;
//
//    printf("Please enter a number: ");
//    scanf("%d", &n);
//    if(is_prime(n))
//        printf("%d is a prime!", n);
//    else
//        printf("%d is not a prime!", n);
//
//    return 0;
//}


//
////12.Sorts an array using Quicksort algorithm.
//#define N 10
//
//void quicksort(int a[], int low, int high);
//int split(int a[], int low, int high);
//
//int main(void)
//{
//    int a[N], i;
//
//    printf("Enter %d number to be sorted: ", N);
//    for(i=0;i<N;i++)
//        scanf("%d", &a[i]);
//
//    quicksort(a, 0, N-1);
//    printf("In sorted order: ");
//    for(i=0;i<N;i++)
//        printf("%d ", a[i]);
//    printf("\n");
//
//    return 0;
//}
//
//int split(int a[], int low, int high)
//{
//    int part_element = a[low];
//    for(;;)
//    {
//        while(low<high && part_element <= a[high])
//            high--;
//        if(low >= high)
//            break;
//        a[low++] = a[high];
//
//        while(low<high && part_element >= a[low])
//            low++;
//        if(low>=high)
//            break;
//        a[high--] = a[low];
//    }
//    a[high] = part_element;
//    return high;
//}
//
//void quicksort(int a[], int low, int high)
//{
//    int middle;
//
//    if(low >= high)
//        return;
//    middle = split(a, low, high);
//    quicksort(a, low, middle-1);
//    quicksort(a, middle+1, high);
//}



////13.guess a number
//#include <time.h>
//
//#define MAX_NUMBER 100
//
//int secret_number;
//
//void initializer_number_generator();
//void  choose_new_secret_number();
//void read_guess();
//
//int main()
//{
//    char command;
//    printf("Guess the secret number between 1 and %d.\n", MAX_NUMBER);
//
//    initializer_number_generator();
//    do{
//        choose_new_secret_number();
//        printf("A new number has been chosen.\n");
//        read_guess();
//        printf("Play again?(Y/N)\n");
//        scanf(" %c", &command);  //没有这个空格，程序直接终止。 原因是上行转下行的换行符'\n'被字符command识别，所以才导致这样的情况。
//    }while(command == 'y' || command == 'Y');
//    return 0;
//}
//
//void initializer_number_generator()
//{
//    srand((unsigned)time(NULL));
//}
//
//void choose_new_secret_number()
//{
//    secret_number = rand() % MAX_NUMBER + 1;
//}
//
//void read_guess()
//{
//    int guess, num_guess = 0;
//    for(;;)
//    {
//        num_guess++;
//        printf("Enter guess: \n");
//        scanf("%d", &guess);
//        if(guess == secret_number)
//        {
//            printf("you won in %d guesses!\n\n", num_guess);
//            return;
//        }
//        if(guess<secret_number)
//            printf("too low; try again!");
//        if(guess>secret_number)
//            printf("too high; try again!");
//    }
//}

//
////14.Classifies a poker hand!
//
//#include <stdbool.h>
//
//#define NUM_RANKS 13
//#define NUM_SUITS 4
//#define NUM_CARDS 5
//
////int num_in_rank[NUM_RANKS];
////int num_in_suit[NUM_SUITS];
////bool straight, flush, four, three;
////int pairs;
//
//void read_cards(int num_in_rank[], int num_in_suit[]);
//void analyze_hand(bool *straight, bool *flush, bool *four, bool *three, int *pairs, int num_in_rank[], int num_in_suit[]);
//void print_result(bool straight, bool flush, bool four, bool three, int pairs);
//
//int main(void)
//{
//    int num_in_rank[NUM_RANKS];
//    int num_in_suit[NUM_SUITS];
//    bool straight, flush, four, three;
//    //straight = flush = four = three = false;
//    int pairs;
//    for(;;)
//    {
//        read_cards(num_in_rank, num_in_suit);
//        analyze_hand(&straight, &flush, &four, &three, &pairs, num_in_rank, num_in_suit);
//        print_result(straight, flush, four, three, pairs);
//    }
//    //return 0;
//}
//
//void read_cards(int num_in_rank[], int num_in_suit[])
//{
//    bool card_exists[NUM_RANKS][NUM_SUITS];
//    char ch, rank_ch, suit_ch;
//    int rank, suit;
//    bool bad_card;
//    int cards_read = 0;
//
//    for(rank = 0;rank<NUM_RANKS;rank++)
//    {
//        num_in_rank[rank] = 0;
//        for(suit = 0;suit<NUM_SUITS;suit++)
//            card_exists[rank][suit] = false;
//    }
//    for(suit = 0;suit<NUM_SUITS;suit++)
//        num_in_suit[suit] = 0;
//
//    while(cards_read < NUM_CARDS)
//    {
//        bad_card = false;
//
//        printf("Enter a card: ");
//
//        rank_ch = getchar();
//        switch(rank_ch)
//        {
//        case '0':
//            exit(EXIT_SUCCESS);
//        case '2':
//            rank = 0;
//            break;
//        case '3':
//            rank = 1;
//            break;
//        case '4':
//            rank = 2;
//            break;
//        case '5':
//            rank = 3;
//            break;
//        case '6':
//            rank = 4;
//            break;
//        case '7':
//            rank = 5;
//            break;
//        case '8':
//            rank = 6;
//            break;
//        case '9':
//            rank = 7;
//            break;
//        case 't': case 'T':
//            rank = 8;
//            break;
//        case 'j': case 'J':
//            rank = 9;
//            break;
//        case 'q': case 'Q':
//            rank = 10;
//            break;
//        case 'k': case 'K':
//            rank = 11;
//            break;
//        case 'a': case 'A':
//            rank = 12;
//            break;
//        default:
//            bad_card = true;
//        }
//
//        suit_ch = getchar();
//        switch(suit_ch)
//        {
//        case 'c': case 'C':
//            suit = 0;
//            break;
//        case 'd': case 'D':
//            suit = 1;
//            break;
//        case 'h': case 'H':
//            suit = 2;
//            break;
//        case 's': case 'S':
//            suit = 3;
//            break;
//        default:
//            bad_card = true;
//        }
//
//        while((ch = getchar())!='\n')
//            if(ch != ' ')
//            bad_card = true;   //what mean!.......
//
//        if(bad_card)
//            printf("Bad card;ignored.\n");
//        else if(card_exists[rank][suit])
//            printf("Duplicate card; ignored.\n");
//        else
//        {
//            num_in_rank[rank]++;
//            num_in_suit[suit]++;
//            card_exists[rank][suit] = true;
//            cards_read++;
//        }
//    }
//}
//
//void analyze_hand(bool *straight, bool *flush, bool *four, bool *three, int *pairs, int num_in_rank[], int num_in_suit[])
//{
//    int num_consec = 0;
//    int rank, suit;
//
//    *straight = false;
//    *flush = false;
//    *four = false;
//    *three = false;
//    *pairs = 0;
//
//    for(suit=0;suit<NUM_SUITS;suit++)
//        if(num_in_suit[suit] == NUM_CARDS)
//        *flush = true;
//
//    rank = 0;
//    while(num_in_rank[rank] == 0)
//        rank++;
//    for(;rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
//        num_consec++;
//    if(num_consec == NUM_CARDS)
//        *straight = true;
//
//    for(rank = 0;rank<NUM_RANKS;rank++)
//    {
//        if(num_in_rank[rank] == 4)
//            *four = true;
//        if(num_in_rank[rank] == 3)
//            *three = true;
//        if(num_in_rank[rank] == 2)
//            (*pairs)++;
//    }
//}
//
//void print_result(bool straight, bool flush, bool four, bool three, int pairs)
//{
//    if(straight && flush)
//        printf("Straight flush!\n");
//    else if(four)
//        printf("four!\n");
//    else if(three && pairs == 1)
//        printf("full house\n");
//    else if(flush)
//        printf("Flush!\n");
//    else if(straight)
//        printf("Straight!\n");
//    else if(three)
//        printf("Three!\n");
//    else if(pairs == 2)
//        printf("Two pairs!\n");
//    else if(pairs == 1)
//        printf("Pairs!\n");
//    else
//        printf("High card!\n");
//
//    printf("\n\n");
//}
//
//

#include <string.h>

void main()
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
}

















