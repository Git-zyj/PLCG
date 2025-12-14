#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4216;
unsigned long long int var_2 = 2035964777048996309ULL;
short var_4 = (short)8351;
unsigned short var_6 = (unsigned short)48194;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)121;
unsigned long long int var_11 = 17881544822058111198ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
