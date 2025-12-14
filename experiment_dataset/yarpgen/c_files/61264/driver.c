#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17750;
unsigned short var_1 = (unsigned short)16468;
short var_7 = (short)11169;
unsigned long long int var_9 = 12469622278009775472ULL;
int zero = 0;
short var_11 = (short)30818;
unsigned short var_12 = (unsigned short)55927;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
