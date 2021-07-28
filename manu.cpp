/*
Labyrinth
https://cses.fi/problemset/task/1193
*/
/*
#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<pll> vll; 
typedef vector<ll> vl; 
typedef vector<vl> vvl; 

double EPS=1e-9; 
int INF=1000000005; 
ll INFF=1000000000000000005ll; 
double PI=acos(-1); 
int dirx[8]={ -1, 0, 0, 1, -1, -1, 1, 1 }; 
int diry[8]={ 0, 1, -1, 0, -1, 1, -1, 1 }; 
const ll MOD = 1000000007;

#define DEBUG fprintf(stderr, "====TESTING====\n") 
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl 
#define OUT(x) cout << x << endl 
#define debug(...) fprintf(stderr, __VA_ARGS__) 
#define READ(b) for(auto &(a):b) cin >> a;
#define FOR(a, b, c) for (int(a)=(b); (a) < (c); ++(a)) 
#define FORN(a, b, c) for (int(a)=(b); (a) <= (c); ++(a)) 
#define FORD(a, b, c) for (int(a)=(b); (a) >= (c); --(a)) 
#define FORSQ(a, b, c) for (int(a)=(b); (a) * (a) <= (c); ++(a)) 
#define FORC(a, b, c) for (char(a)=(b); (a) <= (c); ++(a)) 
#define EACH(a, b) for (auto&(a) : (b)) 
#define REP(i, n) FOR(i, 0, n) 
#define REPN(i, n) FORN(i, 1, n) 
#define MAX(a, b) a=max(a, b) 
#define MIN(a, b) a=min(a, b) 
#define SQR(x) ((ll)(x) * (x)) 
#define RESET(a, b) memset(a, b, sizeof(a)) 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#define ALL(v) v.begin(), v.end() 
#define ALLA(arr, sz) arr, arr + sz 
#define SIZE(v) (int)v.size() 
#define SORT(v) sort(ALL(v)) 
#define REVERSE(v) reverse(ALL(v)) 
#define SORTA(arr, sz) sort(ALLA(arr, sz)) 
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz)) 
#define PERMUTE next_permutation 
#define TC(t) while (t--) 
#define FAST_INP  ios_base::sync_with_stdio(false);cin.tie(NULL)

	function<bool(double,double)> ok = [&](double i,double j){
	  if(i<0||i>n-1||j<0||j>m-1||g[i][j]=='#') return false;
	  return true;
	};

/*	function<bool(int,int)> ok = [&](int i, int j){
      if(i<0||i>n-1||j<0||j>m-1||g[i][j]=='#') return false;
      return true;
    };*/
 


//#include<bits/stdc++.h>
//#include<thread>

//using namespace std;
/*
cout ko change kiya jisse vo pair print krva paye operator overloading
template<typename S, typename T>
ostream& operator <<(ostream& out , const pair<S,T>& p){
	   out << "{" << p.first << ", " << p.second << "}";
	   return out;
}

int main(){
	pair<int,int> p = {1,2};
	cout << p;
}*/
// template<typename T, typename S>
// print(pair<T,S>& p){
// 	cout << p.first << ' ' << p.second << '\n';
// }
// int main(){
//   pair<double,string>p = {5.35,"are yaar.\n"};
//   print<int,string>(p);
// }

//void minprintf(char *fmt,...){
	// ... denotes that number of types and arguments are variable

//The tricky bit is how minprintf walks along the argument list when the list doesn't even have a name. 
//The standard header<stdarg.h> contains a set of macro definitions that define how to step through an argument list.
//The implementation of this header will vary from machine to machine, but the interface it presents is uniform.

//  The type va_list is used to declare a variable that will refer to each argument in turn; in minprintf,
//  this variable is called ap, for ``argument pointer.
//  '' The macro va_start initializes ap to point to the first unnamed argument.
// It must be called once before ap is used.
//  There must be at least one named argument; the final named argument is used by va_start to get started.
 
//  va_list ap;
//  char *p; char *sval;
//  int ival; double dval;

//  va_start(ap,fmt); // make ap point to first unnamed arg
 
//  for(p = fmt ; *p ; p++){
// 	 if(*p!='%'){
// 		 putchar(*p) ; continue;}
//      p++;
//      switch(*p){
// 		 case 'd':
// 		   ival = va_arg(ap,int);
// 		   printf("%d",ival);
// 		   break;
// 		 case 'f':
//             dval = va_arg(ap, double);
//             printf("%f", dval);
//             break;
//          case 's':
// 		    for(sval = va_arg(ap,char *);*sval;sval++){
// 				putchar(*sval);
// 			}
// 			break;
//            default:
//             putchar(*p);
//             break;  
// 	 }
//  }
//   va_end(ap);
// }
// int main(){
//   char * p = "manu";
//   char * z = "manu prtap";
//   int t = 6;
//   minprintf("vhlo oh yead %d",t);
// }