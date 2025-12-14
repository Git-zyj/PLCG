#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22619;
unsigned long long int var_6 = 18255302152803372691ULL;
signed char var_7 = (signed char)59;
unsigned char var_16 = (unsigned char)29;
int zero = 0;
long long int var_19 = 3824634414373371105LL;
unsigned char var_20 = (unsigned char)52;
long long int var_21 = 8473959798852364642LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
