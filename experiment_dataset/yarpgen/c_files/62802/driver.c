#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1234073930;
unsigned short var_9 = (unsigned short)1367;
unsigned char var_12 = (unsigned char)103;
int zero = 0;
unsigned long long int var_15 = 7834764529199483486ULL;
short var_16 = (short)-29604;
unsigned long long int var_17 = 3490545821227837735ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
