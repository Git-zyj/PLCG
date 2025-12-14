#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1459697117U;
unsigned long long int var_2 = 11610226235307911430ULL;
signed char var_4 = (signed char)-59;
unsigned int var_6 = 1703254537U;
signed char var_9 = (signed char)117;
unsigned long long int var_10 = 16410815176434726248ULL;
int zero = 0;
long long int var_11 = 3088346414880989381LL;
long long int var_12 = -123707785931940129LL;
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
