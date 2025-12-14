#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 10998488129794144160ULL;
unsigned int var_2 = 1997807935U;
long long int var_7 = 5892326421878624661LL;
unsigned char var_9 = (unsigned char)156;
short var_11 = (short)27248;
_Bool var_13 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)6987;
unsigned int var_18 = 1390624773U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 988509542U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
