#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6025289131243476907ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_12 = (unsigned char)171;
int zero = 0;
long long int var_13 = -7065232327775979344LL;
long long int var_14 = 6121887089634871349LL;
void init() {
}

void checksum() {
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
