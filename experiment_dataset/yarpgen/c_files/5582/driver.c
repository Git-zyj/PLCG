#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35178;
short var_3 = (short)32480;
long long int var_4 = 6000355711282180024LL;
unsigned long long int var_6 = 7433240783990393100ULL;
unsigned short var_11 = (unsigned short)46822;
int zero = 0;
long long int var_13 = 4547719794697197390LL;
long long int var_14 = -5320068181511944217LL;
unsigned long long int var_15 = 13101086095795366832ULL;
void init() {
}

void checksum() {
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
