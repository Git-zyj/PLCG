#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1490333797;
unsigned long long int var_2 = 4872207051124640772ULL;
short var_4 = (short)32030;
short var_5 = (short)16466;
signed char var_6 = (signed char)-110;
unsigned short var_7 = (unsigned short)28205;
unsigned int var_9 = 3417905360U;
unsigned short var_11 = (unsigned short)64733;
long long int var_13 = 2687833662088807060LL;
int zero = 0;
int var_14 = -1373847861;
signed char var_15 = (signed char)27;
signed char var_16 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
