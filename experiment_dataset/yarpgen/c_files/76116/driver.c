#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 253209931784916058LL;
int var_1 = -1049036929;
unsigned int var_5 = 100449476U;
unsigned short var_6 = (unsigned short)32480;
unsigned int var_7 = 448045957U;
signed char var_8 = (signed char)-115;
short var_9 = (short)12751;
int zero = 0;
unsigned short var_10 = (unsigned short)55823;
long long int var_11 = 2032676637484128524LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
