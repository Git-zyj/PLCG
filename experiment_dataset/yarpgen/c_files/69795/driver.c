#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
unsigned int var_4 = 4164804890U;
long long int var_5 = 4612138991582002786LL;
unsigned short var_6 = (unsigned short)12992;
long long int var_7 = 9092009935953039824LL;
signed char var_8 = (signed char)-76;
short var_10 = (short)-29743;
signed char var_11 = (signed char)89;
int zero = 0;
unsigned long long int var_12 = 17280604638703270410ULL;
int var_13 = -2018859466;
short var_14 = (short)-1596;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
