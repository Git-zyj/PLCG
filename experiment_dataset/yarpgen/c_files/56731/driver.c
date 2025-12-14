#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8543153558836856568LL;
signed char var_1 = (signed char)44;
short var_3 = (short)-15809;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)172;
long long int var_9 = -2463234119296834240LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5848661716650779622ULL;
signed char var_21 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
