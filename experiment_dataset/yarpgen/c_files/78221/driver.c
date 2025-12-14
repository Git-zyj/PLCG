#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62926;
signed char var_3 = (signed char)-45;
unsigned long long int var_8 = 6150623103000583182ULL;
unsigned int var_9 = 4227965219U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 1369709267360401403ULL;
long long int var_18 = -8676451069588505617LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
