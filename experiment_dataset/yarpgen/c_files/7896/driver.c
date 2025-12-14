#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -784616986;
unsigned int var_4 = 645881610U;
signed char var_7 = (signed char)-109;
unsigned char var_8 = (unsigned char)25;
int var_9 = -1251814424;
_Bool var_11 = (_Bool)1;
long long int var_12 = 238194452342203500LL;
signed char var_15 = (signed char)58;
int zero = 0;
long long int var_16 = 2350478844707591454LL;
short var_17 = (short)-26010;
signed char var_18 = (signed char)-13;
unsigned char var_19 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
