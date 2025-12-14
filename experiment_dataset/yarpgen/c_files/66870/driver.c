#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_7 = -3219381786230708094LL;
unsigned int var_8 = 3012070343U;
unsigned char var_12 = (unsigned char)187;
int zero = 0;
long long int var_16 = -5793315649111872858LL;
signed char var_17 = (signed char)-2;
short var_18 = (short)-19139;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
