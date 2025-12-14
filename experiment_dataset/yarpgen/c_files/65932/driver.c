#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
unsigned short var_3 = (unsigned short)22987;
signed char var_5 = (signed char)-16;
unsigned short var_6 = (unsigned short)65350;
int var_7 = 1521125140;
long long int var_8 = 9096987869678914782LL;
unsigned short var_10 = (unsigned short)30026;
unsigned int var_11 = 3666076093U;
short var_13 = (short)-8793;
long long int var_16 = -3956000122808624339LL;
int zero = 0;
unsigned long long int var_17 = 344835529394605972ULL;
signed char var_18 = (signed char)-125;
signed char var_19 = (signed char)-51;
short var_20 = (short)-14096;
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
