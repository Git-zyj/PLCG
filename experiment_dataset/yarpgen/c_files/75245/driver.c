#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
unsigned long long int var_5 = 2843686021872837871ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)15265;
int zero = 0;
signed char var_12 = (signed char)-76;
unsigned int var_13 = 540115270U;
unsigned short var_14 = (unsigned short)59147;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
