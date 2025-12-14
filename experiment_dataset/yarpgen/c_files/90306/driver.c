#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2837629150U;
int var_4 = -1308863017;
signed char var_6 = (signed char)-21;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2293865162U;
int zero = 0;
unsigned int var_10 = 4205153281U;
_Bool var_11 = (_Bool)1;
long long int var_12 = 3536832797924711846LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
