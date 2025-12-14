#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)174;
unsigned long long int var_8 = 12174320008670912811ULL;
unsigned long long int var_14 = 4865450100621094333ULL;
int zero = 0;
unsigned long long int var_17 = 13245414408066172493ULL;
unsigned long long int var_18 = 3977047870667228514ULL;
unsigned long long int var_19 = 18276462046783069573ULL;
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
