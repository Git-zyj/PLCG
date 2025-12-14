#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
long long int var_11 = 7658874518816054484LL;
unsigned short var_14 = (unsigned short)57511;
int zero = 0;
unsigned int var_16 = 2814375092U;
unsigned long long int var_17 = 12850729962019394730ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
