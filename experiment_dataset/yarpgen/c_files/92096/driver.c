#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2303436820924525489LL;
long long int var_11 = 6254127364221085589LL;
unsigned short var_14 = (unsigned short)56657;
int zero = 0;
long long int var_19 = -6984273015096189715LL;
long long int var_20 = 7823367262212782420LL;
int var_21 = 579945532;
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
