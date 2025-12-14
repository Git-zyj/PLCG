#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)17;
unsigned short var_8 = (unsigned short)59077;
unsigned char var_9 = (unsigned char)113;
long long int var_18 = -1965335076370554751LL;
int zero = 0;
long long int var_19 = 6029881084625468901LL;
long long int var_20 = 1374742988376125927LL;
unsigned char var_21 = (unsigned char)228;
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
