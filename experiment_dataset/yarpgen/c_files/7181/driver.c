#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29658;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-8635;
signed char var_10 = (signed char)53;
int zero = 0;
unsigned long long int var_11 = 14383155681383684754ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 3504630618008966572ULL;
unsigned long long int var_14 = 17917649104033201972ULL;
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
