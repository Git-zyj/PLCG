#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -522491006;
unsigned char var_2 = (unsigned char)93;
long long int var_8 = 8291335572778349586LL;
int var_10 = -1518082627;
unsigned int var_13 = 2091302645U;
int zero = 0;
signed char var_14 = (signed char)109;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
