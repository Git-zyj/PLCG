#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1187668675;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1684045765U;
unsigned short var_6 = (unsigned short)59826;
unsigned short var_7 = (unsigned short)39590;
signed char var_8 = (signed char)41;
unsigned short var_10 = (unsigned short)11316;
int zero = 0;
int var_11 = 1348208119;
unsigned short var_12 = (unsigned short)27180;
signed char var_13 = (signed char)-76;
long long int var_14 = 7349881600889987463LL;
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
