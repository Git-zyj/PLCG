#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6014212996659363702ULL;
short var_3 = (short)-19308;
unsigned char var_11 = (unsigned char)165;
unsigned char var_13 = (unsigned char)158;
unsigned long long int var_14 = 16929239890613285580ULL;
int zero = 0;
unsigned long long int var_17 = 17811517814126437676ULL;
unsigned short var_18 = (unsigned short)672;
unsigned long long int var_19 = 430470687626906227ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
