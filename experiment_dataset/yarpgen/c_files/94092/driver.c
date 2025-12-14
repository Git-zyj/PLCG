#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -960154120;
int var_5 = -778886569;
signed char var_8 = (signed char)65;
short var_9 = (short)-577;
int var_10 = 1603633719;
unsigned short var_12 = (unsigned short)58331;
_Bool var_14 = (_Bool)0;
_Bool var_17 = (_Bool)0;
short var_19 = (short)-25395;
int zero = 0;
short var_20 = (short)20251;
unsigned char var_21 = (unsigned char)211;
unsigned char var_22 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
