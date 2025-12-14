#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3322327510U;
short var_1 = (short)-8018;
signed char var_7 = (signed char)-89;
int var_8 = -580383329;
unsigned int var_10 = 2467660415U;
int zero = 0;
int var_12 = -1215922955;
unsigned short var_13 = (unsigned short)32542;
unsigned long long int var_14 = 17178172638647906375ULL;
unsigned char var_15 = (unsigned char)139;
signed char var_16 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
