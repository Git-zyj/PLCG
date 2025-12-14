#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2113346638719170855LL;
unsigned char var_2 = (unsigned char)129;
unsigned char var_3 = (unsigned char)15;
unsigned char var_4 = (unsigned char)44;
signed char var_7 = (signed char)99;
unsigned char var_9 = (unsigned char)53;
unsigned char var_11 = (unsigned char)119;
unsigned char var_12 = (unsigned char)197;
unsigned short var_13 = (unsigned short)14259;
unsigned long long int var_14 = 12112551917059542061ULL;
unsigned short var_17 = (unsigned short)5009;
int zero = 0;
long long int var_18 = 2294110050411841357LL;
short var_19 = (short)-6370;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
