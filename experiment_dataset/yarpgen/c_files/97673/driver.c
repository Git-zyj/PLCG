#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1955066261;
signed char var_7 = (signed char)-87;
unsigned long long int var_9 = 8086698404966943050ULL;
int zero = 0;
unsigned long long int var_19 = 9546722617607091055ULL;
unsigned int var_20 = 4195972459U;
long long int var_21 = -5042140639875730465LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
