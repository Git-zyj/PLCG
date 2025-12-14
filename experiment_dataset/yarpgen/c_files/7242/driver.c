#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -255615501;
long long int var_3 = 8445906409251736229LL;
unsigned int var_4 = 3157737473U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)58341;
unsigned long long int var_7 = 7394747024769356669ULL;
short var_8 = (short)27155;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 5117644418594177996LL;
long long int var_15 = 5836505039693071375LL;
void init() {
}

void checksum() {
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
