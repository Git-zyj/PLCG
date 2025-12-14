#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26295;
signed char var_1 = (signed char)-114;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)68;
signed char var_5 = (signed char)93;
unsigned short var_9 = (unsigned short)55783;
int zero = 0;
short var_20 = (short)31569;
unsigned long long int var_21 = 9184517953871163317ULL;
void init() {
}

void checksum() {
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
