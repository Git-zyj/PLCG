#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)137;
unsigned char var_8 = (unsigned char)116;
long long int var_9 = 3480022356567820785LL;
signed char var_15 = (signed char)-85;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)57362;
long long int var_20 = -8601522986865474224LL;
int var_21 = -1562188109;
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
