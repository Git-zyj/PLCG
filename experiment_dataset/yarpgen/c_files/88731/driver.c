#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6938;
unsigned long long int var_2 = 11520860448617710950ULL;
int var_8 = -875215306;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)85;
long long int var_14 = 2651851960290840611LL;
void init() {
}

void checksum() {
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
