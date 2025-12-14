#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1276951070;
unsigned long long int var_6 = 2214584911309973911ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 4374083257433268091ULL;
int zero = 0;
unsigned long long int var_12 = 7709939962612892273ULL;
signed char var_13 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
