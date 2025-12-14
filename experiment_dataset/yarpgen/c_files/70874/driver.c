#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-86;
long long int var_8 = 5687250946910588062LL;
unsigned int var_10 = 4187714612U;
int var_11 = 847710294;
int zero = 0;
unsigned char var_15 = (unsigned char)121;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)112;
unsigned char var_18 = (unsigned char)206;
int var_19 = 2043000809;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
