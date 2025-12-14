#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7137030149307845220ULL;
signed char var_2 = (signed char)-34;
unsigned char var_4 = (unsigned char)122;
unsigned short var_5 = (unsigned short)32556;
unsigned short var_7 = (unsigned short)42712;
unsigned long long int var_8 = 2905571571364397535ULL;
short var_10 = (short)32126;
short var_11 = (short)8437;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 648451497899170397ULL;
long long int var_14 = -3578348710148462677LL;
long long int var_15 = 8217697724914417111LL;
void init() {
}

void checksum() {
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
