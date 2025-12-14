#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 788177408U;
signed char var_6 = (signed char)92;
unsigned short var_7 = (unsigned short)46462;
unsigned int var_11 = 2949187124U;
signed char var_13 = (signed char)-11;
int zero = 0;
signed char var_20 = (signed char)39;
unsigned short var_21 = (unsigned short)17453;
unsigned int var_22 = 2724875437U;
long long int var_23 = 8321632536628115522LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
