#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1798988951;
short var_9 = (short)-15917;
int var_14 = 172479126;
short var_15 = (short)-29489;
int zero = 0;
short var_19 = (short)7492;
unsigned long long int var_20 = 12452716368513155062ULL;
long long int var_21 = -1827028784230355222LL;
unsigned long long int var_22 = 15433342663316803009ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
