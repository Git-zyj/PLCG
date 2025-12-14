#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7598346163985330160LL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)159;
long long int var_6 = 4780175658318304011LL;
unsigned long long int var_8 = 5904113319404232392ULL;
int zero = 0;
short var_10 = (short)29179;
unsigned long long int var_11 = 17883784760670163802ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17234445553586967810ULL;
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
