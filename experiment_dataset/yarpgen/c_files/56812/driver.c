#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 5891254713047948922LL;
int var_6 = 1727085237;
unsigned int var_7 = 4158713008U;
unsigned long long int var_8 = 17730518426462811766ULL;
signed char var_9 = (signed char)-43;
long long int var_10 = -1843046127554181280LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)89;
unsigned int var_18 = 3510384095U;
int zero = 0;
unsigned long long int var_19 = 6425734112156953026ULL;
long long int var_20 = -8748849774664278436LL;
void init() {
}

void checksum() {
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
