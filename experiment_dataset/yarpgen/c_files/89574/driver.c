#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)235;
unsigned long long int var_5 = 14290971175095481070ULL;
long long int var_8 = -5357816612048754133LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15973248517195030428ULL;
unsigned long long int var_15 = 6759774875244108501ULL;
unsigned long long int var_16 = 14349093469212387924ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
