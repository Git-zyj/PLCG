#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8487608865808540898LL;
signed char var_1 = (signed char)-53;
unsigned int var_2 = 446786717U;
unsigned char var_3 = (unsigned char)26;
unsigned short var_7 = (unsigned short)24467;
_Bool var_9 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)64197;
signed char var_17 = (signed char)11;
long long int var_18 = -8760485367802804733LL;
unsigned long long int var_19 = 5360595328620814441ULL;
unsigned short var_20 = (unsigned short)49281;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
