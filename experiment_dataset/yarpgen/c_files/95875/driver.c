#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1379585982937774074ULL;
signed char var_2 = (signed char)83;
int var_3 = 261828211;
int var_4 = 1313148797;
unsigned long long int var_6 = 4483817622814032819ULL;
unsigned long long int var_13 = 8630724617440774687ULL;
unsigned short var_17 = (unsigned short)6794;
int zero = 0;
long long int var_20 = -5217398240467275662LL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)5841;
unsigned short var_23 = (unsigned short)33171;
int var_24 = 239299237;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
