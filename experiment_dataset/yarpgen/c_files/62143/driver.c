#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-116;
short var_3 = (short)-24463;
unsigned char var_4 = (unsigned char)156;
long long int var_5 = -360694099659224726LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)3871;
int zero = 0;
long long int var_11 = 7630409827818755947LL;
int var_12 = 1480787845;
signed char var_13 = (signed char)-72;
unsigned int var_14 = 3535093587U;
_Bool var_15 = (_Bool)1;
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
