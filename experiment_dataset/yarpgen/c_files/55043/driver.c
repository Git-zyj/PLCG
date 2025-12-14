#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2460821592293223299LL;
unsigned short var_2 = (unsigned short)13368;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)169;
unsigned short var_5 = (unsigned short)37162;
unsigned char var_6 = (unsigned char)23;
short var_7 = (short)-557;
signed char var_8 = (signed char)-14;
short var_9 = (short)-30885;
int zero = 0;
signed char var_10 = (signed char)-24;
unsigned long long int var_11 = 17279057994165800495ULL;
unsigned short var_12 = (unsigned short)18233;
_Bool var_13 = (_Bool)0;
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
