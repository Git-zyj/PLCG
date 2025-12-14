#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2731156480U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)80;
short var_9 = (short)-4225;
int zero = 0;
long long int var_12 = 8720859668797308018LL;
unsigned char var_13 = (unsigned char)171;
long long int var_14 = 4525477477850000127LL;
void init() {
}

void checksum() {
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
