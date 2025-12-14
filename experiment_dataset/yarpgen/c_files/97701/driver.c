#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2502230695029216384LL;
long long int var_2 = 8869762823200709421LL;
unsigned long long int var_7 = 846015112256159377ULL;
signed char var_8 = (signed char)-59;
short var_9 = (short)22566;
int zero = 0;
long long int var_10 = 7504645202143806114LL;
long long int var_11 = -6767026694179953449LL;
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
