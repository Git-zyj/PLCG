#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)46;
unsigned short var_6 = (unsigned short)64305;
short var_8 = (short)14513;
unsigned int var_12 = 2867904646U;
int zero = 0;
long long int var_15 = -337466113101704222LL;
unsigned int var_16 = 3784913672U;
signed char var_17 = (signed char)-34;
unsigned int var_18 = 1634625575U;
unsigned char var_19 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
