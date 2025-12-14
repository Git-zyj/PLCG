#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-43;
signed char var_4 = (signed char)-75;
unsigned char var_7 = (unsigned char)27;
unsigned long long int var_12 = 6868660105652635219ULL;
int zero = 0;
signed char var_13 = (signed char)-6;
signed char var_14 = (signed char)-127;
long long int var_15 = 7301142218654023637LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
