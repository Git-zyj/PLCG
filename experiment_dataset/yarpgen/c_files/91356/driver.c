#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)3311;
unsigned long long int var_7 = 16633263303971886656ULL;
signed char var_10 = (signed char)-14;
int zero = 0;
short var_13 = (short)-25818;
unsigned long long int var_14 = 5933136815756050620ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
