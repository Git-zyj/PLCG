#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8365831530654509390LL;
int var_2 = -636259877;
long long int var_4 = -1824603415602590380LL;
int zero = 0;
long long int var_10 = 7794225108973154901LL;
unsigned long long int var_11 = 4992525989191589019ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
