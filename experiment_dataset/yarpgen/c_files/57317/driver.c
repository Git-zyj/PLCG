#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12242832249907721335ULL;
long long int var_13 = -1149546241481101873LL;
unsigned long long int var_15 = 12185370099739192109ULL;
int zero = 0;
long long int var_19 = -7128994762900233451LL;
unsigned long long int var_20 = 9851528200448034685ULL;
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
