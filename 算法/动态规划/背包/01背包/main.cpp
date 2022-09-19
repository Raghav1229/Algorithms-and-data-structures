#include <iostream>
using namespace std;
 
const int N=1010;
int v[N],w[N],f[N][N];
int n,m;
 
int main()
{
  cin >> n >> m;
  
  for(int i=1;i<=n;i++) cin >> v[i] >> w[i];
  
  for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
      f[i][j]=f[i-1][j];
      if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
    }    
 
  cout << f[n][m];
  return 0;
}