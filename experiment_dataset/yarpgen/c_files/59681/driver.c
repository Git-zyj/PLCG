#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
signed char var_2 = (signed char)-20;
unsigned long long int var_3 = 4545204099782010090ULL;
unsigned char var_7 = (unsigned char)217;
unsigned long long int var_8 = 3053280445512183163ULL;
unsigned short var_9 = (unsigned short)57990;
long long int var_12 = 8825587655059826230LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 4684058581559421398LL;
unsigned short var_15 = (unsigned short)53227;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
