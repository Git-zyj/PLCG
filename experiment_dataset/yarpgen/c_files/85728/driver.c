#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)121;
unsigned short var_8 = (unsigned short)4798;
unsigned short var_9 = (unsigned short)16416;
int zero = 0;
int var_10 = 467094439;
signed char var_11 = (signed char)4;
short var_12 = (short)13931;
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
