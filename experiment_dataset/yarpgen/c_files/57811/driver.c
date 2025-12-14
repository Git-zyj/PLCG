#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3797662447507661898LL;
long long int var_1 = 6105926606515236012LL;
long long int var_2 = -6923233706966318205LL;
long long int var_3 = -7035178493690536937LL;
long long int var_4 = 7957300836654257529LL;
unsigned int var_5 = 2692279610U;
long long int var_6 = -837304666054616391LL;
unsigned short var_8 = (unsigned short)48423;
int zero = 0;
unsigned int var_10 = 1871561152U;
long long int var_11 = 4871498709071385750LL;
unsigned char var_12 = (unsigned char)194;
long long int var_13 = -2193332619071932051LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
