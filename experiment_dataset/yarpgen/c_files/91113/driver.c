#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10573;
unsigned long long int var_1 = 9899084916121278041ULL;
long long int var_3 = 6372536845086609910LL;
unsigned long long int var_5 = 10615470973728271966ULL;
long long int var_7 = 4668242050485425239LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-83;
int zero = 0;
long long int var_11 = -1062587876348626666LL;
short var_12 = (short)2233;
short var_13 = (short)21281;
short var_14 = (short)11499;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
