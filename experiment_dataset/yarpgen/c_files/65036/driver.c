#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned char var_1 = (unsigned char)116;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)39027;
signed char var_9 = (signed char)-58;
unsigned short var_10 = (unsigned short)19955;
unsigned short var_11 = (unsigned short)12924;
signed char var_12 = (signed char)-92;
int zero = 0;
unsigned short var_13 = (unsigned short)14830;
int var_14 = -449724714;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
