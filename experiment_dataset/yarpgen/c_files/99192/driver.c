#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
signed char var_1 = (signed char)-35;
signed char var_2 = (signed char)-118;
unsigned char var_7 = (unsigned char)169;
short var_14 = (short)24220;
unsigned short var_16 = (unsigned short)52704;
int zero = 0;
short var_18 = (short)-24299;
unsigned short var_19 = (unsigned short)40158;
void init() {
}

void checksum() {
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
