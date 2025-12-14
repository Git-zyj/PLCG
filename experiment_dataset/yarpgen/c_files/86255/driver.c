#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_7 = (short)-9133;
long long int var_10 = -114402137216655951LL;
unsigned long long int var_11 = 9278748294081714330ULL;
long long int var_12 = 9132035006061539550LL;
int zero = 0;
signed char var_17 = (signed char)92;
signed char var_18 = (signed char)121;
long long int var_19 = -1518913576123951373LL;
unsigned long long int var_20 = 12953555129346337267ULL;
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
