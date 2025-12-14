#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16821636506397050946ULL;
int var_2 = 409668523;
unsigned long long int var_3 = 7824253408502364019ULL;
int var_4 = 7131511;
short var_5 = (short)-25957;
short var_6 = (short)-14040;
unsigned long long int var_9 = 618840308645538733ULL;
short var_10 = (short)-23062;
int zero = 0;
signed char var_12 = (signed char)-58;
unsigned short var_13 = (unsigned short)3458;
int var_14 = -938237951;
signed char var_15 = (signed char)-22;
_Bool var_16 = (_Bool)0;
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
