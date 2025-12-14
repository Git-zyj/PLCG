#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)136;
long long int var_4 = 6488048052792623320LL;
unsigned char var_5 = (unsigned char)91;
unsigned char var_8 = (unsigned char)170;
unsigned char var_9 = (unsigned char)197;
unsigned short var_12 = (unsigned short)53687;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_17 = 9127395951831779736LL;
long long int var_18 = 6241463638870502082LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
