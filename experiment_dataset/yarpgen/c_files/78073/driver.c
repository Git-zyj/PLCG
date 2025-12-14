#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)241;
unsigned int var_2 = 1833020900U;
long long int var_3 = 7542327058023091883LL;
int var_4 = 581385747;
signed char var_5 = (signed char)84;
int var_6 = 692048075;
long long int var_7 = 4529991499004916860LL;
unsigned long long int var_8 = 5623010439899650448ULL;
unsigned long long int var_9 = 579871089346064581ULL;
long long int var_10 = -5699719352738144726LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-43;
unsigned long long int var_13 = 4742829872168495669ULL;
unsigned long long int var_14 = 11574441865154112681ULL;
void init() {
}

void checksum() {
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
