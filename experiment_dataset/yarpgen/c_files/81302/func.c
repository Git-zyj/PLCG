/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81302
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
    var_11 *= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((unsigned short)35619), (((/* implicit */unsigned short) (short)-32748)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53542)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) ((unsigned short) arr_1 [i_2]))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) max((((short) var_10)), ((short)(-32767 - 1)))))));
                    arr_10 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (((~(min((((/* implicit */long long int) (unsigned char)5)), (-6221486185168163LL))))) % (((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned short)53545), (arr_0 [i_0])))))))));
                    var_13 = 1710043201U;
                    var_14 = ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (unsigned char)240))), (((arr_7 [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)3)) : (-723614370)))))) ? (max((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_6 [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2211875114U))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)29916), (((/* implicit */unsigned short) (unsigned char)4)))))));
                }
            } 
        } 
        var_15 -= ((/* implicit */unsigned char) (-(((/* implicit */int) min(((unsigned short)11994), (((/* implicit */unsigned short) arr_2 [i_0])))))));
        var_16 = ((/* implicit */unsigned short) -21LL);
    }
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) arr_11 [i_3 + 2])), (((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) ((arr_15 [i_4 + 1] [i_4] [i_5]) < ((+(arr_15 [i_4 - 2] [i_4 - 2] [i_5])))));
                    var_18 = ((/* implicit */short) arr_11 [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 16; i_6 += 4) 
                    {
                        for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) arr_15 [i_3 - 1] [i_6] [i_7])))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2108871158))))) <= (((arr_21 [i_3] [i_3] [i_6] [i_3]) - (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) (((+(210030868))) == (((/* implicit */int) ((((/* implicit */_Bool) -8669248906967837495LL)) || (((/* implicit */_Bool) (short)-25068))))))))));
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((unsigned int) var_0)), (max((4294967295U), (((/* implicit */unsigned int) 2072138350)))))))));
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) (_Bool)0)), (var_6))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) arr_17 [i_3] [i_4] [i_3])) : (((/* implicit */int) (unsigned char)5))))))))));
                                var_22 ^= ((/* implicit */unsigned int) arr_21 [i_3] [i_3 + 1] [i_3] [i_3]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((arr_22 [i_3] [i_4 - 1] [i_5] [i_4 - 1] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_4] [i_3])))))) ? (((/* implicit */unsigned long long int) arr_19 [i_5] [i_4 + 1] [i_3 - 1])) : (18446744073709551615ULL)))));
                }
            } 
        } 
        var_24 = (+((-9223372036854775807LL - 1LL)));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    var_25 -= ((/* implicit */unsigned long long int) arr_25 [i_3] [i_8] [i_9] [i_9] [i_3] [i_9] [i_8]);
                    arr_34 [i_3] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (-(17U))))) ? (arr_19 [i_3] [i_8] [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_3 + 2] [i_3 + 2] [i_9])) ? (((/* implicit */int) arr_30 [i_3 + 2] [i_8] [i_3 + 2])) : (((/* implicit */int) arr_30 [i_3 - 1] [i_3 - 1] [i_9])))))));
                }
            } 
        } 
        arr_35 [i_3] [i_3] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) arr_23 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 1])))));
    }
    var_26 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_8)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (11193061759596683687ULL))))), (((/* implicit */unsigned long long int) (short)28717))));
    /* LoopNest 2 */
    for (short i_10 = 3; i_10 < 12; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_10 + 3] [i_10] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10777327035380645661ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_11] [i_11] [i_10] [i_10]))) != (var_10))))) : ((+(var_2)))))) | ((+(arr_27 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10])))));
                var_28 = ((/* implicit */signed char) ((long long int) arr_31 [2]));
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 15; i_12 += 1) 
                {
                    for (unsigned int i_13 = 3; i_13 < 14; i_13 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) 
                            {
                                var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4LL)))))));
                                var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)210)), (((unsigned int) arr_41 [i_11]))))) != (max((arr_27 [i_10 + 1] [i_10] [i_10 - 2] [i_10 - 1] [i_10 + 1]), (((/* implicit */long long int) arr_29 [i_10] [i_10] [i_13]))))));
                                var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5338)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) arr_18 [i_10] [i_10] [i_10] [i_13]))))) ? ((~(arr_40 [i_11]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((10777327035380645673ULL) <= (((/* implicit */unsigned long long int) arr_15 [i_14] [i_13] [i_11])))))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1836506121500794827ULL)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (short)17282)))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                            {
                                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (((_Bool)1) ? ((~(-813151731))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1)) && (arr_20 [i_10] [i_11] [i_10] [i_13])))))))));
                                var_33 = ((/* implicit */long long int) max((var_33), (((((/* implicit */_Bool) arr_21 [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13 + 1])) ? (((long long int) (short)-19472)) : (var_7)))));
                                arr_50 [i_10] [i_10 + 1] [i_10] [i_10 + 4] [(short)10] |= ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) arr_36 [i_12]))) + (2147483647))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_13 - 3] [i_12 + 1] [i_11] [i_10]))) + (arr_36 [i_10 - 1]))) + (5482281849662274521LL)))));
                            }
                            for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
                            {
                                var_34 = ((unsigned char) (_Bool)1);
                                arr_53 [i_10] [i_10] [i_10] [i_13] [i_10 + 2] = ((/* implicit */_Bool) arr_42 [i_16] [i_13] [i_10] [i_10]);
                                arr_54 [i_13] [i_10 + 2] [i_13] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((long long int) (unsigned short)35618))) ? (max((((/* implicit */unsigned long long int) (short)-29045)), (12243842700392911000ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_39 [i_13] [i_13])))))));
                            }
                            for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 1) /* same iter space */
                            {
                                arr_57 [i_13] [i_11] = ((/* implicit */unsigned long long int) max(((-(arr_45 [i_13 - 1] [i_12 - 3] [i_10 + 4] [i_10 - 3] [i_10 - 3]))), (((((/* implicit */_Bool) arr_45 [i_13 + 2] [i_12 - 3] [i_10 + 1] [i_10] [i_10 + 3])) ? (arr_45 [i_13 - 3] [i_12 + 1] [i_10 + 3] [i_10 + 3] [i_10 - 2]) : (((/* implicit */int) (unsigned char)30))))));
                                var_35 *= ((/* implicit */_Bool) ((short) (short)-2524));
                                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (~(min(((+(((/* implicit */int) arr_26 [i_10] [i_10] [i_12 - 2] [12U] [i_17] [i_11])))), (((/* implicit */int) arr_47 [i_12 - 3] [i_10 - 3] [i_10] [i_10] [i_10 + 4])))))))));
                            }
                            var_37 = ((((arr_19 [i_13 + 2] [i_13 - 1] [i_13]) + (((/* implicit */long long int) ((((/* implicit */_Bool) 274844352512LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (331978784U)))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [i_11] [i_13 + 2])), (1073741823LL)))) ? ((-(-64324274))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_31 [i_13]))))))));
                            var_38 = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) (~(arr_15 [i_10] [i_10] [i_10])))) < (7669417038328905948ULL)))), (max((arr_17 [i_10] [i_10 - 3] [i_13]), (((/* implicit */short) ((signed char) arr_15 [i_10 + 1] [i_11] [i_10])))))));
                            var_39 = (!(((/* implicit */_Bool) ((short) (unsigned char)0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */short) -1);
                            var_41 = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */long long int) (short)-29043)), (arr_15 [i_10] [i_10] [i_10 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
