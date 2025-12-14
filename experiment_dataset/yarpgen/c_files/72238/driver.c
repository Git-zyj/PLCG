#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
unsigned short var_6 = (unsigned short)63451;
unsigned char var_8 = (unsigned char)80;
unsigned int var_10 = 2198233927U;
unsigned char var_12 = (unsigned char)49;
int zero = 0;
unsigned char var_13 = (unsigned char)82;
unsigned long long int var_14 = 11698734384107589623ULL;
unsigned char var_15 = (unsigned char)127;
unsigned short var_16 = (unsigned short)18400;
void init() {
}

void checksum() {
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
