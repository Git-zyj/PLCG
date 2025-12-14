#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
unsigned int var_3 = 17322356U;
long long int var_4 = 479609812885878579LL;
long long int var_5 = 5486966147004943206LL;
long long int var_6 = -471384808058016914LL;
unsigned int var_8 = 580677584U;
long long int var_10 = -7079813526683531732LL;
short var_11 = (short)24990;
short var_12 = (short)22831;
unsigned int var_13 = 3561828847U;
unsigned int var_14 = 3655920060U;
int zero = 0;
long long int var_15 = 571122846963855236LL;
long long int var_16 = 951050304578268941LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
