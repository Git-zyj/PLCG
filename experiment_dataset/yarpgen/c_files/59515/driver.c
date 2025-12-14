#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3109019210U;
unsigned int var_2 = 640086958U;
long long int var_3 = 196664841854580443LL;
long long int var_4 = -4161609340993554345LL;
unsigned int var_6 = 2372997714U;
int zero = 0;
long long int var_13 = -8019791652731483265LL;
long long int var_14 = -7324575354131522093LL;
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
