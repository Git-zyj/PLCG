#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
unsigned char var_1 = (unsigned char)88;
long long int var_3 = 1050716967524167493LL;
short var_4 = (short)-29471;
signed char var_5 = (signed char)-95;
long long int var_6 = 6817988805984560978LL;
long long int var_7 = -7292382434632729951LL;
unsigned int var_8 = 714173144U;
long long int var_9 = 7883515256683969205LL;
int zero = 0;
long long int var_10 = 6206322749256573218LL;
unsigned int var_11 = 3041306742U;
signed char var_12 = (signed char)-23;
signed char var_13 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
