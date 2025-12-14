#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18182127493187327258ULL;
signed char var_6 = (signed char)-44;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 17507805436423239278ULL;
unsigned char var_19 = (unsigned char)3;
int var_20 = 422154864;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
