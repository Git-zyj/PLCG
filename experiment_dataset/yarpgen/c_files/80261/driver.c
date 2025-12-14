#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1260139208;
short var_3 = (short)5770;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)19930;
int var_11 = 19091191;
int zero = 0;
int var_17 = 1315348572;
signed char var_18 = (signed char)-63;
unsigned char var_19 = (unsigned char)95;
signed char var_20 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
