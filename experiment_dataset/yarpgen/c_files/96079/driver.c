#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15501398206399547855ULL;
unsigned long long int var_5 = 1079059648454340908ULL;
unsigned int var_6 = 2115747803U;
unsigned long long int var_7 = 17964510699603961957ULL;
unsigned int var_9 = 2193758972U;
int zero = 0;
short var_11 = (short)26621;
unsigned long long int var_12 = 17385348885371390435ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
