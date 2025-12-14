#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1151250043102558761LL;
signed char var_1 = (signed char)115;
unsigned long long int var_5 = 8499091005217379000ULL;
short var_11 = (short)17095;
unsigned long long int var_13 = 1954151961980772875ULL;
int zero = 0;
int var_16 = -1739860961;
long long int var_17 = -4378875979713903169LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
