#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1156658442;
short var_1 = (short)19626;
unsigned long long int var_2 = 10432174239202900156ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)35655;
long long int var_9 = -6672618141714427723LL;
unsigned long long int var_10 = 7686050760327651704ULL;
int zero = 0;
signed char var_11 = (signed char)-58;
unsigned int var_12 = 591260989U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
