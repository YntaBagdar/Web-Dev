1.  /*  #include <iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    int s = 0;
    for(int i = 0; i < n.size(); ++i){
        if(n[i]=='0' || n[i]=='6' || n[i]=='9')
            s+=1;
        if(n[i]=='8')
            s+=2;
    }
    cout << s;
    return 0;
} */



2.  /* #include <iostream>   
using namespace std;
   int main(){
    int n,i,j, a;
    cin >> n >> i >> j;
    if( i < j)  
       a = i + abs(j - n) - 1;
    else
      a = j + abs(i - n) - 1;
    int b = abs(i - j) - 1;
    if(a < b)
        cout << a;
    else
        cout << b;
    return 0;
}

 */


3. /* #include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin >> str;
    int res = 0, c = 0;
    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '0')
            res+=1;
        else{
            if(c < res)
                c = res;
            res = 0;
        }
    }
    if(c < res)
        c = res;
    cout << c;
    return 0;
} */


4. /*  #include <iostream>
#include <cmath>
using namespace std; 
int main(){
    long long a, b, c;
    cin >> a >> b;
    if(int(sqrt(a * b)) == sqrt(a*b))
        c = sqrt(a*b);
    else
        c = 0;
    cout << c;
    return 0;
}  */


5. /* #include <iostream>
using namespace std;
 int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int a[9][9];
    int d = 0;
    for(int i = 1; i <= 8; ++i)
        for(int j = 1; j <= 8; ++j)
            a[i][j] = 0;
    for(int i = 1; i <= 8; ++i){
        if(i%2==1)
            d = 1;
        else
            d = 0;
        for(int j = d; j <= 8; j+=2)
            a[i][j] = 1;
    }
     
    if(a[x1][y1]==a[x2][y2])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}  */


6. /* #include <iostream>
using namespace std;
 int main(){
    int n, k,s = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> k;
    for(int i = 0; i < n; ++i){
        if(a[i] > k)
            s+=k;
        else
            s+=a[i];
    }
    cout << s;
    return 0;
}  */


7. /* #include <iostream>
using namespace std;
 int main(){
    int k1,l1,m1,k2,l2,m2;
    cin >> k1 >> l1 >> m1 >> k2 >> l2 >> m2;
    int a =  (k1 * l1)/100;
    int a1 = (k2 * l2)/100;
    int s = a * m1 + a1 * m2;
    int r1 = k1 - a;
    int r2 = k2 - a1;
    if(r1 > r2)
        s += (r1 - r2) * m1;
    else
        s += (r2 - r1) * m2;
    cout << s;
    return 0;
}  */


8. /* #include <iostream>
using namespace std;
 int main(){
    int n, a, c = 0, b = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a;
        if(a > 0)
            c++;
        else
            c = 0;
        if(c > b)
            b = c;
    }
    cout << b;
    return 0;
}  */


9. /* #include <iostream>
using namespace std;
 int main(){
    int n,b,s1 = 0,s;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i){
        cin >> b;
        a.push_back(b);
    }
    a.push_back(a[0]);
    a.push_back(a[1]);
    for(int i = 1; i < a.size() - 1; ++i){
        s = a[i - 1] + a[i] + a[i + 1];
        if(s > s1){
            s1 = s;
        }
    }
    cout << s1;
    return 0;
}  */


10. /*  #include <iostream>
using namespace std; 
int main(){
    int n,a,b, d;
    vector<int> c;
    cin >> n >> a >> b;
    if(n==1){
        c.push_back(a);
        c.push_back(b);
    }
    while(n > 1){
        d = b - a;
        c.insert(c.begin(), b - a);
        b = a;
        a = d;
        n--;
    }
    cout << c[0] << " " << c[1];
    return 0;
} */


11. /* #include <iostream>
using namespace std;
 int main(){
    int n, m;
    cin >> n >> m;
    if(n == 0 &&  m == 0)
        cout << n << " " << m;
    else
        if(n == 0 && m != n)
            cout << "Impossible";
    else
        if(m == 0)
            cout << n << " " << n;
    else
        if(n == 1)
            cout << m << " " << m;
 
    else
        if(n < m)
           cout << m << " " << m + n - 1;
    else
        if(n==m)
            cout << n << " " << m + n - 1;
    else
            cout << n << " " << m + n - 1;
    return 0;
}  */




12. /* #include <iostream>
using namespace std;
 int main(){
    int long long s = 0,b;
    for(int i = 0; i < 31; ++i){
        cin >> b;
        s+=b;
    }
    cout << s/27;
    return 0;
}  


13. /* #include <iostream
using namespace std;
 int main(){
    int n,m,b,s = 0,s1 = 0;
    cin >> n >> m;
    string str;
    string res;
    cin >> str;
    for(int i = 0; i < m; ++i){
        cin >> b;
        s+=b;
    }
    res.clear();
    res+=str;
    for(int i = 1; i < n; ++i){
        cin >> str;
        for(int j = 0; j < m; ++j){
            cin >> b;
            s1+=b;
        }
        if(s1 < s){
            s = s1;
            res.clear();
            res+=str;
        }
        s1 = 0;
    }
    cout << endl;
    for(int i = 0; i < res.size(); ++i)
        cout << res[i];
    return 0;
}  */


14./*  #include <iostream>
using namespace std;
 int main(){
    int long long m,n,i,j,c;
    cin >> m >> n >> i >> j >> c;
    if(m % 2 == 0 || n % 2 == 0){
        cout << "equal";
        return 0;
    }
   if(c == 0){
        if((i + j) % 2)
            cout << "white";
        else
            cout << "black";
    }
    else{
        if(!((i + j)%2))
            cout << "white";
        else
            cout << "black";
 
    }
    return 0;
}  */



15. /*  #include <iostream>
using namespace std;
 int main(){
    string str,str1,str2;
    cin >> str >> str1 >> str2;
    if(str[0]== 'X' && str[1] == 'X' && str[2] == 'X'){
        cout << "Win";
        return 0;
    }
    if(str1[0]== 'X' && str1[1] == 'X' && str1[2] == 'X'){
        cout << "Win";
        return 0;
    }
    if(str2[0]== 'X'&& str2[1] == 'X' && str2[2] == 'X'){
        cout << "Win";
        return 0;
    }
    if(str[0]== 'X' && str1[1] == 'X' && str2[2] == 'X'){
        cout << "Win";
        return 0;
    }
    if(str[2]== 'X' && str1[1] == 'X'&& str2[0] == 'X'){
        cout << "Win";
        return 0;
    }
    if(str[0]== 'X' && str1[0] == 'X' && str2[0] == 'X'){
        cout << "Win";
        return 0;
    }
    if(str[1]== 'X' && str1[1] == 'X' && str2[1] == 'X'){
        cout << "Win";
        return 0;
    }
    if(str[2]== 'X' && str1[2] == 'X' && str2[2] == 'X'){
        cout << "Win";
        return 0;
    }
    int pos = str.find(".");
    int pos1 = str1.find(".");
    int pos2 = str2.find(".");
    if(pos + 1 || pos1 + 1 || pos2 + 1){
        cout << "Lose";
        return 0;
    }
    cout << "Draw";
    return 0;
} */


17. /* #include <iostream>
using namespace std;
 int main(){
    string team, t1, t2, t3;
    getline(cin, team);
    getline(cin, t1);
    getline(cin, t2);
    getline(cin, t3);
    if(t1 > t2) swap(t1, t2);
    if(t2 > t3) swap(t2, t3);
    if(t1 > t2) swap(t1, t2);
    cout << team <<": " << t1 << ", " << t2 <<", " << t3;
    return 0;
}   */



18.  /*  #include <iostream>
#include <vector>
using namespace std;
 int main(){
    string str;
    int n,m,k = 0, c = 1000000;
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> str;
        for(int j = 0; j < str.size(); ++j)
            if(str[j] == '.')
                k++;
        if(k==0){
            cout << 0;
            return 0;
        }
        if(k < c)
            c = k;
        k = 0;
    }
    cout << c;
    return 0;
} */


19. /* #include <iostream>
#include <string>
#include <limits>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int counter = 0;
    for(int i = 0; i < n; ++i)
    {
        string s;
        getline(cin, s);
        if(s[0] == s[3])
            ++counter;
    }
    cout << counter;
    return 0;
} */


21. /*  #include <iostream>
#include <cmath>
using namespace std;
int main(){
int a[100],b[100],n,i,k,s[100],max;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
cin>>b[i];
s[0]=a[0]*b[0];
max=s[0];
k=1;
for(i=1;i<n;i++)
{
s[i]=a[i]*b[i];
if (s[i]>max)
{
max=s[i];
k=i+1;
}
}
cout<<k;
} */


22. /* #include <iostream>
using namespace std;
 int main(){
    int n, k = 1, s = 0;
    cin >> n;
    if(n > 145){
        cout <<"NO";
        return 0;
    }
    while(k < n){
        s+=5;
        k++;
    }
    cout << s / 60  << " " << s % 60;
    return 0;
}  */



23./* #include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout << (max(a,b) + 1)/2 << " ";
    cout << min(a,b);
     
    return 0;
} */


24. /* #include<iostream>
using namespace std; 
int main(){
    int a[4]={0}, i, n, k;
    cin >> n;
    a[0]=n-8;
    a[1]=n+8;
    a[2]=n-1;
    a[3]=n+1;
    if(n%8==0)
    a[3]=-1;
    if(n%8==1)
       a[2]=-1;
    sort(a,a+4);
    for(i=0; i<4; i++)
       if(a[i] > 0  && a[i] < 65 )
           cout << a[i] <<" ";
 
    return 0;
} */


26. /*  #include <iostream>
using namespace std;
 int main(){
    int long long n,a,b,s = 0,ii;
    cin >> n;
    bool bb = false;
    for(int i = 0; i < n; ++i){
        cin >> a >> b;
        if(b==1 && a > s){
            s = a;
            ii = i + 1;
            bb = true;
        }
    }
    if(bb == false)
        cout << -1;
    else
    cout << ii;
    return 0;
} */


28. /* #include <iostream>
using namespace std; 
int main(){
    string str;
    cin >> str;
    int n,m,k = 0;
    cin >> n >> m;
    int a = (str[0] - 48) * 10+ str[1] - 48;
    int b = (str[3] - 48) * 10+ str[4] - 48;
    int minu = a * 60 + b + n * 60 + m;
    int soat = minu / 60;
    int minuta = minu - (soat * 60);
    while(minuta > 60){
        minuta-=60;
        k++;
    }
    soat+=k;
    while(soat >= 24){
        soat-=24;
    }
 
    if(soat < 10)
        cout << "0" << soat;
    else
        cout << soat;
    cout << ":";
    if(minuta < 10)
        cout << "0" << minuta;
    else
        cout << minuta;
 
    return 0;
} */