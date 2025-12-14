#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11481151720374502039ULL;
short var_5 = (short)27442;
unsigned long long int var_8 = 2085088360820956146ULL;
unsigned short var_12 = (unsigned short)34487;
int zero = 0;
long long int var_13 = 5312240071269710103LL;
unsigned int var_14 = 1574829510U;
unsigned long long int var_15 = 1045197599933682100ULL;
unsigned short var_16 = (unsigned short)9000;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
