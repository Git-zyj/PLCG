#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-11;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 17924074868841459950ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 14940041650533733278ULL;
unsigned short var_18 = (unsigned short)19575;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
