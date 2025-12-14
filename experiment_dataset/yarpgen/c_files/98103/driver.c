#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27430;
_Bool var_4 = (_Bool)1;
long long int var_5 = 1330685149009782739LL;
short var_6 = (short)-8449;
long long int var_8 = -8566829903434852879LL;
unsigned int var_13 = 1716076220U;
short var_14 = (short)-9188;
int zero = 0;
int var_18 = 1045318378;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
