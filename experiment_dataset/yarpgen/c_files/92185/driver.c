#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10770769443085797237ULL;
unsigned char var_6 = (unsigned char)115;
int zero = 0;
unsigned char var_18 = (unsigned char)179;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 7912234351197245448ULL;
long long int var_21 = -5782873431689014489LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
