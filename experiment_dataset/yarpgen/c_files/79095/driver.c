#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)125;
unsigned int var_7 = 419444083U;
unsigned char var_8 = (unsigned char)182;
unsigned int var_11 = 2841679363U;
int var_13 = -1603025547;
unsigned int var_14 = 1637943471U;
int zero = 0;
int var_20 = 1763310533;
unsigned long long int var_21 = 10399308593273436039ULL;
long long int var_22 = -356636167080468914LL;
unsigned short var_23 = (unsigned short)64586;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
