#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1400088810;
unsigned short var_4 = (unsigned short)36162;
unsigned short var_10 = (unsigned short)60484;
int var_11 = -1075112476;
unsigned short var_14 = (unsigned short)57244;
int zero = 0;
int var_18 = 1269963102;
long long int var_19 = -1995430484235794001LL;
unsigned char var_20 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
