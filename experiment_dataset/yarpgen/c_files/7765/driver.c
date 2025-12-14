#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1439524968;
int var_5 = -1938413049;
short var_7 = (short)6623;
int var_8 = -1290964048;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6725656919979293484LL;
unsigned char var_13 = (unsigned char)254;
unsigned int var_15 = 3482546270U;
int var_16 = 76677270;
int zero = 0;
short var_18 = (short)-25980;
unsigned char var_19 = (unsigned char)249;
signed char var_20 = (signed char)-101;
unsigned short var_21 = (unsigned short)53558;
long long int var_22 = -1342618621427488479LL;
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
