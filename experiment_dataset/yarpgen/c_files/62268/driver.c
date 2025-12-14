#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29785;
unsigned short var_1 = (unsigned short)52224;
unsigned char var_3 = (unsigned char)94;
unsigned long long int var_7 = 17700492281011892314ULL;
int zero = 0;
int var_16 = -1295381656;
unsigned char var_17 = (unsigned char)80;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
