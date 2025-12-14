#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9659169659793076129ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 5147161193998844692ULL;
unsigned int var_11 = 1546373107U;
int var_18 = 1407677605;
int zero = 0;
short var_20 = (short)-8703;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
