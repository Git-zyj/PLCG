#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8344203518236817558ULL;
short var_3 = (short)20678;
unsigned long long int var_4 = 4032309233958879219ULL;
unsigned int var_5 = 2147304039U;
unsigned int var_7 = 3289411138U;
unsigned short var_8 = (unsigned short)20019;
unsigned int var_9 = 3085680277U;
unsigned int var_11 = 730801733U;
unsigned long long int var_12 = 6601011463575659684ULL;
unsigned int var_13 = 3988964423U;
long long int var_16 = -8980512936718270755LL;
unsigned int var_17 = 3779304459U;
int zero = 0;
short var_19 = (short)22395;
short var_20 = (short)-21719;
signed char var_21 = (signed char)-10;
unsigned int var_22 = 525156165U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
