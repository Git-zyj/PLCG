#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)67;
short var_6 = (short)-1708;
signed char var_7 = (signed char)82;
long long int var_9 = 7710116518230283001LL;
short var_13 = (short)-23513;
unsigned short var_14 = (unsigned short)15917;
unsigned long long int var_16 = 8569604720865445132ULL;
int zero = 0;
short var_18 = (short)-4025;
int var_19 = -1815922081;
unsigned long long int var_20 = 15855450947022257744ULL;
void init() {
}

void checksum() {
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
