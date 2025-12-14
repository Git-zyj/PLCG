#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32660;
int var_2 = 1782926386;
signed char var_3 = (signed char)-47;
unsigned short var_5 = (unsigned short)58964;
unsigned short var_6 = (unsigned short)11367;
unsigned int var_8 = 2564043285U;
int var_9 = -1850363541;
short var_10 = (short)-29604;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2261323298U;
int zero = 0;
signed char var_14 = (signed char)-2;
long long int var_15 = 8223231118203061723LL;
unsigned char var_16 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
