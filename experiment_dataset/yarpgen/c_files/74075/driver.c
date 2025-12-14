#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6112435944945424236ULL;
signed char var_2 = (signed char)68;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_12 = 143664238;
unsigned long long int var_13 = 16985928229374757815ULL;
unsigned short var_14 = (unsigned short)12156;
unsigned short var_15 = (unsigned short)21718;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
