#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12854;
signed char var_3 = (signed char)98;
_Bool var_4 = (_Bool)1;
long long int var_9 = 1903539758739637207LL;
int var_11 = -801776041;
unsigned char var_12 = (unsigned char)193;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = 6513999777956689860LL;
long long int var_17 = -8154611190513180577LL;
int var_18 = -1563220156;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
