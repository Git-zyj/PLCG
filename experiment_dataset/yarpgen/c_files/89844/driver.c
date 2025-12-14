#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2751348129U;
long long int var_4 = -2992574157536378523LL;
unsigned char var_5 = (unsigned char)12;
signed char var_6 = (signed char)66;
signed char var_7 = (signed char)-28;
unsigned char var_8 = (unsigned char)80;
int zero = 0;
long long int var_14 = 8716897188103863112LL;
unsigned short var_15 = (unsigned short)64049;
unsigned short var_16 = (unsigned short)57294;
short var_17 = (short)17356;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
