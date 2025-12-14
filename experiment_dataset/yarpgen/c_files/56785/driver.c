#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11763056563911548969ULL;
unsigned char var_3 = (unsigned char)48;
long long int var_8 = 7916556859477437395LL;
long long int var_13 = -3699213660236941839LL;
int var_15 = 1332705341;
int zero = 0;
int var_18 = 710907967;
unsigned char var_19 = (unsigned char)57;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)71;
unsigned short var_22 = (unsigned short)19487;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
