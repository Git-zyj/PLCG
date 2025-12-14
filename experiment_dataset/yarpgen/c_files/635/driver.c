#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17593290677213256601ULL;
int var_2 = -243721332;
unsigned char var_4 = (unsigned char)20;
unsigned int var_9 = 2056035052U;
signed char var_10 = (signed char)76;
signed char var_11 = (signed char)-95;
int var_12 = 652459169;
int zero = 0;
unsigned short var_13 = (unsigned short)32294;
short var_14 = (short)-29639;
short var_15 = (short)14638;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
