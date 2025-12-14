#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12949165474063141059ULL;
unsigned long long int var_1 = 17663282513196343912ULL;
long long int var_2 = 2241992778882120493LL;
signed char var_5 = (signed char)-100;
unsigned long long int var_6 = 6705655702096770747ULL;
unsigned char var_7 = (unsigned char)85;
unsigned short var_9 = (unsigned short)36085;
long long int var_10 = 1995581257309933398LL;
unsigned long long int var_12 = 10874806535077428888ULL;
int zero = 0;
short var_13 = (short)17675;
int var_14 = 1053923288;
int var_15 = -1582568234;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
