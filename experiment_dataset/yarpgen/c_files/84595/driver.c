#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)224;
signed char var_7 = (signed char)68;
unsigned long long int var_8 = 2644561112363375783ULL;
int zero = 0;
unsigned long long int var_18 = 1465201110188855269ULL;
unsigned short var_19 = (unsigned short)21657;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
