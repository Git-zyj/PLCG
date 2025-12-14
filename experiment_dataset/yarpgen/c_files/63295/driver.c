#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44390;
long long int var_2 = -6517640195734934941LL;
long long int var_3 = -3042744269861484931LL;
long long int var_4 = 670180755769762191LL;
int var_6 = -1837106225;
long long int var_8 = -4073959820698288129LL;
unsigned char var_11 = (unsigned char)51;
signed char var_13 = (signed char)35;
int zero = 0;
unsigned int var_14 = 3194026607U;
int var_15 = 896061162;
long long int var_16 = 1092844191972421947LL;
unsigned char var_17 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
