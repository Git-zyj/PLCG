#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-3;
long long int var_11 = 444251588266666646LL;
long long int var_14 = 2947241076902520029LL;
long long int var_16 = -6265773983603935547LL;
int zero = 0;
unsigned short var_19 = (unsigned short)62301;
signed char var_20 = (signed char)83;
long long int var_21 = 6555328920169218825LL;
unsigned short var_22 = (unsigned short)51514;
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
