#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 577907765149308479ULL;
short var_5 = (short)31516;
long long int var_10 = 6699531848456399006LL;
int zero = 0;
unsigned long long int var_11 = 6722820677676780157ULL;
unsigned char var_12 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
