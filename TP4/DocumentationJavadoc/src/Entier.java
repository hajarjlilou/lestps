
public class Entier
{
	int a;
	short b;
	long c;
	
	public Entier(int a, short b, long c)
	{
		this.a = a;
		this.b = b;
		this.c = c;
	}
	public int getA()
	{
		return a;
	}
	public short  getB()
	{
		return b;
	}
	public long getC()
	{
		return c;
	}
	public void  setA(int val1)
	{
		this.a= val1;
	}
	public void  setB(short val2)
	{
		this.b= val2;
	}
	public void  setC(short val3)
	{
		this.c= val3;
	}
	public long Somme(int a, long c )
	{
		long s;
		s=a+b;
		return s;
	}
	public int Factorial(int a)
	{
		int f=1;
		for(int i=2;i<=a;i++)
		{
			f=f*i;
		}
		return f;
	}

}
