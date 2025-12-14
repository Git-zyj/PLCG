#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1096336749;
unsigned long long int var_4 = 9189439214339814718ULL;
int var_8 = 2072107362;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-14680;
signed char var_15 = (signed char)57;
int var_16 = 611726704;
unsigned short var_17 = (unsigned short)41721;
int zero = 0;
short var_19 = (short)18117;
long long int var_20 = -6306222016500165964LL;
unsigned long long int var_21 = 11490620246116030073ULL;
int var_22 = -1113711761;
long long int var_23 = -6164340973607724710LL;
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
