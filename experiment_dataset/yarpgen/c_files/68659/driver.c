#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-11;
signed char var_5 = (signed char)-70;
long long int var_6 = -3731745658501339476LL;
unsigned long long int var_7 = 5670867482892313420ULL;
unsigned long long int var_8 = 13768275040544856471ULL;
long long int var_9 = 2280454854830985363LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)237;
_Bool var_15 = (_Bool)0;
long long int var_16 = -2339198365338509677LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
