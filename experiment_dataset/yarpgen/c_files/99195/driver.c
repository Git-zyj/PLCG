#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 879117824U;
unsigned short var_2 = (unsigned short)11793;
unsigned short var_5 = (unsigned short)3607;
long long int var_8 = 7007027074946580143LL;
long long int var_9 = -5588245997168145603LL;
int zero = 0;
unsigned char var_18 = (unsigned char)186;
short var_19 = (short)14444;
void init() {
}

void checksum() {
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
