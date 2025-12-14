#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1296747644;
unsigned short var_1 = (unsigned short)28331;
int var_2 = 330403594;
unsigned int var_3 = 3142710952U;
signed char var_4 = (signed char)80;
unsigned short var_5 = (unsigned short)60273;
unsigned int var_6 = 1256856838U;
signed char var_7 = (signed char)-106;
long long int var_9 = 6636626312934897070LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)27815;
long long int var_12 = -1271079229528649118LL;
unsigned int var_13 = 14643235U;
short var_14 = (short)19000;
short var_15 = (short)-31206;
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
