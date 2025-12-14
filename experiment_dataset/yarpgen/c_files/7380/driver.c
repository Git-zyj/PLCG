#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 4049801830U;
long long int var_10 = -2370134917533206451LL;
int zero = 0;
unsigned long long int var_15 = 12180918856352656712ULL;
unsigned int var_16 = 2595393099U;
int var_17 = -1667506696;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
