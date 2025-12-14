#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18311028409536489049ULL;
short var_2 = (short)4394;
unsigned long long int var_4 = 2900289698043142735ULL;
long long int var_6 = -6240628083268546430LL;
short var_9 = (short)23199;
unsigned long long int var_10 = 12660226198820663750ULL;
unsigned long long int var_11 = 4080797230788341431ULL;
signed char var_14 = (signed char)-30;
unsigned long long int var_17 = 580292151702967704ULL;
int zero = 0;
signed char var_19 = (signed char)71;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)3477;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
