#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2947958031U;
unsigned short var_3 = (unsigned short)27093;
int var_6 = -1171725053;
unsigned short var_7 = (unsigned short)34503;
long long int var_8 = -4991791221567986683LL;
int var_11 = 693494983;
unsigned long long int var_13 = 7259774423245260127ULL;
unsigned short var_15 = (unsigned short)58362;
int zero = 0;
long long int var_17 = 1435279354606661651LL;
unsigned short var_18 = (unsigned short)9263;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
