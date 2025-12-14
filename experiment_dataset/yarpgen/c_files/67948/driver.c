#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14721;
long long int var_3 = 575931297723385516LL;
unsigned long long int var_6 = 13126679419126668120ULL;
int zero = 0;
unsigned long long int var_13 = 1914923027748228957ULL;
unsigned int var_14 = 1139650994U;
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
