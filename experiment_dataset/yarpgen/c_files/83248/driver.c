#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55899;
long long int var_3 = -2634283635089366298LL;
unsigned long long int var_6 = 12034185660445911467ULL;
int var_9 = -1811983808;
unsigned long long int var_10 = 6170628824580383458ULL;
unsigned long long int var_11 = 12699729947379088860ULL;
long long int var_15 = -5170316365012963795LL;
int zero = 0;
long long int var_18 = -8280175375858831396LL;
unsigned long long int var_19 = 2578328109026441867ULL;
void init() {
}

void checksum() {
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
