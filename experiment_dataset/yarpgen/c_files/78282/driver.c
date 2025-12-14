#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 1457606343U;
unsigned char var_11 = (unsigned char)196;
unsigned int var_12 = 2529138957U;
int var_14 = 1201646204;
unsigned short var_19 = (unsigned short)19661;
int zero = 0;
signed char var_20 = (signed char)103;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
