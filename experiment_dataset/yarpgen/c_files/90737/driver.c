#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1329213364;
int var_8 = 1336613330;
unsigned short var_9 = (unsigned short)21186;
unsigned long long int var_10 = 11900608947786743567ULL;
unsigned long long int var_11 = 6259388291689247335ULL;
int zero = 0;
signed char var_19 = (signed char)-2;
int var_20 = -1501460057;
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
