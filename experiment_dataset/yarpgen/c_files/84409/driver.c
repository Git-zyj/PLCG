#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
long long int var_5 = 8693641324279184596LL;
signed char var_7 = (signed char)110;
long long int var_8 = -5056488497336580426LL;
unsigned int var_10 = 1095117793U;
unsigned long long int var_14 = 5663618625660884170ULL;
int var_16 = 616780529;
int zero = 0;
unsigned short var_17 = (unsigned short)62425;
long long int var_18 = -5983194276368530169LL;
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
