#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)190;
signed char var_5 = (signed char)78;
unsigned long long int var_8 = 11192503713793115006ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-27476;
unsigned char var_12 = (unsigned char)126;
int zero = 0;
unsigned long long int var_14 = 17303251845503900652ULL;
unsigned char var_15 = (unsigned char)224;
signed char var_16 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
