#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
unsigned long long int var_9 = 4889072075716603319ULL;
unsigned int var_10 = 3910665931U;
long long int var_14 = 7495115645015192876LL;
int zero = 0;
long long int var_19 = 6408040681530901410LL;
long long int var_20 = 7513802938424389854LL;
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
