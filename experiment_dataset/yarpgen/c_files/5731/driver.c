#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45840;
signed char var_1 = (signed char)85;
long long int var_3 = -3654030168779310769LL;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)18226;
int zero = 0;
long long int var_12 = -8832993386929138105LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
