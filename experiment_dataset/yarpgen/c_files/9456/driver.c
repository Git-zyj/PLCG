#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -826630502;
unsigned long long int var_4 = 9337154351777149318ULL;
int var_10 = -354429777;
int zero = 0;
long long int var_13 = -2307746679368375094LL;
unsigned char var_14 = (unsigned char)57;
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
