#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 374238777004423383LL;
int var_1 = -917017905;
int var_2 = -756017691;
int var_3 = 9276833;
short var_4 = (short)26456;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-24;
int var_9 = 395065920;
int zero = 0;
int var_10 = -1361257338;
int var_11 = -111404173;
long long int var_12 = -3284369369487399137LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
