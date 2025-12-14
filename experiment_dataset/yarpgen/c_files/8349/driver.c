#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17263862465423028754ULL;
int var_4 = -360630673;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)21060;
short var_10 = (short)22929;
long long int var_11 = 4178067275896593996LL;
int var_12 = -581960535;
long long int var_14 = -6228778986884189996LL;
int zero = 0;
signed char var_15 = (signed char)-114;
signed char var_16 = (signed char)46;
unsigned long long int var_17 = 1501115306225207870ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
