#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12873224357651456353ULL;
unsigned int var_2 = 528684875U;
signed char var_5 = (signed char)20;
long long int var_6 = 5385675503385637219LL;
int zero = 0;
unsigned char var_10 = (unsigned char)58;
long long int var_11 = 5616620675252673074LL;
long long int var_12 = -3396238197938524419LL;
unsigned char var_13 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
