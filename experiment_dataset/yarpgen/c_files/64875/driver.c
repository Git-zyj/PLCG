#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
short var_2 = (short)-25180;
int var_3 = 1943092079;
unsigned int var_7 = 581443128U;
unsigned int var_8 = 3710731084U;
unsigned int var_10 = 1378340893U;
short var_15 = (short)11697;
int var_16 = -383922045;
unsigned char var_18 = (unsigned char)19;
int zero = 0;
int var_19 = 1663551818;
int var_20 = 926934897;
int var_21 = 220591841;
unsigned char var_22 = (unsigned char)125;
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
