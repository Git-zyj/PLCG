#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13611927449737565925ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)251;
int var_7 = -1740469866;
unsigned long long int var_9 = 6855343675680335677ULL;
int zero = 0;
int var_10 = 74006325;
long long int var_11 = -6921585153172212658LL;
unsigned long long int var_12 = 13363360909400681275ULL;
signed char var_13 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
