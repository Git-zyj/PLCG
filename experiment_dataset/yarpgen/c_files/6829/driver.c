#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)176;
unsigned char var_8 = (unsigned char)254;
unsigned long long int var_9 = 11005854221930861232ULL;
unsigned short var_12 = (unsigned short)12832;
int zero = 0;
short var_17 = (short)20529;
signed char var_18 = (signed char)-82;
unsigned char var_19 = (unsigned char)195;
unsigned short var_20 = (unsigned short)3463;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
