#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-72;
unsigned short var_3 = (unsigned short)20792;
short var_4 = (short)24754;
unsigned char var_7 = (unsigned char)104;
signed char var_9 = (signed char)-27;
unsigned int var_10 = 589859782U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3000876618U;
short var_13 = (short)-14517;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
