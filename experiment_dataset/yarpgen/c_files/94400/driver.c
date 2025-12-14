#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)105;
unsigned long long int var_5 = 7528620337412071459ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 15377372997114700144ULL;
int var_9 = -1179834680;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)31580;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
