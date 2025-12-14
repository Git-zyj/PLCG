#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)-4957;
int var_16 = -954675306;
int zero = 0;
short var_17 = (short)-5177;
long long int var_18 = -1836572410211314031LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 7646701041121836446ULL;
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
