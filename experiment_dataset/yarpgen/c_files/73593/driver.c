#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4390995428014504337LL;
int var_15 = -1170727695;
long long int var_16 = -2827304832890941614LL;
int zero = 0;
long long int var_17 = -3361267180620829409LL;
int var_18 = -1652827628;
short var_19 = (short)-11112;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
