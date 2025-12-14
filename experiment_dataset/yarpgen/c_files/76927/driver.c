#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
long long int var_1 = 151605367744271338LL;
unsigned int var_3 = 905150846U;
unsigned char var_4 = (unsigned char)184;
unsigned short var_6 = (unsigned short)4580;
long long int var_14 = 2188967682633662978LL;
unsigned short var_16 = (unsigned short)29293;
unsigned int var_19 = 3828724892U;
int zero = 0;
unsigned char var_20 = (unsigned char)57;
short var_21 = (short)27315;
void init() {
}

void checksum() {
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
