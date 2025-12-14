#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
int var_4 = 1329093510;
_Bool var_6 = (_Bool)1;
unsigned short var_11 = (unsigned short)49159;
int var_13 = -1019172346;
signed char var_15 = (signed char)68;
unsigned short var_16 = (unsigned short)27541;
int zero = 0;
unsigned char var_17 = (unsigned char)14;
signed char var_18 = (signed char)-28;
short var_19 = (short)-18091;
short var_20 = (short)15752;
unsigned char var_21 = (unsigned char)161;
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
