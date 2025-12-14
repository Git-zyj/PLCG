#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7084;
unsigned long long int var_4 = 4971757043216316244ULL;
int var_9 = 158997593;
int zero = 0;
long long int var_16 = 3119414854026945877LL;
unsigned long long int var_17 = 3267261934757613030ULL;
unsigned char var_18 = (unsigned char)63;
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
