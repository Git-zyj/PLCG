#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1492478367;
signed char var_3 = (signed char)40;
long long int var_4 = 6590394079372290516LL;
unsigned int var_5 = 273969273U;
signed char var_8 = (signed char)96;
int zero = 0;
unsigned char var_11 = (unsigned char)133;
long long int var_12 = 396015414063030458LL;
unsigned char var_13 = (unsigned char)197;
unsigned int var_14 = 1208092470U;
long long int var_15 = -6112927251262523062LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
