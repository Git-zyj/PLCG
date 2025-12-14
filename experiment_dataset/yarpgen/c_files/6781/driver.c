#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
unsigned long long int var_1 = 7081674031336297418ULL;
unsigned long long int var_2 = 9253512817665884429ULL;
unsigned long long int var_5 = 5677173818380553507ULL;
unsigned char var_6 = (unsigned char)37;
unsigned short var_9 = (unsigned short)43758;
unsigned short var_10 = (unsigned short)9048;
short var_11 = (short)-187;
signed char var_12 = (signed char)88;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)64919;
unsigned char var_17 = (unsigned char)24;
signed char var_18 = (signed char)55;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 16687006384705057189ULL;
int var_21 = 2052326523;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
