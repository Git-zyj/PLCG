#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2109661221U;
_Bool var_8 = (_Bool)0;
long long int var_15 = 4547772983971715406LL;
int zero = 0;
long long int var_18 = 1617387706011864306LL;
unsigned long long int var_19 = 5806676100442416720ULL;
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
