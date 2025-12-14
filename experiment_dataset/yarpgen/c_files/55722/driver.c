#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)121;
short var_3 = (short)-18941;
unsigned long long int var_5 = 9590383303335012478ULL;
long long int var_8 = 8580819943033576257LL;
short var_9 = (short)-27578;
unsigned long long int var_10 = 16624604224788152069ULL;
int zero = 0;
int var_12 = 1048239647;
short var_13 = (short)-30832;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
