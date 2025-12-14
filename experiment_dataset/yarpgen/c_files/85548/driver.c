#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4608;
unsigned short var_2 = (unsigned short)41945;
short var_4 = (short)26605;
short var_8 = (short)9813;
short var_9 = (short)-3631;
short var_10 = (short)-1015;
unsigned short var_12 = (unsigned short)46609;
short var_13 = (short)-31331;
short var_14 = (short)-21545;
short var_15 = (short)23224;
short var_17 = (short)-4277;
int zero = 0;
unsigned short var_18 = (unsigned short)61927;
short var_19 = (short)6952;
short var_20 = (short)29339;
short var_21 = (short)29207;
void init() {
}

void checksum() {
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
