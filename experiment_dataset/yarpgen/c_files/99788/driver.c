#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17882263767256356464ULL;
long long int var_2 = -7886955633385494781LL;
unsigned char var_4 = (unsigned char)130;
unsigned char var_11 = (unsigned char)182;
int zero = 0;
unsigned long long int var_19 = 16792089099680537440ULL;
long long int var_20 = 5932728644800227462LL;
void init() {
}

void checksum() {
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
