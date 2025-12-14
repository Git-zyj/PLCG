#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)241;
unsigned short var_5 = (unsigned short)16851;
unsigned short var_7 = (unsigned short)63377;
unsigned char var_11 = (unsigned char)208;
unsigned long long int var_14 = 6324376883322340896ULL;
int zero = 0;
unsigned long long int var_20 = 12223137550105686560ULL;
unsigned short var_21 = (unsigned short)45521;
unsigned long long int var_22 = 6405201507249695527ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
