#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)11;
long long int var_2 = 765298138852202597LL;
unsigned char var_4 = (unsigned char)40;
short var_7 = (short)-1315;
int var_8 = -663957537;
unsigned int var_9 = 1458461396U;
int var_10 = -748284216;
unsigned char var_11 = (unsigned char)186;
signed char var_12 = (signed char)-8;
long long int var_13 = -8649898017972253854LL;
int zero = 0;
signed char var_14 = (signed char)44;
signed char var_15 = (signed char)-102;
unsigned long long int var_16 = 1226274333387627328ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
