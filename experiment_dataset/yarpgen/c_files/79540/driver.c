#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17543;
unsigned char var_3 = (unsigned char)177;
unsigned char var_4 = (unsigned char)193;
unsigned short var_5 = (unsigned short)36820;
signed char var_6 = (signed char)-44;
unsigned short var_8 = (unsigned short)3291;
int zero = 0;
signed char var_10 = (signed char)25;
short var_11 = (short)23220;
unsigned short var_12 = (unsigned short)22160;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
