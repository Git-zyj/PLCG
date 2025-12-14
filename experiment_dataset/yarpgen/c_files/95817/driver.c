#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7306850165060534772ULL;
_Bool var_6 = (_Bool)1;
long long int var_9 = -8005190097734133692LL;
long long int var_11 = -4644460198648628448LL;
int zero = 0;
unsigned long long int var_13 = 163493608905199897ULL;
signed char var_14 = (signed char)-123;
int var_15 = 1175570692;
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
