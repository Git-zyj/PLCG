#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4166388146033167050LL;
long long int var_4 = -7962955622265445924LL;
long long int var_8 = -8718544562253268165LL;
long long int var_13 = 6200037868609625534LL;
long long int var_16 = -5570389795059920239LL;
int zero = 0;
long long int var_17 = -3939676408101564914LL;
long long int var_18 = -7629294044311528593LL;
long long int var_19 = -7200577516691138065LL;
void init() {
}

void checksum() {
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
