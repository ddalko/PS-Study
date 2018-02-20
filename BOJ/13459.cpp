#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
int n, m;
char board[11][11];

struct state
{
	int rx, ry;
	int bx, by;
	int dist;
	state(int _ry, int _rx, int _by, int _bx) : ry(_ry), rx(_rx), by(_by), bx(_bx){}
	state(){}
};

state left(state inp)
{
	state tmp(inp.ry, inp.rx, inp.by, inp.bx);

	int nrx = tmp.rx;
	for(; 1 < nrx; --nrx)
	{
		if(board[tmp.ry][nrx] == '#') {
			nrx++;
			break;
		}
		if(board[tmp.ry][nrx] == 'O') break;
	}

	int nbx = tmp.bx;
	for(; 1 < nbx; --nbx)
	{
		if(board[tmp.by][nbx] == '#'){
			nbx++;
			break;
		}
		if(board[tmp.by][nbx] == 'O') break;
	}

	tmp.rx = nrx;
	tmp.bx = nbx;

	if(tmp.ry == tmp.by && nrx == nbx){
		if(board[tmp.ry][nrx] == 'O') {
			tmp.ry = -1; tmp.rx = -1;
			tmp.by = -1; tmp.bx = -1;
		}
		else if(tmp.rx > tmp.bx){
			tmp.rx = nrx + 1;
		}else{
			tmp.bx = nbx + 1;
		}
	}
	printf("left -> nrx : %d, nbx : %d\n", nrx, nbx);
	return tmp;
}

state right(state inp)
{
	state tmp(inp.ry, inp.rx, inp.by, inp.bx);

	int nrx = tmp.rx;
	for(; nrx < m-1; ++nrx)
	{
		if(board[tmp.ry][nrx] == '#') {
			--nrx;
			break;
		}
		if(board[tmp.ry][nrx] == 'O') break;
	}

	int nbx = tmp.bx;
	for(; nbx < m-1; ++nbx)
	{
		if(board[tmp.by][nbx] == '#'){
			--nbx;
			break;
		}
		if(board[tmp.by][nbx] == 'O') break;
	}

	tmp.rx = nrx;
	tmp.bx = nbx;

	if(tmp.ry == tmp.by && nrx == nbx){
		if(board[tmp.ry][nrx] == 'O') {
			tmp.ry = -1; tmp.rx = -1;
			tmp.by = -1; tmp.bx = -1;
		}
		else if(tmp.rx > tmp.bx){
			tmp.bx = nbx - 1;
		}else{
			tmp.rx = nrx - 1;
		}
	}
	printf("right -> nrx : %d, nbx : %d\n", nrx, nbx);
	return tmp;
}

state up(state inp)
{
	state tmp(inp.ry, inp.rx, inp.by, inp.bx);

	int nry = tmp.ry;
	for(; 1 < nry; --nry)
	{
		if(board[nry][tmp.rx] == '#') {
			nry++;
			break;
		}
		if(board[nry][tmp.rx] == 'O') break;
	}

	int nby = tmp.by;
	for(; 1 < nby; --nby)
	{
		if(board[nby][tmp.bx] == '#'){
			nby++;
			break;
		}
		if(board[nby][tmp.bx] == 'O') break;
	}

	tmp.ry = nry;
	tmp.by = nby;

	if(nry == nby && tmp.rx == tmp.bx){
		if(board[nry][tmp.rx] == 'O') {
			tmp.ry = -1; tmp.rx = -1;
			tmp.by = -1; tmp.bx = -1;
		}
		else if(tmp.ry > tmp.by){
			tmp.ry = nry + 1;
		}else{
			tmp.by = nby + 1;
		}
	}
	printf("up -> nry : %d, nby : %d\n", nry, nby);
	return tmp;
}

state down(state inp)
{
	state tmp(inp.ry, inp.rx, inp.by, inp.bx);

	int nry = tmp.ry;
	for(; nry < n-1; ++nry)
	{
		if(board[nry][tmp.rx] == '#') {
			--nry;
			break;
		}
		if(board[nry][tmp.rx] == 'O') break;
	}

	int nby = tmp.by;
	for(; nby < n-1; ++nby)
	{
		if(board[nby][tmp.bx] == '#'){
			--nby;
			break;
		}
		if(board[nby][tmp.bx] == 'O') break;
	}

	tmp.ry = nry;
	tmp.by = nby;

	if(nry == nby && tmp.rx == tmp.bx){
		if(board[nry][tmp.rx] == 'O') {
			tmp.ry = -1; tmp.rx = -1;
			tmp.by = -1; tmp.bx = -1;
		}
		else if(tmp.ry > tmp.by){
			tmp.by = nby - 1;
		}else{
			tmp.ry = nry - 1;
		}
	}

	printf("down -> nry : %d, nby : %d\n", nry, nby);

	return tmp;
}

bool chk(state inp)
{
	if(inp.ry == -1 && inp.rx == -1 && inp.by == -1 && inp.bx == -1) return false;
	return true;
=======
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, -1, 0, 1};

struct state
{
    int ry, rx;
    int by, bx;  
    int dist;

    state (state _state)
    {
        ry = _state.ry;
        rx = _state.rx;
        by = _state.by;
        bx = _state.bx;
        dist = _state.dist;
    }

    state(){};
};

int n, m;
char board[11][11];

state direction(state s, int d)
{
    state s = tmp;

    //int nrx, nry, nbx, nry;
    int nc[4];
    nc[0] = tmp.rx; nc[1] = tmp.ry; nc[2] = tmp
    while(1)
    {
        if(!con) break;
    }
>>>>>>> 411b3482630c7ac6490c4f4cb353062fa94a3432
}

bool bfs(state inp)
{
<<<<<<< HEAD
	queue<state> q;
	inp.dist = 0;
	q.push(inp);

	while(!q.empty())
	{
		state cur = q.front();
		q.pop();

		if(cur.dist > 11) continue;
		if(board[cur.by][cur.bx] == 'O') continue;
		if(board[cur.ry][cur.rx] == 'O') return true;

		state tmp;
		tmp = left(cur);
		tmp.dist += 1;
		if(chk(tmp)) q.push(tmp);

		tmp = right(cur);
		tmp.dist += 1;
		if(chk(tmp)) q.push(tmp);

		tmp = up(cur);
		tmp.dist += 1;
		if(chk(tmp)) q.push(tmp);

		tmp = down(cur);
		tmp.dist += 1;
		if(chk(tmp)) q.push(tmp);
	}

	return false;
=======
    queue<state> q;
    q.push(inp);

    while(!q.empty())
    {
        state cur = q.front();
        q.pop();

        if(cur.dist > 10) continue;
        if(board[cur.by][cur.bx] == 'O') continue;
        if(board[cur.ry][cur.rx] == 'O') return true;

        for(int i = 0; i < 4; ++i){
            state tmp = direction(cur, i);
            q.push(tmp);
        }
    }
    return false;
>>>>>>> 411b3482630c7ac6490c4f4cb353062fa94a3432
}

int main()
{
<<<<<<< HEAD
	scanf("%d %d",&n,&m);
	for(int i = 0; i < n; ++i) scanf("%s",board[i]);

	int irx, iry, iby, ibx;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(board[i][j] == 'R'){
				irx = j;
				iry = i;
			}
			if(board[i][j] == 'B'){
				ibx = j;
				iby = i;
			}
		}
	}

	state in(iry, irx, iby, ibx);
	printf("%d\n",bfs(in));
=======
    scanf("%d %d",&n,&m);
    for(int i = 0; i < n; ++i) scanf("%s",board[i]);

    int iry, irx, iby, ibx;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(board[i][j] == 'B') {
                iby = i;
                ibx = j;
            }
            if(board[i][j] == 'R'){
                iry = i;
                irx = j;
            }
        }
    }

    state f;
    f.ry = iry; f.rx = irx; f.by = iby; f.bx = ibx;
    f.dist = 0;
    printf("%d\n",bfs(f));
>>>>>>> 411b3482630c7ac6490c4f4cb353062fa94a3432
}