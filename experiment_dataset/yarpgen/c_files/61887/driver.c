#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3656052409967235941ULL;
long long int var_3 = 1214136145235720479LL;
unsigned int var_7 = 945180946U;
unsigned int var_8 = 2812732203U;
unsigned short var_9 = (unsigned short)28493;
unsigned char var_15 = (unsigned char)159;
int zero = 0;
unsigned short var_18 = (unsigned short)41988;
unsigned char var_19 = (unsigned char)148;
signed char var_20 = (signed char)-89;
int var_21 = -1218549167;
unsigned short var_22 = (unsigned short)1640;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
