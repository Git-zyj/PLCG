#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6229611654430574885ULL;
unsigned long long int var_7 = 8714059781720455204ULL;
unsigned long long int var_9 = 14245421548223961100ULL;
unsigned short var_10 = (unsigned short)51232;
int zero = 0;
unsigned long long int var_12 = 17168257289087404509ULL;
unsigned char var_13 = (unsigned char)211;
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
