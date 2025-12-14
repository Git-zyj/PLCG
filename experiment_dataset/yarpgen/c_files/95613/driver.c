#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -335304570;
int var_5 = 1493128234;
unsigned short var_11 = (unsigned short)39721;
unsigned int var_12 = 265626476U;
signed char var_15 = (signed char)-20;
int zero = 0;
unsigned short var_18 = (unsigned short)7130;
int var_19 = 119394086;
unsigned short var_20 = (unsigned short)28336;
int var_21 = -1166034677;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
