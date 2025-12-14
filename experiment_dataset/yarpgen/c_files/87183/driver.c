#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -426825619710300636LL;
unsigned long long int var_11 = 12137903278288400918ULL;
short var_13 = (short)27449;
int zero = 0;
long long int var_18 = -1948438093614987821LL;
unsigned char var_19 = (unsigned char)0;
void init() {
}

void checksum() {
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
