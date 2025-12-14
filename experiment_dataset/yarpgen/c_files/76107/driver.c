#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-115;
long long int var_3 = 5028043613136729161LL;
short var_4 = (short)-424;
unsigned long long int var_7 = 5372900113178008775ULL;
unsigned long long int var_8 = 15650091355058889193ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 695259594U;
unsigned short var_15 = (unsigned short)41272;
void init() {
}

void checksum() {
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
