#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7379842801462656121LL;
unsigned char var_1 = (unsigned char)100;
unsigned char var_7 = (unsigned char)188;
int var_12 = -774600196;
unsigned char var_14 = (unsigned char)170;
int zero = 0;
unsigned char var_17 = (unsigned char)191;
signed char var_18 = (signed char)19;
long long int var_19 = 6650314616053762744LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
