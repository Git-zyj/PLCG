#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27958;
unsigned int var_4 = 3458917788U;
unsigned long long int var_7 = 3606209927001570187ULL;
signed char var_8 = (signed char)23;
signed char var_9 = (signed char)-123;
unsigned long long int var_11 = 2090816027008862062ULL;
unsigned long long int var_13 = 569679540507444736ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -381156729;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
