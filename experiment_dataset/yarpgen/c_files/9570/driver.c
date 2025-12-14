#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2365;
unsigned int var_8 = 3479184836U;
unsigned long long int var_10 = 17834698211138370688ULL;
unsigned int var_11 = 1076823688U;
long long int var_12 = 4397673366789242193LL;
unsigned int var_13 = 323750379U;
unsigned long long int var_14 = 4482704779556550671ULL;
int zero = 0;
unsigned long long int var_17 = 9785949216606823986ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 16497972304118025267ULL;
long long int var_20 = 8105676486350925535LL;
short var_21 = (short)-9862;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
