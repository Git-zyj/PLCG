#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned long long int var_2 = 10260547756566783477ULL;
int var_3 = 1058535138;
unsigned long long int var_7 = 4463208165933858828ULL;
unsigned int var_8 = 70691673U;
int zero = 0;
signed char var_11 = (signed char)67;
unsigned long long int var_12 = 15516986800650968499ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
