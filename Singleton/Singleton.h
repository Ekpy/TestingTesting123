#include <string>

class Singleton {
public:
	static Singleton* Instance();
	void writeToLogFile();
	static void Yvedimas(int B[],int n);
	static int GyventojuSuma(int B[], int n);
	static void Isvedimas (int B[], int n, int skaic);

private:
	Singleton() {};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;
};