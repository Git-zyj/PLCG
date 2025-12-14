#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8015060373580128770ULL;
unsigned long long int var_4 = 14146575021659406370ULL;
unsigned long long int var_9 = 12289335743644187354ULL;
unsigned int var_13 = 1653073998U;
int zero = 0;
long long int var_18 = 7999402648948389396LL;
unsigned char var_19 = (unsigned char)161;
long long int var_20 = 7733119118293566179LL;
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
