#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)249;
unsigned long long int var_4 = 1823860765267801111ULL;
unsigned char var_6 = (unsigned char)61;
unsigned char var_7 = (unsigned char)103;
unsigned long long int var_8 = 11782486385944527995ULL;
signed char var_9 = (signed char)89;
unsigned char var_10 = (unsigned char)207;
signed char var_12 = (signed char)-74;
signed char var_13 = (signed char)(-127 - 1);
unsigned char var_14 = (unsigned char)29;
unsigned long long int var_16 = 4438371149902466839ULL;
int zero = 0;
unsigned long long int var_18 = 9832323654042981689ULL;
signed char var_19 = (signed char)-102;
signed char var_20 = (signed char)99;
unsigned long long int var_21 = 6330848116793697884ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
