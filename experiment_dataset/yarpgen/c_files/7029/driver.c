#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1800155372697305988LL;
int var_1 = -1427083150;
signed char var_4 = (signed char)-109;
unsigned long long int var_5 = 5328573656067085609ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)50;
signed char var_10 = (signed char)-58;
unsigned long long int var_11 = 12787421911078978121ULL;
int zero = 0;
unsigned int var_15 = 3744140575U;
int var_16 = 991132234;
short var_17 = (short)-6364;
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
