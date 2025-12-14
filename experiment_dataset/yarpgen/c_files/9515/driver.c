#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)109;
unsigned short var_5 = (unsigned short)64113;
unsigned short var_7 = (unsigned short)50887;
unsigned short var_12 = (unsigned short)32073;
long long int var_14 = 6806207884135326577LL;
int zero = 0;
signed char var_19 = (signed char)-70;
unsigned short var_20 = (unsigned short)14808;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
