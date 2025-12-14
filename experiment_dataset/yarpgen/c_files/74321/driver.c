#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2838816121U;
signed char var_9 = (signed char)34;
long long int var_11 = 6246155740395920010LL;
int zero = 0;
unsigned int var_18 = 3078047480U;
long long int var_19 = -3113260688860339853LL;
unsigned long long int var_20 = 4487420533364167770ULL;
int var_21 = -710629903;
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
