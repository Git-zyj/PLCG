#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7536765373933872881LL;
unsigned char var_3 = (unsigned char)196;
unsigned char var_4 = (unsigned char)122;
signed char var_9 = (signed char)78;
signed char var_10 = (signed char)-19;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)49506;
signed char var_15 = (signed char)-34;
unsigned char var_16 = (unsigned char)154;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 17110091577968029174ULL;
unsigned short var_19 = (unsigned short)8775;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
