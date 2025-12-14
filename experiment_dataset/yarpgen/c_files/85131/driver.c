#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2122766858;
unsigned int var_4 = 3014286729U;
unsigned short var_5 = (unsigned short)51803;
signed char var_7 = (signed char)110;
signed char var_10 = (signed char)-9;
int var_11 = -846748216;
signed char var_16 = (signed char)27;
int zero = 0;
long long int var_18 = 7761026204097603966LL;
unsigned short var_19 = (unsigned short)57109;
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
