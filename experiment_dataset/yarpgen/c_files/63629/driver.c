#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43521;
int var_7 = -2138400357;
signed char var_11 = (signed char)11;
long long int var_12 = -4257327000946438395LL;
unsigned long long int var_13 = 2595640132069363248ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 147974702U;
unsigned char var_19 = (unsigned char)133;
unsigned long long int var_20 = 12615560814770286496ULL;
signed char var_21 = (signed char)-106;
signed char var_22 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
