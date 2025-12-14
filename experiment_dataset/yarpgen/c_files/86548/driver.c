#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1330135096U;
long long int var_1 = 6336646282440720112LL;
unsigned short var_2 = (unsigned short)37383;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 1296243308U;
signed char var_6 = (signed char)-13;
long long int var_7 = -5145160068991846586LL;
long long int var_8 = -7969069119000851832LL;
unsigned char var_9 = (unsigned char)110;
unsigned char var_10 = (unsigned char)207;
int zero = 0;
int var_12 = 27377473;
long long int var_13 = 9031406186086623822LL;
unsigned int var_14 = 2025467563U;
unsigned long long int var_15 = 7477383221577038356ULL;
signed char var_16 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
