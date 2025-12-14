#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
unsigned char var_3 = (unsigned char)109;
short var_4 = (short)25282;
short var_8 = (short)-14155;
unsigned int var_9 = 3624878890U;
_Bool var_11 = (_Bool)0;
long long int var_13 = -300767533911417790LL;
unsigned long long int var_15 = 9901694535453257909ULL;
int zero = 0;
long long int var_18 = 3198825953502860413LL;
int var_19 = -2054061800;
void init() {
}

void checksum() {
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
