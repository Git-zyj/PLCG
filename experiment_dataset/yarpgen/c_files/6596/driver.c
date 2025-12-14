#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4086824676220695555LL;
int var_3 = 244244865;
unsigned short var_7 = (unsigned short)52528;
unsigned short var_10 = (unsigned short)27659;
int zero = 0;
int var_19 = -1350018797;
unsigned long long int var_20 = 17843277009057101625ULL;
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
