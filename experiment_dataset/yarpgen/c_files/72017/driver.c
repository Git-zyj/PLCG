#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51139;
signed char var_2 = (signed char)49;
signed char var_7 = (signed char)-121;
int zero = 0;
unsigned long long int var_10 = 9463564655889493442ULL;
short var_11 = (short)-14358;
int var_12 = 535022684;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
