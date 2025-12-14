#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5616161792716821216LL;
unsigned short var_6 = (unsigned short)9689;
signed char var_9 = (signed char)86;
signed char var_11 = (signed char)26;
signed char var_13 = (signed char)-111;
signed char var_15 = (signed char)-46;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -5327302715687373756LL;
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
