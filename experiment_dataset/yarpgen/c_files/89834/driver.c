#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)67;
signed char var_4 = (signed char)-56;
long long int var_6 = 152210888023372627LL;
unsigned char var_8 = (unsigned char)221;
signed char var_9 = (signed char)73;
int zero = 0;
short var_10 = (short)-28187;
unsigned int var_11 = 2997442517U;
unsigned long long int var_12 = 5899077555967565208ULL;
unsigned int var_13 = 3800359201U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
