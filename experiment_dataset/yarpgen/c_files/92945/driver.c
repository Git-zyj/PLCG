#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)47933;
long long int var_6 = -4587767245344693986LL;
unsigned char var_8 = (unsigned char)216;
unsigned int var_9 = 3914704632U;
int zero = 0;
unsigned char var_12 = (unsigned char)242;
unsigned short var_13 = (unsigned short)29976;
signed char var_14 = (signed char)-24;
unsigned short var_15 = (unsigned short)31089;
void init() {
}

void checksum() {
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
