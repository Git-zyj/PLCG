#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-21612;
unsigned int var_11 = 1621039590U;
unsigned short var_14 = (unsigned short)6242;
int zero = 0;
unsigned char var_17 = (unsigned char)119;
unsigned long long int var_18 = 16075837688842549807ULL;
unsigned long long int var_19 = 5044123921399878675ULL;
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
