#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3138048022U;
int var_3 = 1754780878;
long long int var_5 = 3725661218378789698LL;
unsigned long long int var_7 = 5739124674663788639ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)169;
unsigned int var_11 = 935592497U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
