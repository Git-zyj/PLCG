#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2774279455370562943ULL;
long long int var_3 = 634151757954404015LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2523225432U;
unsigned long long int var_8 = 704929593784816685ULL;
int zero = 0;
short var_10 = (short)-25444;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
