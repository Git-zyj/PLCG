#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23391;
unsigned long long int var_9 = 11139374697603492195ULL;
long long int var_15 = -5824394687813866005LL;
int zero = 0;
int var_17 = -1984862321;
short var_18 = (short)-3576;
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
