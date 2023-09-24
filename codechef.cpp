 #include <bits/stdc++.h>

        using namespace std;

        #define int long long int
        #define vi vector<int>
        #define vvi vector<vector<int> 
        #define mii map<int,int>
        #define pii pair<int,int>
        #define ff first
        #define ss second
        #define ce cout << endl ;
        #define pb push_back
        #define mkp make_pair
        #define py cout << "YES" << endl ;
        #define pn cout << "NO" << endl ;
        #define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) ; 

        bool cmp(pii& a , pii& b){
            int asum = a.ff + a.ss , bsum = b.ff + b.ss ; 
            return asum + a.ff > bsum + b.ff  ;
        }

        const int  l = 2e7 + 1 , mod = 1e9 + 7 ;

        vi prime(l , 0) , phi(l + 1) , store(l , 0) ;

        vvi factor(l) , adj ;

        class graph{
            int v ;
            vector<list<int>> l ; vector<pii> mp ;
            vi parent , ans , visited , a ;
            public:
                void create_list(int v){
                    this->v = v ;
                    l.resize(v+1) , visited.resize(v+1 , 0) ;
                    parent.resize(v+1) , ans.resize(v+1 , 0) ;
                    a.resize(v+1) ;
                }
                void enter_values(){
                    for(int i = 1 ; i <= v ; i++) cin >> a[i] ;
                }
                void addedge(int u , int v){
                    l[u].pb(v)  , l[v].pb(u) ;
                    mp.pb(mkp(u , v)) ;
                }
                void print_list(){
                    for(int i = 1 ; i <= v ; i++){
                        cout << "Vertex:" << i << "->" ;
                        for(auto it : l[i]) cout << it << "->" ;
                        ce
                    }
                }
                void BFS1(){
                    queue<int> q ;
                    q.push(1) , parent[1] = 1 ;
                    int u ;
                    while(not q.empty()){
                        u = q.front() ;
                        q.pop() , visited[u] = 1 ;
                        for(auto it : l[u]){
                            if(not visited[it]){
                                q.push(it) ;
                                visited[it] = 1 , parent[it] = u ;
                            }
                        }
                    }
