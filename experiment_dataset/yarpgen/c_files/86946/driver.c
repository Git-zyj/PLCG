#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4299;
unsigned int var_5 = 707864811U;
int var_6 = -465168081;
unsigned long long int var_8 = 15561301820742313445ULL;
int zero = 0;
short var_10 = (short)-24625;
unsigned char var_11 = (unsigned char)195;
_Bool var_12 = (_Bool)0;
long long int var_13 = -9047218718244367428LL;
int var_14 = -2120050978;
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
