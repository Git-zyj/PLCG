#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
_Bool var_1 = (_Bool)1;
short var_2 = (short)277;
unsigned char var_3 = (unsigned char)194;
unsigned long long int var_8 = 17413327769602590815ULL;
int zero = 0;
unsigned int var_10 = 1037184814U;
short var_11 = (short)4947;
unsigned char var_12 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
