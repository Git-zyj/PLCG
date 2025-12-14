#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
int var_1 = -1197782490;
long long int var_3 = 7384775984144484387LL;
unsigned int var_5 = 3862137540U;
unsigned int var_6 = 2011136754U;
unsigned int var_7 = 1919806925U;
signed char var_8 = (signed char)-77;
int zero = 0;
unsigned long long int var_10 = 14584415205262090822ULL;
signed char var_11 = (signed char)115;
signed char var_12 = (signed char)32;
unsigned long long int var_13 = 16462834669207800197ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
