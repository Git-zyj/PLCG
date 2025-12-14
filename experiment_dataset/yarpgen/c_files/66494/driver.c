#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)82;
short var_5 = (short)26735;
short var_7 = (short)15965;
int var_9 = -114030145;
unsigned char var_11 = (unsigned char)30;
long long int var_12 = -400215758366244280LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)33;
_Bool var_16 = (_Bool)0;
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
