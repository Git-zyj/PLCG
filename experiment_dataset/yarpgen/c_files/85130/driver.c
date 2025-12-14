#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2811853122596430376LL;
short var_3 = (short)-4205;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4315802132082906908LL;
short var_15 = (short)24138;
int zero = 0;
int var_16 = -1801803086;
signed char var_17 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
