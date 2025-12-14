#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 7445805105594086497LL;
unsigned short var_9 = (unsigned short)46972;
unsigned long long int var_11 = 10705231711844740069ULL;
int zero = 0;
unsigned long long int var_13 = 12815665489690982363ULL;
signed char var_14 = (signed char)-15;
unsigned char var_15 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
