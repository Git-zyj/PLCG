#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
unsigned long long int var_11 = 2128700787191267530ULL;
unsigned short var_12 = (unsigned short)52942;
int zero = 0;
unsigned long long int var_13 = 7437092268391550638ULL;
long long int var_14 = -8264437827804995202LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
