#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2616705898996816833LL;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)37;
unsigned long long int var_8 = 465144380886619929ULL;
signed char var_11 = (signed char)78;
int var_14 = -1306441495;
int zero = 0;
unsigned char var_15 = (unsigned char)123;
unsigned char var_16 = (unsigned char)68;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
