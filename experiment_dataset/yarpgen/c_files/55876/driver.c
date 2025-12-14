#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned long long int var_2 = 12010027532266349280ULL;
unsigned short var_3 = (unsigned short)54620;
unsigned long long int var_4 = 4989063082786126043ULL;
unsigned long long int var_6 = 10654966633057079130ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1585207028U;
unsigned long long int var_10 = 12214352753967044283ULL;
int zero = 0;
unsigned long long int var_11 = 18196787881195404104ULL;
unsigned long long int var_12 = 16637579853979221450ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 517208101;
unsigned short var_15 = (unsigned short)24499;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
