#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4950733922127225632LL;
unsigned char var_8 = (unsigned char)98;
signed char var_9 = (signed char)-107;
int zero = 0;
signed char var_12 = (signed char)-108;
unsigned long long int var_13 = 7976581565941768899ULL;
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
