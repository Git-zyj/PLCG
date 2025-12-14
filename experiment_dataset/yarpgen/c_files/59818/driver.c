#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)3952;
short var_6 = (short)14740;
unsigned char var_8 = (unsigned char)234;
int zero = 0;
unsigned int var_11 = 3501061203U;
signed char var_12 = (signed char)-91;
unsigned char var_13 = (unsigned char)138;
unsigned short var_14 = (unsigned short)40585;
unsigned char var_15 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
