#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2865684912U;
unsigned long long int var_10 = 16516989006260301725ULL;
unsigned long long int var_12 = 5655162215718408113ULL;
int zero = 0;
unsigned long long int var_16 = 10257590179750210953ULL;
signed char var_17 = (signed char)82;
unsigned long long int var_18 = 8869811309129978561ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
