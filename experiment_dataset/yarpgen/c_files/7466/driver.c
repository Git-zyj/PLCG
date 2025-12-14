#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1225229520;
unsigned long long int var_1 = 12977518595271800319ULL;
int var_3 = 629235597;
long long int var_7 = -6799530709404948146LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)30796;
long long int var_14 = 4675537779246653921LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
