#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11253;
unsigned long long int var_2 = 4300273620615696121ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 7034960831252525493ULL;
int zero = 0;
unsigned long long int var_12 = 18317349516239438234ULL;
long long int var_13 = 4151729372125398489LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
