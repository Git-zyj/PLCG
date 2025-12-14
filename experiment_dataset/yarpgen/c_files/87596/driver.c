#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1259837173U;
unsigned long long int var_2 = 6725691765577475331ULL;
short var_3 = (short)-12545;
long long int var_4 = 5649014318133417168LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_20 = -449599067;
unsigned short var_21 = (unsigned short)64696;
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
