#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)21;
unsigned short var_5 = (unsigned short)2655;
int var_7 = 827193211;
unsigned long long int var_8 = 16517102492513442534ULL;
unsigned char var_9 = (unsigned char)214;
int zero = 0;
unsigned short var_11 = (unsigned short)7363;
unsigned long long int var_12 = 17455823480406976418ULL;
signed char var_13 = (signed char)-13;
unsigned long long int var_14 = 7962086165644925793ULL;
unsigned long long int var_15 = 17025921297645224507ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
