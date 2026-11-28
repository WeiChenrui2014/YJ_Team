#include<bits/stdc++.h>
#include<windows.h>
#define ll long long
#define clean system("cls") 
#define stop system("pause") 
using namespace std;
const ll N5=1e5+5,N6=1e6+5,N7=1e7+5;
const double pi=3.14;
ll a[N6];
void rest(ll time){Sleep(time*1000);}
void PrimeDEC(ll n){
    ll k=0;
    if(n==1)cout<<"1";
    for(ll i=2;i*i<=n;i++){
    	ll cnt=0;
        while(n%i==0)n/=i,cnt++;
        if(cnt>0)k++;
        if(k<=1){
            if(cnt==1)cout<<i;
    		else if(cnt!=0)cout<<i<<"^"<<cnt;
        }
        else{
            if(cnt==1)cout<<" * "<<i;
    		else if(cnt!=0)cout<<" * "<<i<<"^"<<cnt;
        }
    }
	if(n!=1){
        if(k==0)cout<<n;
        else cout<<" * "<<n;
	}
}
void Sort(ll n,ll a[]){
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
} 
void MergeSort(){
/*
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[500005],b[500005];
ll gb(ll l,ll r){
    if(l>=r){
        return 0;
    }
	ll mid=(l+r)/2,f=l,s=mid+1,t=l;
    ll anss=gb(l,mid)+gb(mid+1,r);
	while(f<=mid&&s<=r){
		if(a[f]<=a[s]){
            b[t++]=a[f++];
        }
		else{
            anss=anss+mid-f+1;
            b[t++]=a[s++];
        }
	}
	while(f<=mid){
		b[t++]=a[f++];
	}
	while(s<=r){
		b[t++]=a[s++];
	}
	for(ll i=l;i<=r;i++){
		a[i]=b[i];
	}
    return anss;
}
int main(){
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<gb(1,n);
    return 0;
}
*/
}
void setcolor(){
	cout<<"0.黑\n";
	cout<<"1.蓝\n";
	cout<<"2.绿\n";
	cout<<"3.浅绿\n";
	cout<<"4.红\n";
	cout<<"5.紫\n";
	cout<<"6.黄\n";
	cout<<"7.白\n";
	cout<<"8.灰\n";
	cout<<"9.淡蓝\n";
	cout<<"A.淡绿\n";
	cout<<"B.淡浅绿\n";
	cout<<"C.淡红\n";
	cout<<"D.淡紫\n";
	cout<<"E.淡黄\n";
	cout<<"F.亮白\n";
	cout<<"\n\n请选择您的背景色和前景色。（部分颜色暂时不支持）\n";
	char bj,qj;
	cin>>bj>>qj;
	if(bj=='0'&&qj=='0')system("color 00");
	else if(bj=='0'&&qj=='1')system("color 01");
	else if(bj=='0'&&qj=='2')system("color 02");
	else if(bj=='0'&&qj=='3')system("color 03");
	else if(bj=='0'&&qj=='4')system("color 04");
	else if(bj=='0'&&qj=='5')system("color 05");
	else if(bj=='0'&&qj=='6')system("color 06");
	else if(bj=='0'&&qj=='7')system("color 07");
	else if(bj=='0'&&qj=='8')system("color 08");
	else if(bj=='0'&&qj=='9')system("color 09");
	else if(bj=='0'&&qj=='A')system("color 0A");
	else if(bj=='0'&&qj=='B')system("color 0B");
	else if(bj=='0'&&qj=='C')system("color 0C");
	else if(bj=='0'&&qj=='D')system("color 0D");
	else if(bj=='0'&&qj=='E')system("color 0E");
	else if(bj=='1'&&qj=='0')system("color 10");
	else if(bj=='1'&&qj=='1')system("color 11");
	else if(bj=='1'&&qj=='2')system("color 12");
	else if(bj=='1'&&qj=='3')system("color 13");
	else if(bj=='1'&&qj=='4')system("color 14");
	else if(bj=='1'&&qj=='5')system("color 15");
	else if(bj=='1'&&qj=='6')system("color 16");
	else if(bj=='1'&&qj=='7')system("color 17");
	else if(bj=='1'&&qj=='8')system("color 18");
	else if(bj=='1'&&qj=='9')system("color 19");
	else if(bj=='1'&&qj=='A')system("color 1A");
	else if(bj=='1'&&qj=='B')system("color 1B");
	else if(bj=='1'&&qj=='C')system("color 1C");
	else if(bj=='1'&&qj=='D')system("color 1D");
	else if(bj=='1'&&qj=='E')system("color 1E");
	else if(bj=='1'&&qj=='F')system("color 1F");
	else if(bj=='2'&&qj=='0')system("color 20");
	else if(bj=='2'&&qj=='1')system("color 21");
	else if(bj=='2'&&qj=='2')system("color 22");
	else if(bj=='2'&&qj=='3')system("color 23");
	else if(bj=='2'&&qj=='4')system("color 24");
	else if(bj=='2'&&qj=='5')system("color 25");
	else if(bj=='2'&&qj=='6')system("color 26");
	else if(bj=='2'&&qj=='7')system("color 27");
	else if(bj=='2'&&qj=='8')system("color 28");
	else if(bj=='2'&&qj=='9')system("color 29");
	else if(bj=='2'&&qj=='A')system("color 2A");
	else if(bj=='2'&&qj=='B')system("color 2B");
	else if(bj=='2'&&qj=='C')system("color 2C");
	else if(bj=='2'&&qj=='D')system("color 2D");
	else if(bj=='2'&&qj=='E')system("color 2E");
	else if(bj=='2'&&qj=='F')system("color 2F");
	else if(bj=='3'&&qj=='0')system("color 30");
	else if(bj=='3'&&qj=='1')system("color 31");
	else if(bj=='3'&&qj=='2')system("color 32");
	else if(bj=='3'&&qj=='3')system("color 33");
	else if(bj=='3'&&qj=='4')system("color 34");
	else if(bj=='3'&&qj=='5')system("color 35");
	else if(bj=='3'&&qj=='6')system("color 36");
	else if(bj=='3'&&qj=='7')system("color 37");
	else if(bj=='3'&&qj=='8')system("color 38");
	else if(bj=='3'&&qj=='9')system("color 39");
	else if(bj=='3'&&qj=='A')system("color 3A");
	else if(bj=='3'&&qj=='B')system("color 3B");
	else if(bj=='3'&&qj=='C')system("color 3C");
	else if(bj=='3'&&qj=='D')system("color 3D");
	else if(bj=='3'&&qj=='E')system("color 3E");
	else if(bj=='3'&&qj=='F')system("color 3F");
	else if(bj=='4'&&qj=='0')system("color 40");
	else if(bj=='4'&&qj=='1')system("color 41");
	else if(bj=='4'&&qj=='2')system("color 42");
	else if(bj=='4'&&qj=='3')system("color 43");
	else if(bj=='4'&&qj=='4')system("color 44");
	else if(bj=='4'&&qj=='5')system("color 45");
	else if(bj=='4'&&qj=='6')system("color 46");
	else if(bj=='4'&&qj=='7')system("color 47");
	else if(bj=='4'&&qj=='8')system("color 48");
	else if(bj=='4'&&qj=='9')system("color 49");
	else if(bj=='4'&&qj=='A')system("color 4A");
	else if(bj=='4'&&qj=='B')system("color 4B");
	else if(bj=='4'&&qj=='C')system("color 4C");
	else if(bj=='4'&&qj=='D')system("color 4D");
	else if(bj=='4'&&qj=='E')system("color 4E");
	else if(bj=='4'&&qj=='F')system("color 4F");
	else if(bj=='5'&&qj=='0')system("color 50");
	else if(bj=='5'&&qj=='1')system("color 51");
	else if(bj=='5'&&qj=='2')system("color 52");
	else if(bj=='5'&&qj=='3')system("color 53");
	else if(bj=='5'&&qj=='4')system("color 54");
	else if(bj=='5'&&qj=='5')system("color 55");
	else if(bj=='5'&&qj=='6')system("color 56");
	else if(bj=='5'&&qj=='7')system("color 57");
	else if(bj=='5'&&qj=='8')system("color 58");
	else if(bj=='5'&&qj=='9')system("color 59");
	else if(bj=='5'&&qj=='A')system("color 5A");
	else if(bj=='5'&&qj=='B')system("color 5B");
	else if(bj=='5'&&qj=='C')system("color 5C");
	else if(bj=='5'&&qj=='D')system("color 5D");
	else if(bj=='5'&&qj=='E')system("color 5E");
	else if(bj=='5'&&qj=='F')system("color 5F");
	else if(bj=='6'&&qj=='0')system("color 60");
	else if(bj=='6'&&qj=='1')system("color 61");
	else if(bj=='6'&&qj=='2')system("color 62");
	else if(bj=='6'&&qj=='3')system("color 63");
	else if(bj=='6'&&qj=='4')system("color 64");
	else if(bj=='6'&&qj=='5')system("color 65");
	else if(bj=='6'&&qj=='6')system("color 66");
	else if(bj=='6'&&qj=='7')system("color 67");
	else if(bj=='6'&&qj=='8')system("color 68");
	else if(bj=='6'&&qj=='9')system("color 69");
	else if(bj=='6'&&qj=='A')system("color 6A");
	else if(bj=='6'&&qj=='B')system("color 6B");
	else if(bj=='6'&&qj=='C')system("color 6C");
	else if(bj=='6'&&qj=='D')system("color 6D");
	else if(bj=='6'&&qj=='E')system("color 6E");
	else if(bj=='6'&&qj=='F')system("color 6F");
	else if(bj=='7'&&qj=='0')system("color 70");
	else if(bj=='7'&&qj=='1')system("color 71");
	else if(bj=='7'&&qj=='2')system("color 72");
	else if(bj=='7'&&qj=='3')system("color 73");
	else if(bj=='7'&&qj=='4')system("color 74");
	else if(bj=='7'&&qj=='5')system("color 75");
	else if(bj=='7'&&qj=='6')system("color 76");
	else if(bj=='7'&&qj=='7')system("color 77");
	else if(bj=='7'&&qj=='8')system("color 78");
	else if(bj=='7'&&qj=='9')system("color 79");
	else if(bj=='7'&&qj=='A')system("color 7A");
	else if(bj=='7'&&qj=='B')system("color 7B");
	else if(bj=='7'&&qj=='C')system("color 7C");
	else if(bj=='7'&&qj=='D')system("color 7D");
	else if(bj=='7'&&qj=='E')system("color 7E");
	else if(bj=='7'&&qj=='F')system("color 7F");
	else if(bj=='8'&&qj=='0')system("color 80");
	else if(bj=='8'&&qj=='1')system("color 81");
	else if(bj=='8'&&qj=='2')system("color 82");
	else if(bj=='8'&&qj=='3')system("color 83");
	else if(bj=='8'&&qj=='4')system("color 84");
	else if(bj=='8'&&qj=='5')system("color 85");
	else if(bj=='8'&&qj=='6')system("color 86");
	else if(bj=='8'&&qj=='7')system("color 87");
	else if(bj=='8'&&qj=='8')system("color 88");
	else if(bj=='8'&&qj=='9')system("color 89");
	else if(bj=='8'&&qj=='A')system("color 8A");
	else if(bj=='8'&&qj=='B')system("color 8B");
	else if(bj=='8'&&qj=='C')system("color 8C");
	else if(bj=='8'&&qj=='D')system("color 8D");
	else if(bj=='8'&&qj=='E')system("color 8E");
	else if(bj=='8'&&qj=='F')system("color 8F");
	else if(bj=='9'&&qj=='0')system("color 90");
	else if(bj=='9'&&qj=='1')system("color 91");
	else if(bj=='9'&&qj=='2')system("color 92");
	else if(bj=='9'&&qj=='3')system("color 93");
	else if(bj=='9'&&qj=='4')system("color 94");
	else if(bj=='9'&&qj=='5')system("color 95");
	else if(bj=='9'&&qj=='6')system("color 96");
	else if(bj=='9'&&qj=='7')system("color 97");
	else if(bj=='9'&&qj=='8')system("color 98");
	else if(bj=='9'&&qj=='9')system("color 99");
	else if(bj=='9'&&qj=='A')system("color 9A");
	else if(bj=='9'&&qj=='B')system("color 9B");
	else if(bj=='9'&&qj=='C')system("color 9C");
	else if(bj=='9'&&qj=='D')system("color 9D");
	else if(bj=='9'&&qj=='E')system("color 9E");
	else if(bj=='9'&&qj=='F')system("color 9F");
	else if(bj=='A'&&qj=='0')system("color A0");
	else if(bj=='A'&&qj=='1')system("color A1");
	else if(bj=='A'&&qj=='2')system("color A2");
	else if(bj=='A'&&qj=='3')system("color A3");
	else if(bj=='A'&&qj=='4')system("color A4");
	else if(bj=='A'&&qj=='5')system("color A5");
	else if(bj=='A'&&qj=='6')system("color A6");
	else if(bj=='A'&&qj=='7')system("color A7");
	else if(bj=='A'&&qj=='8')system("color A8");
	else if(bj=='A'&&qj=='9')system("color A9");
	else if(bj=='A'&&qj=='A')system("color AA");
	else if(bj=='A'&&qj=='B')system("color AB");
	else if(bj=='A'&&qj=='C')system("color AC");
	else if(bj=='A'&&qj=='D')system("color AD");
	else if(bj=='A'&&qj=='E')system("color AE");
	else if(bj=='A'&&qj=='F')system("color AF");
	else if(bj=='B'&&qj=='0')system("color B0");
	else if(bj=='B'&&qj=='1')system("color B1");
	else if(bj=='B'&&qj=='2')system("color B2");
	else if(bj=='B'&&qj=='3')system("color B3");
	else if(bj=='B'&&qj=='4')system("color B4");
	else if(bj=='B'&&qj=='5')system("color B5");
	else if(bj=='B'&&qj=='6')system("color B6");
	else if(bj=='B'&&qj=='7')system("color B7");
	else if(bj=='B'&&qj=='8')system("color B8");
	else if(bj=='B'&&qj=='9')system("color B9");
	else if(bj=='B'&&qj=='A')system("color BA");
	else if(bj=='B'&&qj=='B')system("color BB");
	else if(bj=='B'&&qj=='C')system("color BC");
	else if(bj=='B'&&qj=='D')system("color BD");
	else if(bj=='B'&&qj=='E')system("color BE");
	else if(bj=='B'&&qj=='F')system("color BF");
	else if(bj=='C'&&qj=='0')system("color C0");
	else if(bj=='C'&&qj=='1')system("color C1");
	else if(bj=='C'&&qj=='2')system("color C2");
	else if(bj=='C'&&qj=='3')system("color C3");
	else if(bj=='C'&&qj=='4')system("color C4");
	else if(bj=='C'&&qj=='5')system("color C5");
	else if(bj=='C'&&qj=='6')system("color C6");
	else if(bj=='C'&&qj=='7')system("color C7");
	else if(bj=='C'&&qj=='8')system("color C8");
	else if(bj=='C'&&qj=='9')system("color C9");
	else if(bj=='C'&&qj=='A')system("color CA");
	else if(bj=='C'&&qj=='B')system("color CB");
	else if(bj=='C'&&qj=='C')system("color CC");
	else if(bj=='C'&&qj=='D')system("color CD");
	else if(bj=='C'&&qj=='E')system("color CE");
	else if(bj=='C'&&qj=='F')system("color CF");
	else if(bj=='D'&&qj=='0')system("color D0");
	else if(bj=='D'&&qj=='1')system("color D1");
	else if(bj=='D'&&qj=='2')system("color D2");
	else if(bj=='D'&&qj=='3')system("color D3");
	else if(bj=='D'&&qj=='4')system("color D4");
	else if(bj=='D'&&qj=='5')system("color D5");
	else if(bj=='D'&&qj=='6')system("color D6");
	else if(bj=='D'&&qj=='7')system("color D7");
	else if(bj=='D'&&qj=='8')system("color D8");
	else if(bj=='D'&&qj=='9')system("color D9");
	else if(bj=='D'&&qj=='A')system("color DA");
	else if(bj=='D'&&qj=='B')system("color DB");
	else if(bj=='D'&&qj=='C')system("color DC");
	else if(bj=='D'&&qj=='D')system("color DD");
	else if(bj=='D'&&qj=='E')system("color DE");
	else if(bj=='D'&&qj=='F')system("color DF");
	else if(bj=='E'&&qj=='0')system("color E0");
	else if(bj=='E'&&qj=='1')system("color E1");
	else if(bj=='E'&&qj=='2')system("color E2");
	else if(bj=='E'&&qj=='3')system("color E3");
	else if(bj=='E'&&qj=='4')system("color E4");
	else if(bj=='E'&&qj=='5')system("color E5");
	else if(bj=='E'&&qj=='6')system("color E6");
	else if(bj=='E'&&qj=='7')system("color E7");
	else if(bj=='E'&&qj=='8')system("color E8");
	else if(bj=='E'&&qj=='9')system("color E9");
	else if(bj=='E'&&qj=='A')system("color EA");
	else if(bj=='E'&&qj=='B')system("color EB");
	else if(bj=='E'&&qj=='C')system("color EC");
	else if(bj=='E'&&qj=='D')system("color ED");
	else if(bj=='E'&&qj=='E')system("color EE");
	else if(bj=='E'&&qj=='F')system("color EF");
	else if(bj=='F'&&qj=='0')system("color F0");
	else if(bj=='F'&&qj=='1')system("color F1");
	else if(bj=='F'&&qj=='2')system("color F2");
	else if(bj=='F'&&qj=='3')system("color F3");
	else if(bj=='F'&&qj=='4')system("color F4");
	else if(bj=='F'&&qj=='5')system("color F5");
	else if(bj=='F'&&qj=='6')system("color F6");
	else if(bj=='F'&&qj=='7')system("color F7");
	else if(bj=='F'&&qj=='8')system("color F8");
	else if(bj=='F'&&qj=='9')system("color F9");
	else if(bj=='F'&&qj=='A')system("color FA");
	else if(bj=='F'&&qj=='B')system("color FB");
	else if(bj=='F'&&qj=='C')system("color FC");
	else if(bj=='F'&&qj=='D')system("color FD");
	else if(bj=='F'&&qj=='E')system("color FE");
	else if(bj=='F'&&qj=='F')system("color FF");
	else system("color 0F");
	clean;
}
void dashboard(){
	cout<<"计算器 V1.3\n";//版本更改区
	cout<<"YJ Team / 出品\nWeiChenrui / 研发\n欢迎访问我们的OJ：https://cppoj.xjstech.cn\n感谢您使用我们的计算器。\n\n";
	stop;clean;
	while(1){
		cout<<"操作：\n";
		cout<<"-1.更改颜色\n";
		cout<<"0.退出\n";
		cout<<"1.质因数分解（0 < 要分解的整数 < 10^18）\n";
		cout<<"2.sort排序（数的个数 < 1000000）\n";
		ll op;cin>>op;clean;
		if(op==-1)setcolor();
		else if(op==0)exit(0);
		else if(op==1){
			ll n;
			cin>>n;
			PrimeDEC(n);
		}
		else if(op==2){
			ll n;
			cin>>n;
			for(int i=1;i<=n;i++){
				cin>>a[i];
			}
			Sort(n,a);
		}
		else cout<<"Error!\n";
		stop;clean;
	}
} 
int main(){
	dashboard();
	return 0;
}

