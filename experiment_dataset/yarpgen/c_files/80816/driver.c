#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1404324774134199869LL;
signed char var_5 = (signed char)60;
long long int var_10 = -2932101108675506165LL;
int zero = 0;
signed char var_14 = (signed char)-82;
long long int var_15 = -8140322024571552489LL;
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
