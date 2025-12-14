#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16487;
int var_12 = -1563103284;
signed char var_13 = (signed char)-90;
short var_14 = (short)14040;
int zero = 0;
unsigned char var_16 = (unsigned char)172;
unsigned int var_17 = 3915278753U;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-25029;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
