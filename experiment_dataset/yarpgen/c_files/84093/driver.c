#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)-25939;
unsigned int var_5 = 922274578U;
short var_7 = (short)27434;
long long int var_9 = -5703550196270155522LL;
short var_11 = (short)-10635;
int zero = 0;
signed char var_14 = (signed char)107;
short var_15 = (short)964;
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
