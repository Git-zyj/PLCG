#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52019;
unsigned char var_4 = (unsigned char)74;
long long int var_5 = -9188444708954784114LL;
unsigned char var_7 = (unsigned char)105;
unsigned short var_8 = (unsigned short)14032;
int zero = 0;
signed char var_12 = (signed char)45;
signed char var_13 = (signed char)-43;
unsigned short var_14 = (unsigned short)41596;
long long int var_15 = -6420771665331610391LL;
void init() {
}

void checksum() {
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
