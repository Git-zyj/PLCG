#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
long long int var_1 = 7368072606944177206LL;
short var_6 = (short)-17624;
short var_10 = (short)-1189;
int var_14 = 1481460746;
int var_15 = 1512110885;
long long int var_17 = -7639326084673629541LL;
int zero = 0;
int var_20 = 327607726;
int var_21 = -1723759225;
short var_22 = (short)18851;
void init() {
}

void checksum() {
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
