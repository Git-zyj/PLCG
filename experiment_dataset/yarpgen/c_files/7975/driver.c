#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
int var_2 = -257752956;
long long int var_3 = 3282652815306991865LL;
signed char var_6 = (signed char)103;
signed char var_8 = (signed char)-84;
long long int var_12 = -5938348838151118090LL;
short var_13 = (short)-17228;
int var_14 = 1860875766;
signed char var_15 = (signed char)37;
int zero = 0;
long long int var_16 = 2694502117656886348LL;
unsigned short var_17 = (unsigned short)35600;
long long int var_18 = -7464908108865143894LL;
signed char var_19 = (signed char)89;
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
