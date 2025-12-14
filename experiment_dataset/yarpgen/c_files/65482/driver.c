#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5830199808734152587ULL;
unsigned long long int var_2 = 8023250791655145421ULL;
unsigned long long int var_5 = 12722014868451031800ULL;
unsigned int var_10 = 3330307325U;
int zero = 0;
short var_12 = (short)10968;
unsigned char var_13 = (unsigned char)179;
long long int var_14 = 1124795755178188999LL;
signed char var_15 = (signed char)-7;
void init() {
}

void checksum() {
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
