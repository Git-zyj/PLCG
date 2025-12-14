#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5540348607722796086LL;
unsigned char var_2 = (unsigned char)94;
int var_6 = -1210962880;
signed char var_13 = (signed char)120;
int var_14 = 219266607;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-117;
long long int var_21 = 398571848804288099LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
