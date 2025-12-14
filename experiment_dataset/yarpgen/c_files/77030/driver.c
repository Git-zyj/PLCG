#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 318035220;
long long int var_2 = 3242447875728302495LL;
signed char var_3 = (signed char)-59;
unsigned long long int var_4 = 4405799739133283315ULL;
signed char var_5 = (signed char)-109;
signed char var_7 = (signed char)-46;
unsigned short var_8 = (unsigned short)45021;
unsigned int var_9 = 1066193979U;
int zero = 0;
unsigned long long int var_10 = 3835468896264521883ULL;
int var_11 = 262573039;
unsigned short var_12 = (unsigned short)64721;
unsigned int var_13 = 2634089249U;
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
