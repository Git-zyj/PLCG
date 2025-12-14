#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
unsigned long long int var_2 = 984541547104117506ULL;
signed char var_4 = (signed char)-33;
short var_8 = (short)21269;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4998817906522659429ULL;
void init() {
}

void checksum() {
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
