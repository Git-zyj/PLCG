#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)4458;
long long int var_10 = -483357392809625260LL;
unsigned int var_13 = 1430106296U;
int zero = 0;
long long int var_16 = 2365003419559510966LL;
unsigned short var_17 = (unsigned short)41483;
short var_18 = (short)9727;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
