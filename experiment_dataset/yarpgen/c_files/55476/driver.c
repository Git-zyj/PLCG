#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -4475751519341664666LL;
signed char var_13 = (signed char)-46;
short var_16 = (short)-30543;
int zero = 0;
unsigned long long int var_17 = 7391929526789000712ULL;
long long int var_18 = -4678603834961744911LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
