#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14047;
unsigned short var_1 = (unsigned short)34587;
unsigned long long int var_5 = 3483146444957757815ULL;
signed char var_6 = (signed char)-47;
short var_8 = (short)6112;
unsigned char var_10 = (unsigned char)8;
unsigned short var_13 = (unsigned short)54687;
unsigned short var_15 = (unsigned short)38176;
short var_16 = (short)-27109;
unsigned short var_17 = (unsigned short)20674;
int zero = 0;
short var_18 = (short)-14438;
signed char var_19 = (signed char)43;
short var_20 = (short)8538;
short var_21 = (short)-28265;
signed char var_22 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
