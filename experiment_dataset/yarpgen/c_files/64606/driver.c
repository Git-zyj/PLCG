#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1167408669;
signed char var_5 = (signed char)-87;
int var_9 = -1359666194;
long long int var_14 = 4608886317256609447LL;
long long int var_15 = -1352709396229589277LL;
int zero = 0;
unsigned long long int var_16 = 447367540467948453ULL;
unsigned short var_17 = (unsigned short)21086;
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
