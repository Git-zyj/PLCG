#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30040;
int var_2 = -1162208577;
unsigned int var_3 = 2686700033U;
unsigned char var_4 = (unsigned char)78;
unsigned int var_5 = 1016256234U;
unsigned long long int var_6 = 8172604057926955781ULL;
unsigned char var_8 = (unsigned char)212;
unsigned char var_9 = (unsigned char)17;
short var_10 = (short)14075;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)1142;
void init() {
}

void checksum() {
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
