#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5949396887950078433LL;
long long int var_3 = -1172927653909769172LL;
long long int var_8 = 3808955618657667487LL;
int zero = 0;
long long int var_10 = 3125005135880021298LL;
long long int var_11 = 8256662731601120269LL;
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
