#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)27;
unsigned short var_2 = (unsigned short)37005;
_Bool var_4 = (_Bool)1;
long long int var_6 = 5356177416351914672LL;
int var_7 = 172246785;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_18 = -1808657677008523398LL;
unsigned short var_19 = (unsigned short)13556;
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
