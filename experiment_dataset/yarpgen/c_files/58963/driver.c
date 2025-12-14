#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 622152964;
signed char var_4 = (signed char)118;
unsigned char var_6 = (unsigned char)28;
unsigned long long int var_10 = 3517197517899672097ULL;
int zero = 0;
int var_11 = -1363709221;
long long int var_12 = -3584657233254000818LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
