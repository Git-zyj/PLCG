#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13015252966483378864ULL;
unsigned long long int var_2 = 11867911009877156455ULL;
int var_13 = 1234324921;
long long int var_14 = -8277007585715610230LL;
int zero = 0;
unsigned long long int var_18 = 1041605388317151718ULL;
unsigned short var_19 = (unsigned short)40243;
unsigned long long int var_20 = 16386575173613312742ULL;
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
