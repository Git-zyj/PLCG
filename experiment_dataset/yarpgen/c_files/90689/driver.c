#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2046665965;
long long int var_1 = -1375349395380898929LL;
unsigned int var_8 = 4255000123U;
int zero = 0;
unsigned int var_17 = 1289501379U;
unsigned short var_18 = (unsigned short)48109;
long long int var_19 = 5721711198410142186LL;
unsigned long long int var_20 = 15075744922575559664ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
