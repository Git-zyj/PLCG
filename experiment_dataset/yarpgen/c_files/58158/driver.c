#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1006508738;
short var_6 = (short)1830;
unsigned short var_7 = (unsigned short)34069;
int var_8 = -161217856;
unsigned short var_9 = (unsigned short)11618;
int var_10 = 1298989246;
int var_11 = 1277884689;
int zero = 0;
int var_12 = -1765605514;
unsigned long long int var_13 = 12199417033431537326ULL;
unsigned short var_14 = (unsigned short)32615;
unsigned short var_15 = (unsigned short)59487;
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
