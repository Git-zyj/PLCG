#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3328473814805677554LL;
unsigned int var_3 = 3502210547U;
unsigned long long int var_5 = 7346011480966366490ULL;
long long int var_6 = 1835120338661246677LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_11 = (short)3979;
long long int var_12 = 8536901090507657325LL;
long long int var_13 = 4441297471991441718LL;
unsigned long long int var_14 = 6188036763893099757ULL;
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
