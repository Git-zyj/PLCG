#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
unsigned long long int var_2 = 14639956710645325864ULL;
unsigned char var_6 = (unsigned char)253;
unsigned short var_8 = (unsigned short)46760;
int zero = 0;
int var_12 = -668087635;
int var_13 = 1415283090;
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
