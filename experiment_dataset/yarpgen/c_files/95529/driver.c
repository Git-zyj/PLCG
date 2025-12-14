#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17617451635738589693ULL;
unsigned short var_8 = (unsigned short)23950;
unsigned short var_17 = (unsigned short)1986;
int zero = 0;
short var_19 = (short)9779;
long long int var_20 = -429717691229076700LL;
void init() {
}

void checksum() {
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
