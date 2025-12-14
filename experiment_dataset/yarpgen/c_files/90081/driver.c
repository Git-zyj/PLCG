#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15202352686539812200ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-1988;
unsigned long long int var_4 = 4260370003996072766ULL;
int var_6 = -1363953344;
unsigned long long int var_7 = 7858543236766639591ULL;
_Bool var_10 = (_Bool)1;
long long int var_13 = 5521640609776650677LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3027124378U;
unsigned int var_16 = 3035202880U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
