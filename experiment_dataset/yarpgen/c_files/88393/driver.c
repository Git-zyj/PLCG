#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
_Bool var_1 = (_Bool)0;
int var_3 = 1798092194;
long long int var_10 = -2803978798430852808LL;
unsigned short var_11 = (unsigned short)42455;
long long int var_14 = -4410137084687266838LL;
int zero = 0;
unsigned short var_16 = (unsigned short)46613;
unsigned long long int var_17 = 15912327317735419659ULL;
signed char var_18 = (signed char)-53;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)12391;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
