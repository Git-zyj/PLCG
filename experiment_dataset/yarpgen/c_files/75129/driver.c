#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-25332;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)120;
unsigned int var_13 = 1534495725U;
int var_17 = -1187661360;
int zero = 0;
long long int var_19 = -7000663392533079544LL;
unsigned char var_20 = (unsigned char)165;
unsigned char var_21 = (unsigned char)191;
unsigned char var_22 = (unsigned char)255;
signed char var_23 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
