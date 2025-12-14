#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1414008842;
signed char var_1 = (signed char)-48;
unsigned short var_2 = (unsigned short)36812;
unsigned char var_3 = (unsigned char)43;
unsigned int var_5 = 995881298U;
unsigned char var_6 = (unsigned char)108;
unsigned short var_8 = (unsigned short)25014;
unsigned int var_9 = 2032097149U;
int var_10 = -821254400;
int zero = 0;
unsigned long long int var_11 = 6242582188117436846ULL;
long long int var_12 = -1705130545405190294LL;
int var_13 = 145189050;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
