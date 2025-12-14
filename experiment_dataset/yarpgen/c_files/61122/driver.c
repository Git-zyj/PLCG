#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 16624239102148990224ULL;
unsigned long long int var_10 = 6129887714379678254ULL;
long long int var_14 = 587219523699860908LL;
unsigned long long int var_16 = 4702999240915681264ULL;
int zero = 0;
unsigned long long int var_18 = 5451528224511727075ULL;
unsigned char var_19 = (unsigned char)19;
int var_20 = 1952810386;
long long int var_21 = 1599953375967439876LL;
unsigned long long int arr_0 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 10691048216999473758ULL;
}

void checksum() {
    hash(&seed, var_18);
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
