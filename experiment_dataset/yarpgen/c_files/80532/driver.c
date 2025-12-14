#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)119;
short var_5 = (short)-3539;
unsigned long long int var_7 = 17241014713451830951ULL;
unsigned short var_9 = (unsigned short)60264;
signed char var_18 = (signed char)-46;
int zero = 0;
signed char var_19 = (signed char)-104;
unsigned char var_20 = (unsigned char)109;
signed char var_21 = (signed char)-103;
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
