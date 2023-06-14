#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//1.
	int n;
	char c;

	cin >> n >> c;

	if (c == '?')
	{
		n = n - pow(n, 3);
	}
	else {
		int br = sqrt(n) + pow(n, 3);
		c = 'o';
	}
	cout << n << endl;
	cout << c << endl;

	//2.
	/*a) S = (1/(n+m)) + (2/(n+2*m)) + (3/(n+3*m)) + ....+ (n/(n+n*m))
		b) P =- (n+2m) –(2*n + 3*m) - (3*n + 4*m) -(4*n + 5*m)- ... -(m*n + (m+1)*m) */
	int n, m;

	do
	{
		cin >> n;
		cin >> m;
	} while (n < 0 || m < 0);

	float S = 0;

	for (int i = 1; i <= n; i++)
	{
		S += (i / (n + i * m));
	}

	float P = 0;

	for (int j = 0; j <= m; j++)
	{
		P -= (j * n + (j + 1) * m);
	}

	cout << S << endl << P;

	//3.
	/*Unijeti cijeli parni, minimalno trocifreni broj.
		a) izracunati sumu neparnih cifri broja.
		b) provjeriti da li je cifra na mjestu stotice parna.*/

	int n;

	do
	{
		cin >> n;
	} while (n % 2 != 0 && n <= 99);

	int n_copy = n;
	int sumaNeparnihCifri = 0;
	//a)
	do
	{
		if (n % 2 != 0)
			sumaNeparnihCifri += n % 10;
		n /= 10;
	} while (n > 0);

	cout << sumaNeparnihCifri << endl;

	//b)
	if ((n_copy /= 10) % 2)
		cout << "cifra na stotici je parna";
	else
		cout << "cifra na stotici je neparna";
}
