#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7483;
signed char var_1 = (signed char)49;
unsigned short var_9 = (unsigned short)61662;
_Bool var_10 = (_Bool)0;
short var_14 = (short)-17907;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)82;
unsigned long long int var_17 = 10666755328054123946ULL;
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
