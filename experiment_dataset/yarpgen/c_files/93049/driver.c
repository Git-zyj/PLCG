#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)34896;
long long int var_7 = 5609783101144818815LL;
unsigned long long int var_12 = 10399142896827827500ULL;
int zero = 0;
unsigned long long int var_14 = 481748620867891061ULL;
unsigned long long int var_15 = 10573776613371974708ULL;
long long int var_16 = -7569683606181158052LL;
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
