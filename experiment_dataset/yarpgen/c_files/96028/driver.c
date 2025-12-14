#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -238800993;
unsigned long long int var_1 = 5377075703503400469ULL;
signed char var_2 = (signed char)27;
signed char var_4 = (signed char)82;
unsigned char var_5 = (unsigned char)204;
signed char var_8 = (signed char)-111;
unsigned long long int var_11 = 12484952577159615374ULL;
signed char var_13 = (signed char)-76;
int zero = 0;
signed char var_17 = (signed char)51;
int var_18 = -1548649223;
unsigned short var_19 = (unsigned short)31600;
short var_20 = (short)26817;
unsigned char var_21 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
