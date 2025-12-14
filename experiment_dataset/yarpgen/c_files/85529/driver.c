#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 463404321;
int var_9 = -546033471;
short var_17 = (short)5992;
unsigned short var_19 = (unsigned short)63666;
int zero = 0;
short var_20 = (short)9394;
int var_21 = 1996514545;
int var_22 = -336646202;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
