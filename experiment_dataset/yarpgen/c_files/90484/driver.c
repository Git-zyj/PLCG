#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned short var_1 = (unsigned short)23591;
long long int var_2 = 1843716659377285655LL;
long long int var_3 = -57394236775922760LL;
unsigned long long int var_4 = 16443922507423784425ULL;
short var_8 = (short)-9300;
short var_9 = (short)614;
unsigned long long int var_10 = 14328541235311248349ULL;
int var_11 = -1262819802;
short var_12 = (short)13794;
unsigned int var_13 = 2838062104U;
unsigned int var_14 = 8647223U;
unsigned int var_15 = 1774968933U;
long long int var_16 = -8389819446410724658LL;
signed char var_17 = (signed char)39;
int zero = 0;
long long int var_18 = 6104671659620563715LL;
unsigned short var_19 = (unsigned short)44726;
unsigned long long int var_20 = 4865075245464902052ULL;
unsigned int var_21 = 1682197492U;
unsigned long long int var_22 = 12709721517830880132ULL;
short var_23 = (short)-9015;
signed char var_24 = (signed char)96;
unsigned char var_25 = (unsigned char)157;
int var_26 = 471411431;
int var_27 = -1159949833;
unsigned short var_28 = (unsigned short)3847;
signed char var_29 = (signed char)100;
unsigned short var_30 = (unsigned short)40223;
unsigned short var_31 = (unsigned short)20600;
unsigned long long int var_32 = 12646915373519400674ULL;
unsigned int var_33 = 2449916326U;
short var_34 = (short)-16933;
signed char var_35 = (signed char)-85;
unsigned char var_36 = (unsigned char)233;
unsigned char var_37 = (unsigned char)226;
signed char var_38 = (signed char)9;
unsigned int var_39 = 8874052U;
int var_40 = -498783147;
int var_41 = 779984889;
int var_42 = -1913457196;
short var_43 = (short)-28690;
signed char var_44 = (signed char)-28;
unsigned int var_45 = 188824681U;
int var_46 = -1982197136;
unsigned long long int var_47 = 3898328354068652887ULL;
unsigned short var_48 = (unsigned short)44383;
unsigned char var_49 = (unsigned char)168;
unsigned long long int arr_0 [21] ;
short arr_1 [21] ;
unsigned short arr_3 [21] [21] ;
unsigned int arr_5 [21] [21] ;
unsigned int arr_9 [21] [21] [21] [21] ;
unsigned char arr_10 [21] [21] [21] ;
short arr_11 [21] ;
signed char arr_15 [21] [21] [21] [21] [21] [21] ;
signed char arr_16 [21] [21] ;
int arr_17 [21] ;
unsigned short arr_19 [21] [21] ;
long long int arr_20 [21] ;
short arr_27 [21] ;
signed char arr_28 [21] [21] ;
signed char arr_29 [21] [21] ;
signed char arr_36 [21] [21] ;
unsigned short arr_37 [21] [21] [21] ;
signed char arr_39 [21] [21] [21] ;
unsigned int arr_53 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 18002032043646226279ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-8970;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)60623;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 1918236068U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 704889248U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (short)-15001;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = -1879371576;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)61025;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = -688895905143900622LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (short)-19363;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-76 : (signed char)120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_36 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned short)48824;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_53 [i_0] = 789287387U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
