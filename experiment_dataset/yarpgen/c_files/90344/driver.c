#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7953237742131408306LL;
unsigned int var_1 = 1845448157U;
unsigned long long int var_3 = 11858951537630941922ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)43;
int var_13 = -457506100;
int zero = 0;
unsigned short var_16 = (unsigned short)28822;
unsigned char var_17 = (unsigned char)203;
signed char var_18 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
