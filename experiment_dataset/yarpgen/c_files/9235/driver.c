#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19419;
long long int var_2 = -1989226267316650930LL;
unsigned int var_4 = 3553473022U;
short var_8 = (short)-7451;
short var_9 = (short)-1358;
unsigned long long int var_11 = 4664889408869597843ULL;
short var_16 = (short)733;
int zero = 0;
int var_18 = 702412470;
unsigned long long int var_19 = 12092131605055669782ULL;
short var_20 = (short)-719;
short var_21 = (short)21021;
unsigned long long int var_22 = 15856702329123001932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
