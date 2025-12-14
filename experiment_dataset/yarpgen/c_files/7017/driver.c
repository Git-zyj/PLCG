#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
long long int var_1 = -6064043467309794156LL;
unsigned short var_2 = (unsigned short)3616;
unsigned short var_4 = (unsigned short)63267;
unsigned int var_6 = 3684385375U;
long long int var_7 = 1658542097390108767LL;
long long int var_8 = -8884624220305619875LL;
unsigned int var_9 = 3086168471U;
int zero = 0;
unsigned long long int var_10 = 2116344466555263756ULL;
int var_11 = -1359461850;
unsigned short var_12 = (unsigned short)5714;
unsigned int var_13 = 217957429U;
unsigned char var_14 = (unsigned char)250;
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
