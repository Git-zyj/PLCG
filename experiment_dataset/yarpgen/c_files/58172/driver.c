#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1342992719879886400ULL;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)48;
unsigned short var_10 = (unsigned short)29762;
_Bool var_12 = (_Bool)1;
long long int var_14 = -2521240348620891200LL;
unsigned char var_15 = (unsigned char)137;
int zero = 0;
unsigned char var_16 = (unsigned char)111;
unsigned short var_17 = (unsigned short)57156;
unsigned short var_18 = (unsigned short)57547;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
