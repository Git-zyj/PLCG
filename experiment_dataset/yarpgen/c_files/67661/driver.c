#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8317770385987108035LL;
int var_1 = 2093811540;
signed char var_6 = (signed char)126;
signed char var_7 = (signed char)0;
unsigned int var_8 = 2394670682U;
short var_11 = (short)24426;
signed char var_12 = (signed char)115;
signed char var_14 = (signed char)107;
unsigned char var_15 = (unsigned char)135;
int var_16 = -1374415362;
unsigned long long int var_17 = 5958736481629617554ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)106;
unsigned int var_20 = 783984892U;
unsigned short var_21 = (unsigned short)13281;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
