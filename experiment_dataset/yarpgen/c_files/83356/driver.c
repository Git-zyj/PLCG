#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8461007256030537314LL;
short var_1 = (short)18006;
long long int var_2 = 3546441468564340885LL;
unsigned int var_5 = 758197447U;
signed char var_8 = (signed char)111;
int zero = 0;
long long int var_10 = -355371908884079114LL;
long long int var_11 = -4454131610797540912LL;
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
