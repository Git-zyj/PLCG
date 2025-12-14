#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12972523597966202ULL;
unsigned short var_11 = (unsigned short)16182;
unsigned short var_13 = (unsigned short)20886;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3372884688U;
unsigned char var_18 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
