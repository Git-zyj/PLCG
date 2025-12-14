#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7030916151881943867LL;
signed char var_4 = (signed char)44;
signed char var_5 = (signed char)127;
long long int var_6 = -6700696261759016527LL;
long long int var_7 = -2161027122456139739LL;
long long int var_16 = -4376711470081999591LL;
signed char var_18 = (signed char)-57;
int zero = 0;
long long int var_19 = 3145288538085724952LL;
signed char var_20 = (signed char)53;
long long int var_21 = -5090683011426742280LL;
long long int var_22 = -4093496417649696511LL;
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
