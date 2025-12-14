#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17090269176333051699ULL;
unsigned int var_6 = 475876176U;
unsigned long long int var_9 = 16829194800499828599ULL;
long long int var_10 = -4376722519824139292LL;
int zero = 0;
signed char var_11 = (signed char)-88;
unsigned short var_12 = (unsigned short)5236;
unsigned short var_13 = (unsigned short)2477;
unsigned short var_14 = (unsigned short)52757;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
