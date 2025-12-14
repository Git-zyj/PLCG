#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8309;
long long int var_2 = -1980576383003824312LL;
short var_3 = (short)14292;
short var_4 = (short)23372;
long long int var_5 = 3574086663182720147LL;
long long int var_8 = -86490246750095595LL;
short var_14 = (short)-8703;
int zero = 0;
long long int var_18 = 8838324708215832430LL;
long long int var_19 = -6680746000132910041LL;
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
