#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1586;
unsigned char var_5 = (unsigned char)249;
unsigned char var_6 = (unsigned char)228;
unsigned long long int var_8 = 17180158519101188919ULL;
unsigned char var_11 = (unsigned char)72;
int zero = 0;
short var_12 = (short)-23671;
unsigned short var_13 = (unsigned short)32917;
int var_14 = 505556741;
long long int var_15 = -3752359391563292630LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
