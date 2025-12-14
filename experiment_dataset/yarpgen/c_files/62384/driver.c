#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
short var_2 = (short)10649;
long long int var_5 = 1396837925580810111LL;
int var_8 = -1977181747;
long long int var_9 = 4564411918261518665LL;
unsigned short var_12 = (unsigned short)3587;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -550015139004642515LL;
short var_15 = (short)-12760;
unsigned short var_16 = (unsigned short)53151;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
