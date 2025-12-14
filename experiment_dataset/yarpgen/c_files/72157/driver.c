#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)5226;
unsigned long long int var_11 = 3572270332699651388ULL;
unsigned short var_12 = (unsigned short)7090;
unsigned short var_15 = (unsigned short)17223;
int zero = 0;
short var_16 = (short)25330;
long long int var_17 = 5516012832663846124LL;
short var_18 = (short)25877;
short var_19 = (short)-23770;
unsigned short var_20 = (unsigned short)3100;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
