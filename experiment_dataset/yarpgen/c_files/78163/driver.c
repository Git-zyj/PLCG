#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 681910568860801449ULL;
unsigned long long int var_5 = 13492142240585886701ULL;
unsigned int var_7 = 3498358091U;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 11985300312301385565ULL;
short var_16 = (short)-5177;
unsigned char var_17 = (unsigned char)42;
int zero = 0;
short var_20 = (short)-3291;
int var_21 = 1470214775;
unsigned long long int var_22 = 3287699619233952229ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
