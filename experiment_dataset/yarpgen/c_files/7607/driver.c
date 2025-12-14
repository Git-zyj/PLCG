#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1561178849;
long long int var_2 = 4309865057461374094LL;
unsigned short var_3 = (unsigned short)19582;
unsigned short var_5 = (unsigned short)59025;
unsigned short var_6 = (unsigned short)53658;
unsigned char var_7 = (unsigned char)221;
short var_9 = (short)-31680;
int var_10 = -1603215643;
int zero = 0;
unsigned short var_12 = (unsigned short)27395;
unsigned short var_13 = (unsigned short)42011;
short var_14 = (short)26736;
unsigned short var_15 = (unsigned short)62877;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
