#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4392767470512697885LL;
long long int var_9 = 2334761838919853511LL;
long long int var_13 = -5174903616371956355LL;
long long int var_16 = 77230318030877574LL;
int zero = 0;
long long int var_17 = 5791412063080926743LL;
long long int var_18 = -4886782389690468346LL;
long long int var_19 = 1091538994016036585LL;
long long int var_20 = 5822849480370180260LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
