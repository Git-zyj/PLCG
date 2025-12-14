#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)168;
unsigned long long int var_9 = 409159022550229586ULL;
unsigned long long int var_10 = 3314575432847370072ULL;
int var_12 = -706980813;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 1145657628567365927ULL;
int var_18 = -233080713;
signed char var_19 = (signed char)-22;
short var_20 = (short)19085;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
