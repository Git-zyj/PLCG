#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12672296427677664892ULL;
unsigned char var_1 = (unsigned char)45;
int var_2 = -450759024;
int var_3 = -931769687;
long long int var_5 = 6628481723669907423LL;
unsigned long long int var_8 = 14237331188617287424ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)38599;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = 2077161981940523602LL;
_Bool var_19 = (_Bool)0;
int var_20 = -652845486;
int var_21 = -780355091;
unsigned short var_22 = (unsigned short)26482;
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
