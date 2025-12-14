#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7926447335385860095LL;
long long int var_1 = 5377213851676976238LL;
short var_3 = (short)-15283;
unsigned char var_4 = (unsigned char)9;
short var_5 = (short)-1545;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 7067540951369574553LL;
short var_11 = (short)-19025;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
