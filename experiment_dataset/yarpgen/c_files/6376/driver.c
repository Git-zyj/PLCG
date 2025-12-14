#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11659628287711522825ULL;
signed char var_9 = (signed char)-113;
short var_10 = (short)5079;
int zero = 0;
short var_19 = (short)-9413;
unsigned int var_20 = 2327195299U;
unsigned int var_21 = 3791496281U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
