#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)96;
signed char var_5 = (signed char)102;
signed char var_10 = (signed char)-6;
unsigned char var_12 = (unsigned char)67;
signed char var_19 = (signed char)19;
int zero = 0;
unsigned char var_20 = (unsigned char)121;
unsigned short var_21 = (unsigned short)52525;
unsigned long long int var_22 = 9953495534775044599ULL;
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
