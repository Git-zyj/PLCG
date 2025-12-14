#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2548485330U;
unsigned int var_1 = 584007288U;
unsigned int var_2 = 2134254694U;
unsigned int var_3 = 1848823840U;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1703481473U;
_Bool var_8 = (_Bool)1;
short var_14 = (short)-5012;
long long int var_15 = 3769717224448737395LL;
int zero = 0;
int var_18 = -456337971;
int var_19 = 746380739;
int var_20 = 581774244;
unsigned int var_21 = 1573431876U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
