#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3395865326527546543LL;
unsigned long long int var_6 = 8588278843493058612ULL;
unsigned char var_7 = (unsigned char)203;
int zero = 0;
unsigned short var_14 = (unsigned short)42366;
unsigned long long int var_15 = 14698696648828039728ULL;
void init() {
}

void checksum() {
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
