#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31460;
int var_5 = 215671466;
short var_8 = (short)31775;
short var_14 = (short)-4627;
unsigned int var_16 = 2659719982U;
int zero = 0;
unsigned short var_20 = (unsigned short)28483;
signed char var_21 = (signed char)-47;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 3385060807U;
unsigned char var_25 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
