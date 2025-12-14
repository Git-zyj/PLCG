#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11621423366460308531ULL;
unsigned long long int var_9 = 641725465832488620ULL;
short var_12 = (short)-22827;
short var_14 = (short)-7238;
unsigned long long int var_15 = 10008892469425824095ULL;
int zero = 0;
unsigned long long int var_19 = 4007252191991510997ULL;
short var_20 = (short)28556;
short var_21 = (short)-10467;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
