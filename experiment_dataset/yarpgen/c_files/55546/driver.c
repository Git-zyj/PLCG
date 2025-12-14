#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3621315261U;
unsigned char var_1 = (unsigned char)135;
long long int var_9 = -2210103210760833718LL;
unsigned long long int var_10 = 9962231311615424386ULL;
int zero = 0;
long long int var_13 = 2709731023018766902LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
