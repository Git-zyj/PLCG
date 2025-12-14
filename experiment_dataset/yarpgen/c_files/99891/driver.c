#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17679050597749105020ULL;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 10213962542695810235ULL;
signed char var_5 = (signed char)110;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-32344;
int zero = 0;
long long int var_10 = -8584638040897099029LL;
unsigned char var_11 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
