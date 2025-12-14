#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)68;
unsigned long long int var_6 = 7513381427388635602ULL;
unsigned long long int var_7 = 3190385899057331599ULL;
unsigned char var_11 = (unsigned char)112;
unsigned long long int var_14 = 5623673759139846316ULL;
int zero = 0;
int var_19 = -1902569146;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
