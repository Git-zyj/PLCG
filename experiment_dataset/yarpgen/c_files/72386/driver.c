#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 13113672677962440953ULL;
unsigned long long int var_11 = 4748701312665167329ULL;
unsigned long long int var_13 = 9932426819227357280ULL;
int zero = 0;
short var_20 = (short)17655;
unsigned char var_21 = (unsigned char)14;
unsigned char var_22 = (unsigned char)64;
unsigned short var_23 = (unsigned short)59877;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
