#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned long long int var_2 = 3144082106075373632ULL;
unsigned long long int var_3 = 2748360864614550748ULL;
unsigned int var_5 = 1877146916U;
unsigned long long int var_7 = 211357647934514629ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5527676436422199825LL;
long long int var_11 = -8305595696048838976LL;
int var_12 = 566240887;
unsigned short var_13 = (unsigned short)55489;
signed char var_14 = (signed char)120;
_Bool var_16 = (_Bool)0;
signed char var_18 = (signed char)82;
int zero = 0;
long long int var_19 = -1990402413577224042LL;
unsigned int var_20 = 4106165118U;
unsigned short var_21 = (unsigned short)41118;
unsigned long long int var_22 = 8875707292869921007ULL;
unsigned short var_23 = (unsigned short)6247;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
