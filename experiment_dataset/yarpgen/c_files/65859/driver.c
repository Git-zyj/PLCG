#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5286972291776218105LL;
unsigned short var_1 = (unsigned short)27788;
long long int var_2 = 8615024801505489643LL;
int var_3 = -771051364;
signed char var_4 = (signed char)118;
int var_6 = -2005685157;
unsigned short var_9 = (unsigned short)51277;
int zero = 0;
long long int var_10 = 4978368018323114114LL;
unsigned short var_11 = (unsigned short)31673;
long long int var_12 = 6493059863403932788LL;
short var_13 = (short)10457;
int var_14 = -413470423;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
