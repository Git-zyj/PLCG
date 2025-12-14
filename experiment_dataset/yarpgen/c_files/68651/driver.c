#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
unsigned short var_2 = (unsigned short)35888;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 7028605321799803580ULL;
unsigned char var_12 = (unsigned char)27;
_Bool var_14 = (_Bool)1;
int var_15 = -1104966756;
unsigned long long int var_16 = 10952907259092520790ULL;
long long int var_17 = 7929492459407424312LL;
int zero = 0;
int var_19 = 1492130441;
short var_20 = (short)26847;
unsigned short var_21 = (unsigned short)18465;
void init() {
}

void checksum() {
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
