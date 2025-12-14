#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)236;
unsigned char var_7 = (unsigned char)82;
unsigned char var_8 = (unsigned char)31;
unsigned short var_10 = (unsigned short)17317;
unsigned char var_11 = (unsigned char)104;
int zero = 0;
int var_12 = -1057167749;
unsigned int var_13 = 2924737676U;
unsigned int var_14 = 4238010025U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
