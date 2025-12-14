#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7849793345407600918ULL;
unsigned long long int var_1 = 10160723718018381627ULL;
short var_4 = (short)-30221;
short var_5 = (short)24919;
unsigned long long int var_9 = 2729935949875023214ULL;
int zero = 0;
short var_10 = (short)14535;
short var_11 = (short)-7812;
short var_12 = (short)25583;
short var_13 = (short)-16625;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
