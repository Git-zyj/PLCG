#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2784222909266924275LL;
int var_10 = -73190045;
unsigned char var_11 = (unsigned char)118;
signed char var_12 = (signed char)119;
unsigned char var_13 = (unsigned char)45;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)114;
long long int var_16 = 3911021614331040899LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 12937474762303174905ULL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
