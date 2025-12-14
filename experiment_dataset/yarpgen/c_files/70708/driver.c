#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8955;
signed char var_7 = (signed char)-100;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_17 = -807404085878001739LL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)62959;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
