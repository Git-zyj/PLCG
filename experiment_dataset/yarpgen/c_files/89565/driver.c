#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4513122011408097033LL;
long long int var_5 = -2761767891695446729LL;
long long int var_8 = 3894659196359083781LL;
unsigned long long int var_10 = 8337744061666242844ULL;
int zero = 0;
int var_11 = -1192649529;
unsigned int var_12 = 603651035U;
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
