#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3670571417U;
unsigned short var_3 = (unsigned short)40845;
int var_4 = -1245031484;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-29733;
unsigned short var_15 = (unsigned short)22341;
int zero = 0;
signed char var_17 = (signed char)-122;
signed char var_18 = (signed char)-78;
unsigned short var_19 = (unsigned short)23803;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
