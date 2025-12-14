#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8446962286720460216LL;
short var_6 = (short)-11158;
unsigned short var_8 = (unsigned short)64972;
_Bool var_9 = (_Bool)0;
long long int var_15 = -5258436892971027737LL;
int zero = 0;
int var_17 = -609528486;
unsigned short var_18 = (unsigned short)30099;
unsigned int var_19 = 3352402990U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
