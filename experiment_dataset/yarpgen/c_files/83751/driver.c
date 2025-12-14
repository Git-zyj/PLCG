#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2339653952U;
long long int var_4 = -5764442013740241157LL;
long long int var_10 = -650701397239602347LL;
long long int var_11 = -4207970391999159682LL;
int var_13 = 218476649;
int zero = 0;
unsigned short var_15 = (unsigned short)47145;
unsigned int var_16 = 842002665U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
