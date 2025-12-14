#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
int var_1 = 183787592;
_Bool var_2 = (_Bool)1;
short var_3 = (short)17671;
int var_4 = -840493782;
unsigned long long int var_5 = 4294627484090651768ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3309500157U;
unsigned long long int var_8 = 10438593272196256514ULL;
unsigned long long int var_9 = 1490309740714191517ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)6730;
_Bool var_12 = (_Bool)0;
int var_13 = -1875618295;
unsigned long long int var_14 = 11892257933118926538ULL;
unsigned long long int var_15 = 466665676147505245ULL;
signed char var_16 = (signed char)-82;
int var_17 = -1204904460;
unsigned short var_18 = (unsigned short)7790;
unsigned int var_19 = 1861673800U;
unsigned long long int var_20 = 7238587792571307004ULL;
unsigned long long int var_21 = 1609172127465503008ULL;
unsigned int var_22 = 2581705941U;
unsigned long long int var_23 = 13609908270588376077ULL;
unsigned short var_24 = (unsigned short)59946;
short var_25 = (short)15089;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-20;
short var_28 = (short)15878;
unsigned long long int var_29 = 6262232566453022704ULL;
signed char var_30 = (signed char)-109;
int var_31 = -1963941167;
unsigned int var_32 = 2722997632U;
unsigned long long int var_33 = 8295938645938503620ULL;
_Bool var_34 = (_Bool)1;
unsigned long long int var_35 = 7990707124156105252ULL;
unsigned long long int var_36 = 16250919515419811079ULL;
short var_37 = (short)-517;
_Bool var_38 = (_Bool)0;
signed char var_39 = (signed char)-48;
unsigned long long int var_40 = 6162682720769526753ULL;
unsigned long long int var_41 = 8065381265250859972ULL;
_Bool var_42 = (_Bool)1;
signed char var_43 = (signed char)33;
signed char var_44 = (signed char)-89;
unsigned short var_45 = (unsigned short)61279;
unsigned long long int var_46 = 15423560542750969297ULL;
_Bool var_47 = (_Bool)0;
unsigned long long int var_48 = 15849886410260314251ULL;
unsigned long long int var_49 = 12839790005110750688ULL;
unsigned short var_50 = (unsigned short)18487;
unsigned int var_51 = 3167232644U;
_Bool var_52 = (_Bool)0;
unsigned long long int var_53 = 16431008980518002984ULL;
unsigned int var_54 = 840379477U;
unsigned long long int var_55 = 1112290879196826999ULL;
unsigned long long int var_56 = 17503105769282269416ULL;
unsigned long long int var_57 = 18289450719739162326ULL;
_Bool var_58 = (_Bool)0;
unsigned long long int var_59 = 6751079852107323390ULL;
unsigned long long int var_60 = 15616919633391910422ULL;
unsigned long long int var_61 = 17213625220521281118ULL;
unsigned long long int var_62 = 512646115060850923ULL;
unsigned short var_63 = (unsigned short)35917;
unsigned long long int var_64 = 1647829318016246439ULL;
unsigned long long int var_65 = 17433595700960123240ULL;
unsigned long long int var_66 = 10750182587771054375ULL;
int var_67 = 1161910415;
unsigned long long int var_68 = 4558520923163056481ULL;
unsigned long long int var_69 = 1277350256221086726ULL;
unsigned long long int var_70 = 7465912503328906436ULL;
unsigned long long int var_71 = 3987151132818946321ULL;
_Bool var_72 = (_Bool)0;
_Bool arr_2 [24] ;
signed char arr_3 [24] ;
signed char arr_8 [24] [24] [24] ;
short arr_15 [18] ;
int arr_17 [18] [18] [18] ;
unsigned int arr_18 [18] ;
unsigned long long int arr_26 [18] ;
unsigned short arr_31 [15] [15] ;
int arr_32 [15] ;
int arr_34 [15] [15] ;
_Bool arr_37 [15] [15] ;
unsigned long long int arr_38 [15] ;
unsigned short arr_40 [15] [15] [15] [15] [15] [15] ;
short arr_42 [15] ;
unsigned long long int arr_61 [15] [15] ;
unsigned long long int arr_62 [15] [15] ;
short arr_63 [15] [15] [15] [15] [15] ;
short arr_68 [15] [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_71 [15] [15] [15] [15] ;
unsigned long long int arr_74 [15] ;
signed char arr_82 [15] [15] [15] [15] [15] ;
unsigned long long int arr_5 [24] ;
unsigned long long int arr_10 [24] [24] [24] ;
unsigned long long int arr_13 [24] [24] ;
unsigned int arr_20 [18] [18] [18] ;
unsigned short arr_23 [18] ;
unsigned long long int arr_27 [18] ;
unsigned short arr_41 [15] ;
signed char arr_46 [15] ;
unsigned int arr_50 [15] [15] ;
_Bool arr_51 [15] ;
signed char arr_59 [15] [15] [15] [15] ;
unsigned long long int arr_69 [15] [15] [15] [15] [15] [15] ;
signed char arr_70 [15] [15] [15] [15] ;
int arr_78 [15] [15] [15] [15] ;
unsigned long long int arr_92 [15] [15] [15] [15] ;
int arr_102 [15] [15] [15] ;
unsigned int arr_105 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (short)4404;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 168534415;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 1043353671U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = 13215734618528607440ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)52297;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = -1664314173;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_34 [i_0] [i_1] = 1855446647;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_37 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_38 [i_0] = 586605412789349376ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)15503;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_42 [i_0] = (short)-4613;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_61 [i_0] [i_1] = 10464276639272300653ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_62 [i_0] [i_1] = 8401362713140998680ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-24335 : (short)22423;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-16134;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_71 [i_0] [i_1] [i_2] [i_3] = 13930446043802074542ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_74 [i_0] = 4332269182547532728ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)20 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 10771924449961993474ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 14304210337462242256ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = 8471761318674010265ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1653431251U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (unsigned short)34217;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = 6127151915519000141ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_41 [i_0] = (unsigned short)23860;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_46 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_50 [i_0] [i_1] = 792272912U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_51 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 10373472799390462788ULL : 3039524662482020702ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_78 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1260384147 : 1057800773;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_92 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6412188008743505666ULL : 17566047180905733285ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_102 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -337521691 : -887405120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_105 [i_0] = 1402587676U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_59 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_78 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_92 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_102 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_105 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
