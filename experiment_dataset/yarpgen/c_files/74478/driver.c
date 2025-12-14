#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
long long int var_2 = 1789262557448045473LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)60;
unsigned long long int var_6 = 14617927249942109707ULL;
_Bool var_7 = (_Bool)0;
int var_9 = -147952465;
int zero = 0;
int var_10 = -576172028;
unsigned short var_11 = (unsigned short)17926;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
