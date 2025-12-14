#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17993224863536610310ULL;
signed char var_4 = (signed char)27;
short var_10 = (short)-12527;
unsigned short var_11 = (unsigned short)3302;
signed char var_12 = (signed char)-94;
signed char var_14 = (signed char)5;
signed char var_15 = (signed char)-3;
int zero = 0;
long long int var_19 = -7657815359900513147LL;
int var_20 = 391156220;
unsigned long long int var_21 = 8805695932483907071ULL;
void init() {
}

void checksum() {
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
