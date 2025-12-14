#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62916;
unsigned long long int var_2 = 12997790510082412831ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 12433403512351897059ULL;
unsigned int var_5 = 2324274807U;
unsigned short var_7 = (unsigned short)38578;
unsigned long long int var_11 = 10830090069752509162ULL;
unsigned long long int var_18 = 9977509445303946080ULL;
int zero = 0;
unsigned long long int var_19 = 8156206190067031448ULL;
unsigned char var_20 = (unsigned char)83;
unsigned int var_21 = 2079104178U;
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
