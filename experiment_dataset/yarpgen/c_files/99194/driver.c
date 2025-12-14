#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 1104472267670185069LL;
unsigned long long int var_17 = 10597172511156791012ULL;
int zero = 0;
short var_19 = (short)-9491;
long long int var_20 = 6179775275751156055LL;
long long int var_21 = -1195883361781948353LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
