#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2963851341368596724ULL;
int var_6 = 2073343532;
int var_10 = -1778439811;
int zero = 0;
long long int var_20 = -2533843881607671935LL;
unsigned int var_21 = 2848990609U;
unsigned short var_22 = (unsigned short)31947;
signed char var_23 = (signed char)-58;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
