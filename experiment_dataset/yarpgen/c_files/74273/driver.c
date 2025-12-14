#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62675;
unsigned long long int var_8 = 2557093863533129739ULL;
short var_9 = (short)32201;
unsigned long long int var_11 = 3896088461087710730ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)202;
unsigned int var_19 = 1410751888U;
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
