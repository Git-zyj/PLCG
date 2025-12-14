#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6953752598967189449ULL;
unsigned long long int var_4 = 5777915605316032106ULL;
int var_14 = -1580311147;
int zero = 0;
int var_20 = 797911230;
unsigned long long int var_21 = 17131165177800996626ULL;
void init() {
}

void checksum() {
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
