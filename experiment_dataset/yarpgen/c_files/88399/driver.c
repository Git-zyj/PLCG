#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-98;
long long int var_3 = 5045666358460066982LL;
unsigned char var_5 = (unsigned char)97;
long long int var_7 = -4790999485090804806LL;
signed char var_8 = (signed char)56;
short var_9 = (short)19907;
int var_12 = -716141167;
int zero = 0;
int var_13 = -1744922482;
unsigned int var_14 = 3582048200U;
void init() {
}

void checksum() {
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
