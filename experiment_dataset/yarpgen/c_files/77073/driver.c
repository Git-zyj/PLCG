#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 630331318525696255ULL;
unsigned long long int var_1 = 16434442882720393310ULL;
unsigned char var_13 = (unsigned char)193;
int zero = 0;
unsigned long long int var_14 = 15908588866511384021ULL;
short var_15 = (short)-27790;
unsigned short var_16 = (unsigned short)19799;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
