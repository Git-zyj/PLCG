#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15398789977167375113ULL;
unsigned long long int var_7 = 5495885323469531080ULL;
unsigned char var_11 = (unsigned char)48;
unsigned short var_12 = (unsigned short)57526;
int zero = 0;
long long int var_14 = -2126173958700534427LL;
unsigned short var_15 = (unsigned short)64484;
unsigned char var_16 = (unsigned char)71;
long long int var_17 = 5610991263379894383LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
