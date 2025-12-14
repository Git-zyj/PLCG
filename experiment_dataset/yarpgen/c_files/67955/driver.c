#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14692;
unsigned int var_2 = 2146073878U;
signed char var_9 = (signed char)-40;
unsigned int var_10 = 3387649227U;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-11786;
unsigned char var_17 = (unsigned char)9;
int zero = 0;
unsigned short var_18 = (unsigned short)2665;
unsigned short var_19 = (unsigned short)12563;
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
