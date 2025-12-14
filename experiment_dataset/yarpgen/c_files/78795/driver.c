#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8757366457113639151LL;
unsigned long long int var_8 = 15686541175135863414ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 10615059112603001113ULL;
unsigned long long int var_15 = 174942871623794551ULL;
unsigned char var_16 = (unsigned char)173;
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
