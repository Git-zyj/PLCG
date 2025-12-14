#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52715;
signed char var_3 = (signed char)-34;
int var_11 = -1255320490;
unsigned int var_15 = 1632518498U;
int zero = 0;
unsigned char var_19 = (unsigned char)161;
long long int var_20 = 6329449209986680529LL;
unsigned char var_21 = (unsigned char)50;
unsigned long long int var_22 = 8049683624374627449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
