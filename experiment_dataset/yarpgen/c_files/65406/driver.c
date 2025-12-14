#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33929;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1978684946U;
unsigned char var_9 = (unsigned char)37;
int zero = 0;
unsigned int var_12 = 1946022716U;
int var_13 = -1520728978;
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
