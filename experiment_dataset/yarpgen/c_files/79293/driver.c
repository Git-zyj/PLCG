#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20031;
unsigned char var_2 = (unsigned char)140;
short var_5 = (short)29989;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-21290;
int var_8 = 1655344951;
int zero = 0;
short var_11 = (short)-24520;
long long int var_12 = 6913689577978416155LL;
signed char var_13 = (signed char)-96;
short var_14 = (short)-729;
short var_15 = (short)-24631;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
