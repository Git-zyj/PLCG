#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)191;
unsigned char var_4 = (unsigned char)22;
unsigned short var_5 = (unsigned short)12289;
short var_6 = (short)25411;
unsigned long long int var_7 = 16729242548522304571ULL;
int zero = 0;
short var_11 = (short)3157;
signed char var_12 = (signed char)6;
short var_13 = (short)-30632;
unsigned long long int var_14 = 17853466604227362484ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
