#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2741035354307190602ULL;
unsigned long long int var_1 = 15987837750647896644ULL;
int var_2 = -1441680449;
int var_3 = -909910355;
long long int var_4 = 3739319582465521693LL;
long long int var_5 = 5612029950409578266LL;
unsigned int var_6 = 3436507451U;
int var_10 = 699168868;
int zero = 0;
unsigned char var_12 = (unsigned char)213;
unsigned short var_13 = (unsigned short)62489;
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
