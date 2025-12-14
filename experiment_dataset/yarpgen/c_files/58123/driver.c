#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3897792703067768821LL;
unsigned long long int var_1 = 1639145162230305467ULL;
long long int var_4 = 3503359743984683614LL;
unsigned int var_6 = 1769256961U;
signed char var_10 = (signed char)60;
long long int var_12 = 6577967404763073305LL;
unsigned long long int var_14 = 11272415976991553906ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = -174843124;
unsigned long long int var_21 = 12187825947615659937ULL;
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
