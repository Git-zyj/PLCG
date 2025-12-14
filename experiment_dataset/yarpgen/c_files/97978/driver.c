#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -616840395;
unsigned long long int var_5 = 5851671711044120721ULL;
short var_8 = (short)26626;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)46;
long long int var_11 = -2263447441951946848LL;
int zero = 0;
short var_18 = (short)3526;
signed char var_19 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
