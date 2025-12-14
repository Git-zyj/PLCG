#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3243123132U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 9124665409199747197ULL;
signed char var_6 = (signed char)17;
short var_7 = (short)-22784;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)53311;
long long int var_10 = 2878327651330258994LL;
int zero = 0;
unsigned short var_11 = (unsigned short)45159;
unsigned short var_12 = (unsigned short)33675;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
