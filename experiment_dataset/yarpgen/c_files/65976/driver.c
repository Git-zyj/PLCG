#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
unsigned long long int var_2 = 12523436052563391116ULL;
long long int var_6 = 2670542138119171528LL;
unsigned int var_7 = 2130005341U;
unsigned char var_8 = (unsigned char)35;
unsigned int var_9 = 237511808U;
signed char var_13 = (signed char)33;
signed char var_14 = (signed char)-67;
int zero = 0;
int var_16 = 839578113;
unsigned int var_17 = 2674985980U;
long long int var_18 = -1561766000776135892LL;
long long int var_19 = -1931866114718672794LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
