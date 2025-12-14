#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1495938472U;
short var_2 = (short)-8046;
unsigned int var_3 = 1071758572U;
unsigned int var_4 = 843121716U;
int var_5 = -951205560;
unsigned long long int var_7 = 17726526849602513831ULL;
int zero = 0;
short var_11 = (short)25755;
unsigned int var_12 = 1214143386U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 11525316861769114906ULL;
void init() {
}

void checksum() {
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
