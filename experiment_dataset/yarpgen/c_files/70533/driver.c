#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3503768562832974862ULL;
unsigned char var_2 = (unsigned char)60;
unsigned long long int var_3 = 15412485565484831999ULL;
int var_4 = -1110584253;
unsigned int var_6 = 2303451836U;
unsigned char var_9 = (unsigned char)167;
unsigned short var_11 = (unsigned short)28136;
int zero = 0;
unsigned long long int var_12 = 11945573343779400929ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
