#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned char var_1 = (unsigned char)25;
unsigned short var_3 = (unsigned short)37665;
unsigned short var_7 = (unsigned short)44808;
long long int var_10 = 6514209041951786928LL;
unsigned long long int var_11 = 14883851305218374641ULL;
signed char var_16 = (signed char)87;
int zero = 0;
unsigned int var_18 = 2571775407U;
signed char var_19 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
