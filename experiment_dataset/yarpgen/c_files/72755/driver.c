#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
_Bool var_1 = (_Bool)1;
long long int var_2 = -413591502201157842LL;
long long int var_3 = 7116218245965895206LL;
signed char var_5 = (signed char)36;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 506056292U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 13336615162480302540ULL;
int var_13 = 1209500716;
unsigned short var_14 = (unsigned short)34374;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
