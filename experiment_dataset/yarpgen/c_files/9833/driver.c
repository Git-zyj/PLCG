#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1480057400;
unsigned long long int var_3 = 12735011345748558038ULL;
short var_4 = (short)-4901;
signed char var_6 = (signed char)9;
unsigned char var_7 = (unsigned char)151;
signed char var_9 = (signed char)-54;
signed char var_11 = (signed char)80;
signed char var_16 = (signed char)-108;
int zero = 0;
unsigned long long int var_20 = 15683815276430643723ULL;
signed char var_21 = (signed char)-54;
unsigned char var_22 = (unsigned char)144;
unsigned short var_23 = (unsigned short)20604;
unsigned char var_24 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
