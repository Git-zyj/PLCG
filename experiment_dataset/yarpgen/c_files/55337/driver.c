#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_6 = 6874473917811858770LL;
int var_12 = 543756485;
unsigned char var_14 = (unsigned char)83;
unsigned int var_15 = 2979037523U;
int zero = 0;
unsigned long long int var_17 = 18075200105524749932ULL;
signed char var_18 = (signed char)3;
unsigned long long int var_19 = 12178507750297175066ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
