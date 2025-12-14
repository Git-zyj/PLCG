#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3431576567U;
int var_5 = 1671342014;
unsigned long long int var_7 = 15651581354678106525ULL;
short var_10 = (short)-11146;
_Bool var_12 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1973366843U;
long long int var_21 = -8669736378518797909LL;
unsigned short var_22 = (unsigned short)34680;
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
