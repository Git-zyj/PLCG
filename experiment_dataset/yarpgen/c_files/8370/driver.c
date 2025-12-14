#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7396;
unsigned int var_1 = 2326060303U;
unsigned short var_2 = (unsigned short)59456;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 6074566515256186492ULL;
_Bool var_5 = (_Bool)1;
int var_6 = 1980957739;
unsigned long long int var_7 = 9559681870134694267ULL;
signed char var_8 = (signed char)-110;
unsigned long long int var_9 = 11219821274632167352ULL;
unsigned int var_11 = 544483236U;
unsigned int var_12 = 2435488472U;
int zero = 0;
unsigned short var_13 = (unsigned short)42296;
int var_14 = 961361189;
long long int var_15 = -8401369638544170593LL;
unsigned char var_16 = (unsigned char)101;
long long int var_17 = -2334586151476564674LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
