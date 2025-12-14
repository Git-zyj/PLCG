#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -664103064972387702LL;
unsigned int var_13 = 1255604854U;
unsigned int var_15 = 1889042599U;
int zero = 0;
unsigned int var_18 = 3748226305U;
signed char var_19 = (signed char)-69;
unsigned long long int var_20 = 2053020842055751528ULL;
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
