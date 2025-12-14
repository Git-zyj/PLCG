#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48296;
unsigned long long int var_8 = 2003738510649146942ULL;
unsigned short var_9 = (unsigned short)28820;
unsigned char var_10 = (unsigned char)220;
int zero = 0;
unsigned short var_12 = (unsigned short)3484;
unsigned long long int var_13 = 5498593394577674247ULL;
unsigned char var_14 = (unsigned char)147;
unsigned long long int var_15 = 9915179686283642750ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
