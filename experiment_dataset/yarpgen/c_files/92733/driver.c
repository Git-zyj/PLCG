#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_6 = 5832225963359333530LL;
_Bool var_7 = (_Bool)0;
int var_9 = -1666891444;
unsigned short var_11 = (unsigned short)56101;
int var_12 = 1938826137;
signed char var_14 = (signed char)1;
signed char var_15 = (signed char)-80;
int zero = 0;
unsigned char var_17 = (unsigned char)135;
long long int var_18 = 7144599632456390870LL;
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
