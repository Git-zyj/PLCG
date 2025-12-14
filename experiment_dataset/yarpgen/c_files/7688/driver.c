#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15090723592740593741ULL;
long long int var_3 = -1805177480915031984LL;
long long int var_10 = -4541988303315821883LL;
short var_14 = (short)-21363;
int zero = 0;
unsigned short var_20 = (unsigned short)62397;
long long int var_21 = 820680854816452224LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
