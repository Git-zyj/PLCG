#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1923715354866359027LL;
int var_5 = 546701215;
int var_6 = -143083751;
int var_7 = 1056252969;
unsigned long long int var_8 = 9055158887326646908ULL;
unsigned short var_9 = (unsigned short)8482;
unsigned long long int var_11 = 17174455506800964998ULL;
int zero = 0;
unsigned long long int var_12 = 17511766269339643978ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)122;
unsigned long long int var_15 = 12653978161964650290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
