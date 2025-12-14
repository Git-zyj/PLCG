#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8845300769076879041LL;
long long int var_5 = -3701550695390047403LL;
long long int var_6 = -8647794357144014441LL;
long long int var_8 = 8039955187749248664LL;
long long int var_11 = -8164769178207691652LL;
int zero = 0;
long long int var_12 = -2161619603595998855LL;
long long int var_13 = -575166886948739228LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
