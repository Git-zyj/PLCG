#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8201851592248712877LL;
unsigned long long int var_4 = 6288886014222593744ULL;
unsigned short var_15 = (unsigned short)27096;
int zero = 0;
int var_17 = 563991500;
long long int var_18 = -8625464437465178865LL;
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
