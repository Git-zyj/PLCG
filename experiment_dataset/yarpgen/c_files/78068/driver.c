#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-72;
unsigned int var_3 = 389483104U;
long long int var_5 = 4537147042583842666LL;
unsigned int var_9 = 3530629470U;
int zero = 0;
long long int var_12 = -5750923715704778064LL;
signed char var_13 = (signed char)126;
void init() {
}

void checksum() {
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
