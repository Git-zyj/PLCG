#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
long long int var_7 = 8416529785305279549LL;
long long int var_8 = 7358845387796538829LL;
short var_10 = (short)-10299;
int var_11 = 487107568;
int zero = 0;
long long int var_12 = 2527529245298696482LL;
unsigned long long int var_13 = 15386912739668122625ULL;
int var_14 = -1483184364;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
