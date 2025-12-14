#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18212;
unsigned short var_7 = (unsigned short)28996;
long long int var_15 = 796139038979217582LL;
int zero = 0;
long long int var_19 = 2858602277177207392LL;
unsigned char var_20 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
