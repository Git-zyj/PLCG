#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3569739637U;
long long int var_2 = -6648296258568395788LL;
unsigned int var_4 = 142462264U;
long long int var_11 = -3004823929937710007LL;
int zero = 0;
unsigned long long int var_16 = 18185835545365863392ULL;
unsigned char var_17 = (unsigned char)226;
unsigned int var_18 = 459577709U;
unsigned long long int var_19 = 5745088990622981234ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
