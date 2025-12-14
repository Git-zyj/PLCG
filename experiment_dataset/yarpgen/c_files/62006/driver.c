#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4191651063991684140LL;
int var_3 = 64650163;
long long int var_4 = -7205559729794007612LL;
unsigned char var_8 = (unsigned char)58;
long long int var_11 = -6662862853904546231LL;
int zero = 0;
unsigned short var_13 = (unsigned short)51167;
long long int var_14 = 2376726530089316403LL;
unsigned short var_15 = (unsigned short)31168;
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
