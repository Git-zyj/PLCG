#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 69954887;
unsigned char var_5 = (unsigned char)160;
unsigned short var_6 = (unsigned short)25913;
unsigned char var_7 = (unsigned char)243;
long long int var_8 = -409506219088489020LL;
unsigned char var_9 = (unsigned char)74;
int var_10 = -1189633217;
long long int var_12 = -5865914625482223820LL;
unsigned int var_13 = 3958231819U;
long long int var_14 = -7569036425122946123LL;
long long int var_16 = 2358167975552450093LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 1566490620421249840ULL;
unsigned short var_19 = (unsigned short)16747;
void init() {
}

void checksum() {
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
