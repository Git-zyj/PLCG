#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-50;
unsigned short var_2 = (unsigned short)25631;
unsigned short var_3 = (unsigned short)5793;
unsigned short var_5 = (unsigned short)52065;
signed char var_6 = (signed char)23;
signed char var_8 = (signed char)52;
signed char var_9 = (signed char)-12;
signed char var_10 = (signed char)65;
unsigned short var_11 = (unsigned short)64761;
int zero = 0;
unsigned short var_12 = (unsigned short)54487;
signed char var_13 = (signed char)71;
signed char var_14 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
