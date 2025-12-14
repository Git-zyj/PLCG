#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14665433880556770711ULL;
unsigned char var_3 = (unsigned char)167;
signed char var_6 = (signed char)-63;
unsigned long long int var_8 = 9893887902309047258ULL;
unsigned short var_12 = (unsigned short)56861;
unsigned char var_14 = (unsigned char)170;
unsigned short var_16 = (unsigned short)2640;
int zero = 0;
signed char var_18 = (signed char)-29;
int var_19 = 1374101318;
unsigned char var_20 = (unsigned char)129;
unsigned long long int var_21 = 17922494468157116514ULL;
void init() {
}

void checksum() {
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
