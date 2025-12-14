#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2535422229398408515LL;
long long int var_5 = 2838347477664364242LL;
long long int var_6 = -2670230126737111705LL;
int zero = 0;
long long int var_12 = 9057508080107838818LL;
long long int var_13 = 1821006150133041608LL;
long long int var_14 = -8742775050198322567LL;
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
