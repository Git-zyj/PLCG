/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64769
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */int) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1985184012U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1)) : (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28184)) << (((1458491951625414949ULL) - (1458491951625414942ULL)))))))), (((var_13) >> (((-330322232) + (330322236))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (919840651U) : (arr_5 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 2]))) : (((arr_5 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-14891))))))), ((+(arr_5 [i_1 + 2])))));
            var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_0])))) ^ (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) arr_4 [i_1])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14914)) ? (((/* implicit */int) (short)14890)) : (((/* implicit */int) (short)-14882)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (-2591532782861066200LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) << ((((+(((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (short)1)))))) - (250)))));
            arr_8 [i_0] [i_1] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16988252122084136665ULL)) ? (-7670675979501361243LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ^ (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (17179869183ULL))))), (((((/* implicit */_Bool) arr_2 [i_1 + 4] [i_1])) ? (arr_2 [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_16 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (18446744073709551615ULL)))))))));
                            var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) max(((short)29977), ((short)-2667)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9588)) ? (((/* implicit */int) (short)14891)) : (330322231)))) ? (((67108863U) ^ (((/* implicit */unsigned int) -49729079)))) : (3347984470U)))) : ((((-9223372036854775807LL - 1LL)) / (1275249845316884855LL)))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1306715893147339115ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_2 [i_0] [i_2])))) ? (((((/* implicit */unsigned long long int) 2097151)) + (arr_2 [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (67108871U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16383))))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_6)) & (4251761489U)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) 352556730)) : (arr_11 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65535))))) : (((0ULL) / (((/* implicit */unsigned long long int) var_3))))))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (int i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_27 [i_8] [i_7] [i_8] [i_6] [i_8] = ((/* implicit */short) (~((~(((((/* implicit */int) (short)-22359)) - (8388607)))))));
                            arr_28 [i_0] [i_8] [i_0] [i_0] [i_7 - 1] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) (short)20725))))) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((652120718) >= (((/* implicit */int) var_5))))))))) ? (((/* implicit */long long int) ((283949126) << ((((+(67108863U))) - (67108863U)))))) : (((((/* implicit */_Bool) ((16) >> (((var_3) + (786305933)))))) ? (arr_12 [i_0] [i_2] [i_2]) : (((/* implicit */long long int) 356219102))))));
                        }
                    } 
                } 
            } 
            var_20 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_0] [i_0] [i_2]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [i_2]))))) > ((~(18446744073709551615ULL)))));
        }
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) var_0)) ? (((arr_10 [i_9] [i_0]) >> (((arr_12 [i_9] [i_9] [i_9]) - (2077604300622189771LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (signed char)2)))))))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1613533398423251455ULL)) ? (-269245458) : (((/* implicit */int) (_Bool)0)))))))));
            var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((arr_2 [i_0] [i_9]) << (((/* implicit */int) (_Bool)1))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_13 [i_9] [i_9] [i_9] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)29056)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)31)))))))));
            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (arr_30 [i_9])))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (18446744073709551590ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_0])) : (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) max((arr_17 [i_0] [i_9] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)2))))) ? (((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) 891786409))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-30)))))))));
            var_24 = ((/* implicit */short) (+(((/* implicit */int) max(((unsigned char)253), (((/* implicit */unsigned char) ((1929162949914008583LL) != (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 490294227695306013LL)) ? (((/* implicit */unsigned long long int) -1734184371083204459LL)) : (13910944632167706187ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [i_0] [i_0] [i_0] [i_9]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) : (((var_6) | (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((((-3950389391397565662LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)46879)) - (46859)))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            arr_34 [i_10] = ((/* implicit */_Bool) ((arr_9 [i_10]) >> (((((/* implicit */int) (short)451)) - (389)))));
            var_26 = (+(((((/* implicit */_Bool) var_1)) ? (640221652) : (((/* implicit */int) var_11)))));
        }
        var_27 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) 1295355601726615215ULL)) ? (((/* implicit */int) (short)-400)) : (((/* implicit */int) (unsigned short)44968)))), (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        arr_35 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_8)))) ^ (((((/* implicit */_Bool) (short)400)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned short)65535))))))) ? (((((/* implicit */_Bool) (short)-23587)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((-607457373190086269LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_23 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115)))))) & (min((var_1), (((/* implicit */int) var_8)))))))));
    }
    for (short i_11 = 1; i_11 < 22; i_11 += 1) 
    {
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_13) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_36 [i_11] [i_11 - 1])) : (arr_38 [i_11 - 1] [i_11]))))))) ? (((/* implicit */unsigned long long int) ((((arr_37 [i_11] [i_11]) || (((/* implicit */_Bool) 2147483647)))) ? (min((((/* implicit */long long int) (short)19)), (-6726991694169162408LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_11 + 1] [i_11 + 1])) ? (((/* implicit */int) (_Bool)0)) : (var_1))))))) : (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_13))) >> (((((((/* implicit */_Bool) (short)385)) ? (((/* implicit */int) (short)-434)) : (((/* implicit */int) (short)-20)))) + (475)))))));
        var_29 ^= (!(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_37 [i_11] [i_11])), (var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -650115927681716285LL)) ? (arr_38 [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
        arr_39 [i_11] [i_11] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_1)) : (-650115927681716285LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-19)) || (((/* implicit */_Bool) var_4)))))))), (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2147483647)), (var_4)))) % (min((((/* implicit */unsigned long long int) var_10)), (1489664537287079813ULL)))))));
        arr_40 [i_11 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)511))))) ? (((((/* implicit */_Bool) ((arr_38 [i_11] [i_11]) / (arr_38 [i_11] [i_11])))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) (unsigned short)58989)) ? (((/* implicit */unsigned long long int) 4381127082169456257LL)) : (16957079536422471802ULL))))) : (((/* implicit */unsigned long long int) ((arr_37 [i_11] [i_11 - 1]) ? ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((18446744073709551597ULL) - (18446744073709551579ULL))))) : (((/* implicit */int) var_0)))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)18)), (max(((short)24339), ((short)(-32767 - 1))))))) ? (((((/* implicit */_Bool) ((arr_13 [i_12] [i_12] [i_12] [i_12]) << (((((/* implicit */int) (unsigned char)132)) - (131)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (arr_24 [i_12] [i_12] [i_12] [i_12] [i_12])))) : (min((7673120889250564816ULL), (3434269919042764956ULL))))) : (((/* implicit */unsigned long long int) ((((var_6) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_12])), (arr_19 [i_12] [i_12] [i_12] [i_12] [i_12])))) - (216))))))));
        /* LoopSeq 2 */
        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            var_31 = ((/* implicit */_Bool) max((var_31), (((((((/* implicit */_Bool) 10773623184458986800ULL)) ? (((((/* implicit */unsigned long long int) -1191966368)) * (18ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-32763), ((short)-24195))))))) != ((((_Bool)1) ? (max((((/* implicit */unsigned long long int) var_11)), (arr_17 [i_13] [i_13] [i_13] [i_13] [i_13]))) : (((((/* implicit */unsigned long long int) 1429120837)) % (1781925395831988521ULL)))))))));
            var_32 *= ((/* implicit */short) (((~(18446744073709551614ULL))) >> (((var_13) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))));
        }
        /* vectorizable */
        for (short i_14 = 3; i_14 < 19; i_14 += 3) 
        {
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (((arr_32 [i_12] [i_14]) ^ (((/* implicit */unsigned long long int) 2497058435U))))));
            arr_48 [i_12] [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)18))));
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_9)) - (3267)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_3)) : (255ULL))) : (255ULL)));
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((/* implicit */int) var_7))))) ? ((+(-2532988025343977570LL))) : (((/* implicit */long long int) var_1)))))));
                        arr_54 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_12] [i_14] [i_15])))))) : (((((/* implicit */unsigned long long int) var_6)) / (arr_42 [i_12] [i_14])))));
                    }
                } 
            } 
        }
    }
    var_36 = ((/* implicit */short) (+(max((((((/* implicit */_Bool) 16310550439465644375ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))), ((~(var_3)))))));
    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_12)) & (var_4)))) % (((((/* implicit */_Bool) 2136193634243907234ULL)) ? (16783871374151303255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8198)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)399)) >> (((((/* implicit */int) var_0)) + (5959)))))))))) : ((+(max((10237123368963195337ULL), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopNest 3 */
    for (short i_17 = 1; i_17 < 23; i_17 += 3) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            for (short i_19 = 0; i_19 < 24; i_19 += 2) 
            {
                {
                    arr_63 [i_17 + 1] [i_17] [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_57 [i_17] [i_17]))))) ? (((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (3265))))) : (((/* implicit */int) (unsigned char)248)))))));
                    arr_64 [i_17] [i_18] [i_17] = (i_17 % 2 == zero) ? (((/* implicit */short) ((((((((/* implicit */int) arr_55 [i_17])) + (2147483647))) << (((((var_12) + (329922925))) - (6))))) >> (((((16310550439465644384ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2995))))) - (15326485056997300694ULL)))))) : (((/* implicit */short) ((((((((((/* implicit */int) arr_55 [i_17])) - (2147483647))) + (2147483647))) << (((((var_12) + (329922925))) - (6))))) >> (((((16310550439465644384ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2995))))) - (15326485056997300694ULL))))));
                }
            } 
        } 
    } 
}
