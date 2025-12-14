#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
long long int var_2 = -8056588113635505939LL;
unsigned long long int var_3 = 3798050614614159186ULL;
unsigned char var_4 = (unsigned char)2;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = 5192209316889549526LL;
unsigned long long int var_11 = 4511459469206786401ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
