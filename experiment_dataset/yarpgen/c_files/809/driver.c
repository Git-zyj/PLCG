#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)163;
unsigned short var_5 = (unsigned short)32279;
unsigned long long int var_6 = 5818721783568231811ULL;
unsigned char var_7 = (unsigned char)51;
long long int var_8 = -8480237059661910708LL;
unsigned short var_11 = (unsigned short)61722;
unsigned char var_13 = (unsigned char)39;
int var_15 = 1411435868;
int zero = 0;
unsigned long long int var_16 = 4320668371296421812ULL;
unsigned long long int var_17 = 2165830267681806395ULL;
void init() {
}

void checksum() {
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
