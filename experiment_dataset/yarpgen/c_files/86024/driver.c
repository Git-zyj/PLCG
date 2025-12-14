#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2219490198U;
unsigned long long int var_1 = 4984765554953636704ULL;
unsigned short var_3 = (unsigned short)7534;
unsigned char var_7 = (unsigned char)137;
unsigned int var_8 = 2171325378U;
int var_9 = 696701808;
int var_10 = -1150897103;
short var_11 = (short)11495;
unsigned int var_12 = 1962915946U;
int zero = 0;
long long int var_15 = 5055120404948962821LL;
int var_16 = -2042112192;
signed char var_17 = (signed char)-85;
unsigned long long int var_18 = 15781178305144806789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
