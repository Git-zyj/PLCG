#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23535;
unsigned long long int var_7 = 5579411823787889494ULL;
unsigned long long int var_8 = 8689757586573695194ULL;
int var_11 = 1647557445;
int zero = 0;
int var_18 = -974152820;
int var_19 = 1346802599;
signed char var_20 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
