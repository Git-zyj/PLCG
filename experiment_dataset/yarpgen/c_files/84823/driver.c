#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 130256698640029570ULL;
short var_7 = (short)27840;
unsigned short var_10 = (unsigned short)49290;
long long int var_14 = 7088245101068608971LL;
int zero = 0;
unsigned long long int var_18 = 10711363090978803077ULL;
int var_19 = 1771576323;
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
