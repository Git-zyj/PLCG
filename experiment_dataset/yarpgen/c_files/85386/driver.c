#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 917634067U;
unsigned char var_2 = (unsigned char)156;
unsigned int var_3 = 3462127679U;
unsigned int var_4 = 1511583368U;
long long int var_5 = 8767806675000151632LL;
int var_6 = 1618872092;
unsigned long long int var_7 = 15229833764013795751ULL;
unsigned int var_8 = 1717039033U;
signed char var_9 = (signed char)-45;
unsigned long long int var_10 = 8073456992086267803ULL;
int zero = 0;
unsigned int var_11 = 1004754797U;
unsigned int var_12 = 2534427186U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
