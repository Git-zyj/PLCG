#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 528067702;
short var_1 = (short)20792;
short var_2 = (short)27408;
unsigned long long int var_4 = 10741498970681035016ULL;
signed char var_9 = (signed char)115;
long long int var_10 = 1845060900135546512LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_15 = (short)22941;
int var_16 = -2037317191;
signed char var_17 = (signed char)115;
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
