#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
int var_1 = 1628824945;
signed char var_2 = (signed char)-120;
unsigned short var_3 = (unsigned short)9296;
unsigned short var_4 = (unsigned short)16879;
unsigned short var_5 = (unsigned short)9181;
long long int var_9 = 458382027815758060LL;
int zero = 0;
long long int var_12 = 7734896967587983056LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
