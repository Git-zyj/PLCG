#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10351445781034635714ULL;
short var_4 = (short)-17972;
long long int var_5 = 925655279904901281LL;
unsigned short var_10 = (unsigned short)40746;
int zero = 0;
long long int var_12 = -1993225046964516509LL;
long long int var_13 = 3214095157648924024LL;
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
