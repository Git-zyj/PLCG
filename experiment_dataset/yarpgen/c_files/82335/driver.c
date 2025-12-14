#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12979208113037557678ULL;
unsigned int var_6 = 3637656789U;
unsigned char var_13 = (unsigned char)31;
int zero = 0;
unsigned int var_18 = 2272232377U;
int var_19 = -1255213529;
unsigned long long int var_20 = 6377214886770530753ULL;
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
