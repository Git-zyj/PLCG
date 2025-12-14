#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5439355463119805320LL;
long long int var_4 = 7852450901645448196LL;
long long int var_9 = -6214015416120974464LL;
unsigned long long int var_10 = 18231213532037260067ULL;
int zero = 0;
short var_13 = (short)-7268;
short var_14 = (short)-28667;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
