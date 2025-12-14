#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13406343185219147681ULL;
int var_8 = 895077795;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-28966;
unsigned long long int var_11 = 13766996216473956694ULL;
int zero = 0;
signed char var_12 = (signed char)48;
long long int var_13 = 6625599607775243181LL;
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
