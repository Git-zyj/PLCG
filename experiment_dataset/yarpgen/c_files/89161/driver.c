#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned char var_3 = (unsigned char)3;
unsigned int var_8 = 3584796842U;
unsigned short var_16 = (unsigned short)51254;
int zero = 0;
unsigned char var_18 = (unsigned char)142;
_Bool var_19 = (_Bool)1;
long long int var_20 = 4871869224912163851LL;
int var_21 = 1226821389;
unsigned short var_22 = (unsigned short)11078;
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
