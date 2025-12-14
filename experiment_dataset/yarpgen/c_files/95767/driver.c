#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 16445588068569712075ULL;
_Bool var_9 = (_Bool)1;
int var_10 = -1759524230;
long long int var_12 = -4212133348734818721LL;
short var_13 = (short)1721;
unsigned long long int var_15 = 2278363813064184311ULL;
int zero = 0;
unsigned long long int var_19 = 4414761083682245202ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 12766301731959951528ULL;
void init() {
}

void checksum() {
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
