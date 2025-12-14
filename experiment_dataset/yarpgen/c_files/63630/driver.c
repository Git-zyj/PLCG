#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
signed char var_2 = (signed char)106;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)47;
unsigned char var_12 = (unsigned char)18;
unsigned int var_14 = 3460641460U;
unsigned int var_16 = 2273496925U;
int zero = 0;
unsigned int var_17 = 2673627784U;
_Bool var_18 = (_Bool)1;
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
