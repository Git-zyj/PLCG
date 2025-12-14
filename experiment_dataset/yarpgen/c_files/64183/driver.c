#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3899163003001414137LL;
unsigned long long int var_5 = 12860827358314802383ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2312973081734704151LL;
unsigned long long int var_14 = 320328465629232832ULL;
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
