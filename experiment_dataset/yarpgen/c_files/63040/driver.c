#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)98;
signed char var_7 = (signed char)59;
unsigned short var_9 = (unsigned short)40142;
unsigned char var_13 = (unsigned char)246;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-18335;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
