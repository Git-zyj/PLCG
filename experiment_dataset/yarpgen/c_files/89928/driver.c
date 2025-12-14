#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13930;
int var_1 = -665804872;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6009242428497068638LL;
short var_6 = (short)-8925;
int var_7 = -2106830800;
_Bool var_8 = (_Bool)0;
long long int var_9 = -6145248131628606788LL;
long long int var_10 = -3099103173810655420LL;
int var_11 = 303541750;
short var_12 = (short)1867;
short var_13 = (short)-4208;
int var_15 = -1036706308;
int var_16 = -106507674;
int zero = 0;
unsigned int var_17 = 2107765388U;
unsigned long long int var_18 = 656911193920374656ULL;
long long int var_19 = 6400373038575882066LL;
int var_20 = -839631441;
long long int var_21 = -1249859178187827331LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
