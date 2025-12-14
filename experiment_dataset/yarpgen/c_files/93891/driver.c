#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)10284;
signed char var_6 = (signed char)-121;
unsigned char var_10 = (unsigned char)249;
signed char var_14 = (signed char)-10;
int zero = 0;
signed char var_17 = (signed char)116;
unsigned short var_18 = (unsigned short)25114;
signed char var_19 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
