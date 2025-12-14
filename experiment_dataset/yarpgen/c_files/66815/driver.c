#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38059;
unsigned char var_2 = (unsigned char)158;
_Bool var_4 = (_Bool)0;
unsigned char var_10 = (unsigned char)204;
short var_12 = (short)-17289;
long long int var_13 = 1498759387159717629LL;
signed char var_14 = (signed char)81;
int var_18 = 1980916486;
unsigned int var_19 = 3676223094U;
int zero = 0;
unsigned long long int var_20 = 16430296906585023454ULL;
short var_21 = (short)25917;
short var_22 = (short)-18964;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
