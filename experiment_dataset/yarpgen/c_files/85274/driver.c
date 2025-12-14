#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 3064887180457268727LL;
long long int var_9 = -4314693549038183750LL;
unsigned int var_12 = 3313829069U;
int var_14 = -183992373;
unsigned char var_17 = (unsigned char)23;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2072108357U;
int var_21 = -17028217;
unsigned int var_22 = 3157343893U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
