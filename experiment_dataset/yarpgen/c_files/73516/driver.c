#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)130;
unsigned long long int var_7 = 7379421303520319747ULL;
unsigned short var_8 = (unsigned short)19021;
long long int var_15 = 548789904702141295LL;
int zero = 0;
signed char var_16 = (signed char)-38;
unsigned char var_17 = (unsigned char)89;
unsigned char var_18 = (unsigned char)32;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
