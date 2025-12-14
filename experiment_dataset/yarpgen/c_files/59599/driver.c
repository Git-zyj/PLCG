#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1179982419;
signed char var_2 = (signed char)-116;
_Bool var_4 = (_Bool)0;
unsigned short var_9 = (unsigned short)19412;
int var_11 = -1107300475;
unsigned int var_12 = 3194341169U;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-123;
unsigned int var_16 = 1818039381U;
long long int var_17 = 7149333875084944192LL;
signed char var_18 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
