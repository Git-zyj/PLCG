#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)70;
unsigned char var_3 = (unsigned char)220;
unsigned int var_5 = 3762047873U;
short var_9 = (short)23084;
long long int var_10 = -5132684010724453105LL;
long long int var_11 = 230133025967227722LL;
unsigned long long int var_13 = 5687904261207997499ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)34533;
signed char var_15 = (signed char)93;
unsigned long long int var_16 = 3819254848404054409ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
