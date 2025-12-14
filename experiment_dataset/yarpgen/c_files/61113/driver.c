#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2454123102U;
unsigned char var_3 = (unsigned char)247;
unsigned int var_5 = 206529818U;
unsigned long long int var_8 = 10414360370988286607ULL;
int var_9 = 489298097;
int zero = 0;
unsigned short var_11 = (unsigned short)58798;
unsigned char var_12 = (unsigned char)153;
void init() {
}

void checksum() {
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
