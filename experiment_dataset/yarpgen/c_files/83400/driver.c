#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
unsigned int var_2 = 1566758902U;
short var_4 = (short)-23847;
int var_6 = -1470777546;
_Bool var_9 = (_Bool)1;
long long int var_11 = 755862276115136767LL;
int zero = 0;
unsigned char var_14 = (unsigned char)224;
signed char var_15 = (signed char)-62;
long long int var_16 = 593123153686928486LL;
unsigned char var_17 = (unsigned char)61;
signed char var_18 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
