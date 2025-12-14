#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7579345923906022784ULL;
unsigned char var_1 = (unsigned char)124;
unsigned int var_4 = 1066611479U;
long long int var_5 = -4113976307717427617LL;
unsigned char var_6 = (unsigned char)86;
int var_8 = 1435859632;
long long int var_9 = 7998534770717488056LL;
int var_11 = 83220554;
unsigned short var_12 = (unsigned short)51457;
unsigned long long int var_14 = 6115446629923831730ULL;
unsigned long long int var_17 = 363499671664635752ULL;
int zero = 0;
unsigned long long int var_18 = 4012807748003896315ULL;
unsigned long long int var_19 = 5035542038770656587ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)9926;
unsigned short var_22 = (unsigned short)14805;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
