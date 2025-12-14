#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7210650742563405119ULL;
unsigned int var_4 = 2697412785U;
signed char var_8 = (signed char)-10;
short var_10 = (short)-15768;
unsigned char var_14 = (unsigned char)142;
unsigned int var_16 = 1285131560U;
int zero = 0;
unsigned char var_17 = (unsigned char)22;
unsigned int var_18 = 3112160912U;
int var_19 = 989663770;
unsigned short var_20 = (unsigned short)60512;
unsigned long long int var_21 = 6459069472642121208ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
