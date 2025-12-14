#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 7837572482004307285LL;
long long int var_8 = -5774569970179644206LL;
unsigned long long int var_9 = 12147949543424553689ULL;
int zero = 0;
unsigned long long int var_14 = 10724344309602720208ULL;
unsigned long long int var_15 = 2098597256451276953ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
