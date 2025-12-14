#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
unsigned long long int var_1 = 1075902889426014751ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2718481203U;
_Bool var_5 = (_Bool)0;
int var_7 = 779624581;
unsigned short var_8 = (unsigned short)31546;
unsigned int var_9 = 4242904968U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 2351628786893887178LL;
unsigned int var_13 = 791306728U;
signed char var_14 = (signed char)-20;
signed char var_15 = (signed char)79;
unsigned char var_16 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
