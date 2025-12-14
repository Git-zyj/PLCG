#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3176;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 5968084028129423731ULL;
unsigned short var_10 = (unsigned short)20839;
int zero = 0;
unsigned char var_13 = (unsigned char)66;
unsigned char var_14 = (unsigned char)36;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
