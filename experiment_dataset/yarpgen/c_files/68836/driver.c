#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
unsigned int var_8 = 546747546U;
unsigned short var_10 = (unsigned short)60749;
long long int var_11 = 4446007848764888202LL;
unsigned long long int var_17 = 2842277299434270488ULL;
int zero = 0;
unsigned long long int var_19 = 13907916825614323319ULL;
unsigned long long int var_20 = 17177241638465895565ULL;
unsigned short var_21 = (unsigned short)27938;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
