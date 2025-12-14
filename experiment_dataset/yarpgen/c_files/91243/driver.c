#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1585029044U;
unsigned long long int var_7 = 9782527421628543009ULL;
long long int var_15 = -1377595436153399176LL;
unsigned long long int var_16 = 6892938853233741726ULL;
int zero = 0;
long long int var_18 = 7202169753383097883LL;
signed char var_19 = (signed char)-49;
long long int var_20 = -5019287121118193535LL;
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
