#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10708521442558074848ULL;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)33;
signed char var_7 = (signed char)75;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)164;
unsigned long long int var_13 = 13080417121578885002ULL;
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
