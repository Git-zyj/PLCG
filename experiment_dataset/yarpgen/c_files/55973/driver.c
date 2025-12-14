#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -999032340826382754LL;
unsigned long long int var_6 = 12879154634281490471ULL;
signed char var_7 = (signed char)-46;
signed char var_8 = (signed char)-50;
unsigned short var_9 = (unsigned short)4080;
short var_10 = (short)-27674;
short var_12 = (short)-19761;
long long int var_15 = -3822662098652888069LL;
unsigned char var_16 = (unsigned char)85;
int zero = 0;
unsigned long long int var_17 = 18311139023347757716ULL;
long long int var_18 = 9121600158692494344LL;
unsigned long long int var_19 = 9640662555193333109ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
