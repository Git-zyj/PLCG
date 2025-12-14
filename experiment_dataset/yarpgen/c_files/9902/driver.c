#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)60;
long long int var_5 = -6849442031370780011LL;
signed char var_9 = (signed char)-103;
unsigned short var_10 = (unsigned short)45745;
signed char var_12 = (signed char)123;
unsigned int var_13 = 1909390711U;
signed char var_15 = (signed char)-11;
unsigned int var_16 = 424844419U;
signed char var_17 = (signed char)-53;
int zero = 0;
short var_18 = (short)-4288;
short var_19 = (short)-11317;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
