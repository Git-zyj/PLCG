#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5017643795426876689LL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)16;
short var_7 = (short)20854;
long long int var_8 = 1997590079301165285LL;
unsigned long long int var_9 = 7386936160786979917ULL;
unsigned long long int var_10 = 1887922248311922704ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)184;
unsigned long long int var_12 = 9616199305488511344ULL;
signed char var_13 = (signed char)76;
unsigned long long int var_14 = 8136647963185556668ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
