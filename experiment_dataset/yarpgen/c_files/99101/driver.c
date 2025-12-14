#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -533995292;
unsigned char var_10 = (unsigned char)184;
unsigned short var_18 = (unsigned short)19120;
int zero = 0;
unsigned long long int var_19 = 7168449172754087828ULL;
short var_20 = (short)21890;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1447701119U;
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
