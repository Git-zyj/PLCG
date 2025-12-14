#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53714;
unsigned short var_1 = (unsigned short)368;
short var_3 = (short)-27680;
int var_7 = -1023816691;
short var_9 = (short)13177;
int var_10 = -1510273028;
int zero = 0;
signed char var_12 = (signed char)-12;
short var_13 = (short)-26539;
void init() {
}

void checksum() {
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
