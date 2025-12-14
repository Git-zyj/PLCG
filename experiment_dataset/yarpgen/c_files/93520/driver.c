#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1586087747;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 10641397741294766518ULL;
unsigned long long int var_9 = 7646690253061468539ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)29208;
unsigned short var_11 = (unsigned short)50865;
unsigned long long int var_12 = 3494973995548977333ULL;
int var_13 = 1382004331;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
