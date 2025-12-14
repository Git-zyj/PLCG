#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4117;
signed char var_1 = (signed char)-29;
signed char var_7 = (signed char)33;
unsigned long long int var_9 = 16127033240631476275ULL;
unsigned char var_13 = (unsigned char)246;
short var_14 = (short)543;
signed char var_15 = (signed char)118;
long long int var_16 = -6210436041799242314LL;
long long int var_17 = 2953214837433908311LL;
int zero = 0;
signed char var_18 = (signed char)8;
signed char var_19 = (signed char)-55;
unsigned long long int var_20 = 16777465904924018730ULL;
long long int var_21 = 6126971354827257811LL;
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
