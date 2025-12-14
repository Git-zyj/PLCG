#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15287;
_Bool var_5 = (_Bool)0;
long long int var_6 = -9140624113929842359LL;
signed char var_7 = (signed char)36;
int var_9 = -502484832;
signed char var_17 = (signed char)-85;
int zero = 0;
unsigned char var_18 = (unsigned char)124;
unsigned int var_19 = 3398075383U;
void init() {
}

void checksum() {
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
