#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 687470205;
int var_4 = -905613391;
unsigned short var_6 = (unsigned short)32082;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)61596;
long long int var_15 = -3921884664417469577LL;
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
