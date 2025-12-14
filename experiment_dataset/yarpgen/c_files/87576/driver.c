#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)16812;
long long int var_6 = -3049176792777669879LL;
unsigned char var_9 = (unsigned char)52;
unsigned long long int var_10 = 2714040576174925325ULL;
unsigned char var_11 = (unsigned char)26;
unsigned int var_12 = 1730011151U;
unsigned short var_14 = (unsigned short)57376;
int zero = 0;
short var_17 = (short)21729;
unsigned int var_18 = 784370088U;
signed char var_19 = (signed char)-80;
void init() {
}

void checksum() {
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
