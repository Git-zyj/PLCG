#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4550196459662687767ULL;
unsigned int var_2 = 4030416697U;
int var_3 = -2002695058;
unsigned int var_5 = 3106052657U;
unsigned int var_6 = 1711588146U;
int var_7 = -2092776787;
int zero = 0;
int var_11 = -845023780;
unsigned long long int var_12 = 17416230121283548091ULL;
unsigned int var_13 = 743890950U;
short var_14 = (short)31341;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
