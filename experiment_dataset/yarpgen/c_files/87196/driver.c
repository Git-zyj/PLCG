#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4907060922524611929LL;
long long int var_5 = -8524684065165741650LL;
long long int var_7 = -1576066862041352373LL;
unsigned char var_8 = (unsigned char)195;
unsigned short var_10 = (unsigned short)31069;
int zero = 0;
unsigned char var_14 = (unsigned char)38;
long long int var_15 = -7064659686692240860LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
