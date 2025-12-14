#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2733450314754906604ULL;
unsigned short var_2 = (unsigned short)47508;
signed char var_5 = (signed char)36;
int var_6 = -559233027;
unsigned short var_7 = (unsigned short)51009;
unsigned char var_10 = (unsigned char)105;
int zero = 0;
short var_13 = (short)20534;
short var_14 = (short)27662;
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
