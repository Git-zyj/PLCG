#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7632358356333356165ULL;
unsigned int var_1 = 2305201267U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 865377037873509852ULL;
unsigned long long int var_6 = 10757844143015509049ULL;
signed char var_9 = (signed char)107;
_Bool var_10 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)117;
int zero = 0;
short var_18 = (short)-4719;
unsigned short var_19 = (unsigned short)41869;
unsigned long long int var_20 = 5884435392619449147ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
