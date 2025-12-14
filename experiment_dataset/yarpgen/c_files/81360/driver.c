#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56172;
int var_1 = 1309278532;
unsigned short var_4 = (unsigned short)40343;
int var_5 = 388371044;
int zero = 0;
unsigned short var_10 = (unsigned short)60878;
int var_11 = -273955375;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
