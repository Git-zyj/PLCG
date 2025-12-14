#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
long long int var_4 = -6397505781200481672LL;
short var_5 = (short)10987;
unsigned short var_8 = (unsigned short)52243;
int var_9 = -2059485479;
int zero = 0;
long long int var_11 = -1333143555097555945LL;
long long int var_12 = 8554619732102618652LL;
long long int var_13 = -5129657446709010729LL;
unsigned char var_14 = (unsigned char)84;
signed char var_15 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
