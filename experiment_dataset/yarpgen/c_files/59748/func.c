/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59748
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
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned int) (unsigned char)218)), (1514700510U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) >> (((2640666161U) - (2640666146U)))));
                        arr_13 [(signed char)10] [i_2] [(unsigned char)14] = ((/* implicit */signed char) min((((/* implicit */long long int) (-(2426581896U)))), ((+(arr_6 [i_3] [i_2] [i_3] [i_3])))));
                        var_16 ^= ((/* implicit */signed char) arr_3 [i_1] [i_3]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (~((~(max((((/* implicit */unsigned long long int) arr_17 [i_0] [5LL])), (17231797427410353922ULL)))))));
                            var_18 = ((/* implicit */unsigned short) (signed char)21);
                            arr_24 [13U] [13U] [13U] [i_6] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_5] [i_5])) <= (((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */int) (unsigned short)65533)))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_3))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_8 = 3; i_8 < 14; i_8 += 1) 
            {
                var_20 ^= ((/* implicit */signed char) (-(max((131071U), (16777215U)))));
                var_21 = ((/* implicit */_Bool) arr_6 [i_8] [i_7] [i_7] [i_8]);
                arr_33 [i_0] [(signed char)6] [i_7] [i_7] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_7])), (((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) : (18446744073709551605ULL)))))));
            }
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                arr_36 [i_7] = ((/* implicit */unsigned short) arr_31 [i_7]);
                var_22 |= ((/* implicit */long long int) var_14);
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 3383017616302710451LL))) && (((min((5273366227668704485ULL), (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                arr_40 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (unsigned char)229))));
                arr_41 [(unsigned char)12] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)106))));
                /* LoopSeq 4 */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    arr_44 [i_0] [(unsigned short)12] [i_7] = ((((/* implicit */_Bool) arr_17 [i_0] [i_11])) ? (841931779U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_7]))));
                    arr_45 [i_0] [i_7] [i_7] [i_10] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_17 [i_7] [i_7])))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((unsigned int) arr_16 [i_0] [(unsigned char)9] [i_7] [(unsigned char)9] [i_7])))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [14LL] [i_10] [i_12])) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0]))));
                    arr_49 [i_0] [i_7] [i_10] [i_7] = ((/* implicit */unsigned char) arr_34 [i_0] [i_10] [i_10]);
                }
                for (signed char i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)90)) ? (-3861283605103784008LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_14])))));
                        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))));
                        arr_55 [i_7] [i_7] [i_13] [i_7] [i_7] [14U] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2058468076U)) & (11ULL)));
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) arr_5 [i_0] [i_7] [i_10])) : (12LL)));
                    }
                    for (unsigned int i_15 = 2; i_15 < 14; i_15 += 1) 
                    {
                        arr_59 [i_7] [i_10] [i_10] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_15 - 1]) : (arr_0 [i_15 - 1])));
                        arr_60 [i_7] [i_7] [(unsigned short)3] [i_13] [13U] [13U] = ((/* implicit */unsigned char) (_Bool)0);
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4294967295U) * (arr_56 [i_0] [1LL] [0LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) 1364667891U)) ? (4655594315180475118ULL) : (((/* implicit */unsigned long long int) 3446978457U))))));
                    }
                    var_30 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
                }
                for (signed char i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */_Bool) 66060288U);
                    var_32 = ((/* implicit */signed char) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77)))));
                    /* LoopSeq 4 */
                    for (unsigned char i_17 = 3; i_17 < 15; i_17 += 4) /* same iter space */
                    {
                        var_33 = (signed char)116;
                        arr_67 [i_16] [i_7] [i_10] [i_16] [i_16] |= ((/* implicit */signed char) ((unsigned char) var_12));
                        var_34 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 1597196635U)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned char i_18 = 3; i_18 < 15; i_18 += 4) /* same iter space */
                    {
                        arr_70 [i_0] [i_0] [i_0] [i_10] [6U] [i_16] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4634809342094859675LL))))) - (((/* implicit */int) (signed char)114))));
                        arr_71 [i_0] [i_7] [i_0] [i_10] [i_10] [i_18] [i_18] = ((/* implicit */unsigned short) (~((~(6U)))));
                        var_35 = ((/* implicit */unsigned long long int) arr_42 [i_7] [i_7] [i_7] [6ULL] [(signed char)10] [13U]);
                    }
                    for (unsigned char i_19 = 3; i_19 < 15; i_19 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 6698358653592878662ULL)) ? (arr_22 [i_0] [i_7] [i_10] [i_16] [i_10]) : (1364667895U)))));
                        var_37 += ((/* implicit */long long int) (((~(var_7))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_0] [i_10])) || (((/* implicit */_Bool) var_6))))))));
                    }
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        var_38 = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) var_8))));
                        arr_77 [i_0] [i_7] [(signed char)7] [i_0] [i_7] = ((/* implicit */signed char) (-((~(((/* implicit */int) var_12))))));
                        arr_78 [i_7] [i_7] [i_16] [i_16] [i_20] [i_20] = ((/* implicit */unsigned int) var_14);
                        var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)18))))) ? (((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)65527)))) : (((/* implicit */int) var_3))));
                        var_40 = ((/* implicit */unsigned short) (+(1699796799U)));
                    }
                    var_41 = ((/* implicit */signed char) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_8))))) == (((/* implicit */int) arr_17 [i_0] [i_0]))));
                }
            }
            var_42 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_7] [i_7] [i_0])) | (((/* implicit */int) (signed char)124))))) || (((((/* implicit */_Bool) (signed char)-119)) || (((/* implicit */_Bool) (signed char)-11))))));
            var_43 = ((/* implicit */signed char) (unsigned short)62288);
        }
        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) (signed char)-12)), (742296002U))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))) : ((((~(((/* implicit */int) (signed char)69)))) - (((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) (signed char)103))))))));
        arr_79 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65520))))) ? (((/* implicit */int) arr_72 [i_0])) : (((/* implicit */int) min(((signed char)-117), (arr_72 [i_0]))))));
    }
    for (signed char i_21 = 0; i_21 < 16; i_21 += 3) /* same iter space */
    {
        arr_83 [i_21] [i_21] = ((/* implicit */long long int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) ^ (2U))), (((3446978457U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        var_45 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 3817358203U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)188)))), ((-(((/* implicit */int) (_Bool)1))))));
        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-17)) % ((~(((/* implicit */int) (_Bool)0)))))))));
        var_47 = ((((((/* implicit */_Bool) 1279361528U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80))) : (((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned long long int) 2263349615U)) : (4026531840ULL))))) / ((-(min((((/* implicit */unsigned long long int) var_8)), (1125899904745472ULL))))));
        arr_84 [i_21] [i_21] = ((/* implicit */unsigned int) max((((/* implicit */signed char) (((~(7545489902162318751LL))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)29448)) != (((/* implicit */int) (unsigned char)211))))))))), (((signed char) var_2))));
    }
    for (unsigned char i_22 = 0; i_22 < 17; i_22 += 4) 
    {
        arr_89 [i_22] = ((/* implicit */signed char) arr_88 [i_22] [i_22]);
        arr_90 [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)12)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)201)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -5602458066210926075LL)) || (((/* implicit */_Bool) arr_86 [i_22] [i_22])))))) : ((+(var_5)))));
        var_48 = ((/* implicit */unsigned char) var_9);
        var_49 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) min(((unsigned short)44093), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) var_13))) & (var_11))))) == (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) -3831375508699922140LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))) : (3352974449U))))))));
    }
    for (signed char i_23 = 3; i_23 < 21; i_23 += 2) 
    {
        var_50 = ((/* implicit */unsigned int) (-(min((18446744073709551610ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
        arr_94 [i_23] = ((/* implicit */unsigned short) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))) - (11U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))))) * (((((/* implicit */_Bool) 1897463395U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)127))))) : ((+(2381018298U)))))));
    }
}
