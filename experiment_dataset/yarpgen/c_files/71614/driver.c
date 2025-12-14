#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 109848022;
unsigned int var_3 = 236561860U;
long long int var_4 = -1423082271272297975LL;
signed char var_5 = (signed char)-117;
unsigned char var_7 = (unsigned char)12;
unsigned int var_10 = 1505875704U;
unsigned long long int var_12 = 15737812605397733419ULL;
signed char var_14 = (signed char)-39;
signed char var_15 = (signed char)38;
int zero = 0;
unsigned int var_16 = 2366403500U;
int var_17 = -2014690839;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-1276;
short var_20 = (short)-15428;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
