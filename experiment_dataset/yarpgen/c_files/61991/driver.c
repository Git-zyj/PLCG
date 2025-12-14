#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-114;
signed char var_4 = (signed char)56;
signed char var_5 = (signed char)-49;
unsigned char var_6 = (unsigned char)186;
signed char var_7 = (signed char)57;
int var_9 = 1314363333;
int var_10 = 527647521;
int var_12 = 1863040705;
int zero = 0;
int var_13 = 1391790945;
unsigned char var_14 = (unsigned char)222;
signed char var_15 = (signed char)96;
void init() {
}

void checksum() {
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
