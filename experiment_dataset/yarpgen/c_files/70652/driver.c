#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10136921203366844200ULL;
signed char var_3 = (signed char)-16;
unsigned int var_9 = 293245922U;
int zero = 0;
short var_18 = (short)-19898;
_Bool var_19 = (_Bool)1;
int var_20 = 1088723658;
unsigned int var_21 = 2817308742U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
