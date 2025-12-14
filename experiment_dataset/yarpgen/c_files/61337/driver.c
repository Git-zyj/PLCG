#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3234838496106426241LL;
unsigned long long int var_4 = 8902743533586890544ULL;
long long int var_5 = 6398660091440001137LL;
long long int var_6 = 1074693578285669185LL;
unsigned long long int var_16 = 12236267818556052830ULL;
int zero = 0;
unsigned long long int var_19 = 5433490704003734149ULL;
long long int var_20 = -5203123483171413634LL;
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
