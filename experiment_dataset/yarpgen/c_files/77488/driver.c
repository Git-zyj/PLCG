#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2091430257;
unsigned long long int var_3 = 6699443697339893374ULL;
long long int var_6 = -4855665706415163563LL;
long long int var_9 = 8546631329630896350LL;
int zero = 0;
unsigned char var_17 = (unsigned char)154;
unsigned int var_18 = 2731022073U;
unsigned int var_19 = 3911992198U;
unsigned long long int var_20 = 14425747989750095818ULL;
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
