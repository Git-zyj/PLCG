#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4729015502477224230ULL;
int var_2 = 1544008090;
long long int var_3 = -5843651509756068111LL;
unsigned char var_11 = (unsigned char)167;
long long int var_12 = -3290255332915299430LL;
int zero = 0;
short var_15 = (short)21227;
long long int var_16 = -1916832642615664557LL;
unsigned long long int var_17 = 2582054691827897194ULL;
unsigned short var_18 = (unsigned short)166;
unsigned long long int var_19 = 16222288775950351850ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
