#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 567235476;
int var_7 = 675754567;
int var_8 = 1421707667;
unsigned char var_9 = (unsigned char)153;
unsigned char var_11 = (unsigned char)184;
int zero = 0;
int var_12 = 1973828071;
unsigned short var_13 = (unsigned short)4010;
unsigned short var_14 = (unsigned short)56492;
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
