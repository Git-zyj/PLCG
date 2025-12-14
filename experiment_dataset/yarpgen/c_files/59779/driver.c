#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)143;
unsigned long long int var_2 = 5426077427560299536ULL;
long long int var_3 = 3558224246083604426LL;
unsigned short var_4 = (unsigned short)33690;
long long int var_5 = 4882317451080209535LL;
signed char var_6 = (signed char)-2;
short var_7 = (short)-6273;
int zero = 0;
unsigned char var_10 = (unsigned char)227;
unsigned char var_11 = (unsigned char)53;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)13042;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
