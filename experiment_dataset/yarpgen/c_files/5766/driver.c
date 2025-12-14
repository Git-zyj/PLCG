#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)3;
unsigned long long int var_7 = 11366090452351989159ULL;
unsigned short var_11 = (unsigned short)61685;
signed char var_15 = (signed char)-101;
int zero = 0;
unsigned long long int var_16 = 600320806165508419ULL;
unsigned short var_17 = (unsigned short)32383;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
