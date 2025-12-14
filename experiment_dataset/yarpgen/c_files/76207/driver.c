#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7589380577256309722LL;
unsigned char var_4 = (unsigned char)196;
long long int var_12 = -2188561573202875559LL;
int zero = 0;
short var_14 = (short)1358;
long long int var_15 = -8065878009221779024LL;
long long int var_16 = 7032766013815680968LL;
void init() {
}

void checksum() {
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
