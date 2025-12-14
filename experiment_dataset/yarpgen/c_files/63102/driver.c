#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)0;
long long int var_3 = -3764822489334973291LL;
unsigned short var_8 = (unsigned short)105;
unsigned long long int var_9 = 9894916495649261246ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)11852;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)37774;
long long int var_14 = -121100960901186697LL;
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
