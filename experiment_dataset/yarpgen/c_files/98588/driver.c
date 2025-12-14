#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 856856336057512053ULL;
unsigned long long int var_2 = 5413237348001712198ULL;
int var_3 = -449751443;
unsigned short var_7 = (unsigned short)16798;
_Bool var_9 = (_Bool)1;
long long int var_11 = -6212816547362358942LL;
int zero = 0;
long long int var_12 = 7591452802244998248LL;
long long int var_13 = -3807335441424755999LL;
unsigned short var_14 = (unsigned short)32743;
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
