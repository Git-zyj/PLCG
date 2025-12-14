#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4130712592U;
unsigned long long int var_5 = 7319560851197322297ULL;
int var_9 = 712820446;
int zero = 0;
unsigned int var_13 = 340552117U;
unsigned short var_14 = (unsigned short)363;
signed char var_15 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
