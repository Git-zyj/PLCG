#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10487;
int var_3 = -791360714;
int var_4 = -1751644225;
long long int var_6 = -3669335742532996623LL;
unsigned char var_8 = (unsigned char)195;
int var_9 = -1692703149;
signed char var_10 = (signed char)-125;
signed char var_11 = (signed char)104;
long long int var_15 = -740280191565135555LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-107;
unsigned int var_18 = 1201875284U;
int var_19 = 1494771293;
unsigned long long int var_20 = 16484353403502324447ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
