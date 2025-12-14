#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8977595281984453818LL;
signed char var_2 = (signed char)28;
signed char var_3 = (signed char)5;
int var_8 = -532167852;
signed char var_9 = (signed char)-24;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-16512;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -2054902080;
signed char var_17 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
