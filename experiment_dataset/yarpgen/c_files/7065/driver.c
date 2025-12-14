#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1909837918;
int var_6 = -671716112;
unsigned long long int var_7 = 11793969080873473342ULL;
short var_8 = (short)-1964;
int zero = 0;
unsigned char var_12 = (unsigned char)217;
unsigned long long int var_13 = 1683873395727226043ULL;
unsigned short var_14 = (unsigned short)65452;
unsigned long long int var_15 = 16707936410442167266ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
