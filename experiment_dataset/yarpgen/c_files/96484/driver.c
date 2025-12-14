#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5821895613989489972LL;
int var_4 = 1790042090;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 13266008499135547696ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_17 = (unsigned short)49068;
int zero = 0;
int var_18 = -1263918217;
int var_19 = -1314231582;
long long int var_20 = 3463966088762482487LL;
long long int var_21 = -821815045948663054LL;
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
