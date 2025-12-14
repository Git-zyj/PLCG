#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14774482028556193621ULL;
unsigned char var_3 = (unsigned char)167;
int var_4 = 1365293690;
unsigned short var_5 = (unsigned short)57716;
unsigned short var_6 = (unsigned short)6794;
unsigned short var_9 = (unsigned short)54978;
unsigned int var_10 = 1876668428U;
long long int var_11 = -8839171981192675800LL;
int zero = 0;
unsigned int var_14 = 3875603851U;
unsigned short var_15 = (unsigned short)47640;
unsigned char var_16 = (unsigned char)3;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
