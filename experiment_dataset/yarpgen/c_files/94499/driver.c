#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3632745401876795706LL;
unsigned long long int var_15 = 8837098187618831589ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)20654;
unsigned long long int var_18 = 3019171177704253533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
