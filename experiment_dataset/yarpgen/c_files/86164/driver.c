#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)93;
signed char var_2 = (signed char)43;
long long int var_8 = 5974555669621712133LL;
long long int var_11 = -3932130488046961433LL;
unsigned char var_13 = (unsigned char)6;
unsigned long long int var_17 = 2650068951412684374ULL;
int zero = 0;
unsigned long long int var_20 = 14207718005227737120ULL;
unsigned short var_21 = (unsigned short)4705;
void init() {
}

void checksum() {
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
