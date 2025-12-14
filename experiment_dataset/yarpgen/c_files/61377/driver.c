#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4184365414U;
short var_5 = (short)29352;
unsigned long long int var_9 = 3266537713983573827ULL;
int zero = 0;
signed char var_13 = (signed char)-103;
unsigned int var_14 = 1416718347U;
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
