#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)156;
long long int var_12 = -4701850520459903238LL;
long long int var_14 = -1947466294924273982LL;
int zero = 0;
long long int var_19 = 182815337273249767LL;
unsigned short var_20 = (unsigned short)4607;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3496931233U;
long long int var_23 = 2411216146191383844LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
