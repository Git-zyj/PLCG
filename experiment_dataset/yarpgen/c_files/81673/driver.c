#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)224;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)243;
long long int var_10 = -4150916297505742207LL;
_Bool var_11 = (_Bool)1;
short var_17 = (short)7817;
int zero = 0;
int var_20 = -1646863244;
long long int var_21 = -3161960800001862374LL;
void init() {
}

void checksum() {
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
