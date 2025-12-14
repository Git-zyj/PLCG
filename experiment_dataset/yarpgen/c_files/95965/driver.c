#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1911534002;
unsigned long long int var_3 = 7168534613754154260ULL;
int var_5 = -1322193416;
unsigned short var_6 = (unsigned short)61843;
long long int var_7 = -57294548084482596LL;
int var_8 = 1533256838;
unsigned char var_10 = (unsigned char)131;
int zero = 0;
unsigned char var_13 = (unsigned char)175;
long long int var_14 = -6593661913598556946LL;
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
