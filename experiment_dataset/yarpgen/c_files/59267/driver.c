#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4598640444905967551LL;
long long int var_7 = 4422265867268584443LL;
_Bool var_9 = (_Bool)0;
long long int var_14 = 246463712665573089LL;
long long int var_15 = 4577515909493402775LL;
signed char var_16 = (signed char)70;
int zero = 0;
unsigned char var_17 = (unsigned char)139;
long long int var_18 = -1518391597422957417LL;
unsigned char var_19 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
