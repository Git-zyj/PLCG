#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)39683;
signed char var_10 = (signed char)52;
long long int var_12 = 3542961517913272406LL;
int zero = 0;
long long int var_15 = -291233008619825952LL;
unsigned long long int var_16 = 14037087893760935580ULL;
unsigned char var_17 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
