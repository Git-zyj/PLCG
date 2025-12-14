#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)186;
signed char var_5 = (signed char)-43;
_Bool var_7 = (_Bool)1;
int var_8 = 1932215629;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-101;
int zero = 0;
signed char var_17 = (signed char)-55;
unsigned short var_18 = (unsigned short)16;
void init() {
}

void checksum() {
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
