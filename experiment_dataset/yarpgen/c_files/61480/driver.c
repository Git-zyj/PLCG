#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15964;
unsigned int var_3 = 533767040U;
long long int var_5 = 3253845868859973313LL;
long long int var_6 = -2086219979801403566LL;
short var_7 = (short)-10181;
short var_9 = (short)8734;
unsigned short var_10 = (unsigned short)23074;
signed char var_12 = (signed char)-60;
unsigned char var_13 = (unsigned char)254;
signed char var_18 = (signed char)-106;
int zero = 0;
long long int var_19 = -6221203014549014410LL;
unsigned int var_20 = 2706655045U;
unsigned char var_21 = (unsigned char)93;
unsigned int var_22 = 1779213231U;
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
