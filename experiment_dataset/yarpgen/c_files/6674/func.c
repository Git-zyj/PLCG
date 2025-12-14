/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6674
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_5))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) arr_1 [i_0 + 1])))) : (((arr_1 [i_0 + 1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        /* LoopSeq 4 */
        for (short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_9)) * (((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */int) (unsigned char)144)) : (((((/* implicit */int) ((arr_0 [i_1]) == (((/* implicit */int) var_9))))) + (((((/* implicit */int) (signed char)15)) ^ (((/* implicit */int) arr_3 [i_0 - 1] [i_1 - 3]))))))));
            arr_5 [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) min(((-(((arr_1 [i_1 - 1]) ? (((/* implicit */int) (unsigned short)30741)) : (((/* implicit */int) var_6)))))), (827368805)));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)34))));
            arr_10 [i_0] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) (~(min((var_1), (var_8)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)23)) + (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))) < ((-9223372036854775807LL - 1LL))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 + 1]))))) : (var_3)));
            arr_14 [i_0] [(signed char)1] [i_0] = ((/* implicit */_Bool) (signed char)-116);
            var_16 += ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1]))) * (((2361926083U) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))) ? ((((~(var_2))) + (((/* implicit */long long int) ((/* implicit */int) ((var_4) > (var_2))))))) : ((+(((((/* implicit */_Bool) arr_15 [i_0 + 1])) ? (((/* implicit */long long int) var_0)) : (-7028747310627567793LL)))))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                arr_20 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */signed char) arr_17 [i_4] [i_0]);
                arr_21 [i_5] [10U] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))) - (((((/* implicit */_Bool) (+(12252121342326771730ULL)))) ? (((/* implicit */long long int) (+(-677994932)))) : (((-9223372036854775797LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34798)))))))));
                var_18 = ((/* implicit */short) (~(((/* implicit */int) max((arr_8 [(unsigned short)10] [i_4]), (((/* implicit */signed char) ((-1881048687) >= (((/* implicit */int) var_5))))))))));
            }
            for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                arr_24 [i_6] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)96))))) && ((!(((/* implicit */_Bool) arr_7 [i_0]))))))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) arr_25 [i_4] [(_Bool)1] [i_6] [i_7]))))) ? ((~(arr_18 [i_0] [i_4] [i_0] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                    arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) var_0);
                }
                for (unsigned long long int i_8 = 3; i_8 < 23; i_8 += 4) 
                {
                    arr_31 [i_4] [i_4] [(signed char)12] [i_6] &= ((/* implicit */signed char) (-(((/* implicit */int) min(((unsigned short)57883), (arr_7 [i_8 - 1]))))));
                    var_20 &= ((/* implicit */signed char) (unsigned short)7651);
                    var_21 = ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)60808)) >> (((((((/* implicit */_Bool) 999548916)) ? (((/* implicit */long long int) 190477200)) : (var_2))) - (190477187LL)))))) - (((arr_18 [i_8] [i_6] [i_8] [i_8 - 3]) / (max((var_2), (((/* implicit */long long int) var_0)))))));
                }
                arr_32 [(unsigned short)0] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6] [i_4] [i_0 - 1])) ? (((/* implicit */long long int) arr_23 [i_0] [i_4] [i_0 - 1])) : (var_1)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                var_22 = var_5;
            }
            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                var_23 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned short)7))));
                arr_35 [i_0] [i_9] [i_9] [(signed char)23] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) % (var_2))))));
                var_24 = ((/* implicit */int) max((var_24), (arr_22 [i_0 - 1] [i_4])));
            }
            var_25 = (signed char)-11;
            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 2) 
            {
                var_26 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15)))))) % ((-9223372036854775807LL - 1LL)));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        {
                            var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_10 + 1] [i_0 + 1] [i_0 + 1])) ? ((+(arr_23 [i_10 + 2] [i_0 + 1] [i_0 + 1]))) : (arr_23 [i_10 + 1] [i_0 - 1] [i_0 + 1])));
                            arr_45 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_11])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((25) >= (((/* implicit */int) (unsigned short)192)))))));
                            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) var_6))))) ? (((((var_2) + (9223372036854775807LL))) << (((arr_25 [i_4] [i_4] [i_4] [i_11]) - (1817904509))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? ((+(((((/* implicit */_Bool) (unsigned short)57877)) ? (((/* implicit */int) arr_12 [i_12] [i_12])) : (((/* implicit */int) (short)15)))))) : (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (short)27)) : (((/* implicit */int) (unsigned short)59995))))));
                            var_29 += ((/* implicit */unsigned int) (~(var_1)));
                        }
                    } 
                } 
                var_30 = ((/* implicit */int) max((((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) arr_4 [(signed char)6] [i_4] [(short)2]))))) ? (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) var_7))));
                var_31 = ((/* implicit */_Bool) (short)24593);
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 3; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_32 -= arr_51 [i_10 + 1];
                            var_33 = ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_51 [i_0 - 1])))), (((((/* implicit */_Bool) arr_51 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_51 [i_0 - 1]))))));
                                arr_64 [i_15] [i_0 + 1] [i_16] [i_17] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)1999)) || (((/* implicit */_Bool) (unsigned short)60390)))) ? (arr_39 [i_0 - 1] [i_0 - 1] [i_0 - 1] [15LL] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))) ? (((((/* implicit */_Bool) arr_40 [(signed char)19] [i_15] [(signed char)19] [i_15])) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((var_1) + (1822067981413176426LL))) - (9LL)))))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) << (((var_4) - (7814218821660830202LL))))))));
                                arr_65 [i_0] [i_0] [i_16] [i_16] [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) 205025554U)) + (3343893126986727208LL)))) ? ((+(((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (signed char)122)))))) + ((-(((/* implicit */int) max((((/* implicit */signed char) arr_49 [i_0 + 1] [i_15] [i_0] [i_0 - 1])), (var_7))))))));
                                arr_66 [i_15] [15] [i_15] [i_17] [i_18] [15] = ((/* implicit */unsigned char) var_4);
                                arr_67 [i_0] [i_15] [i_15] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((267386880U), (((/* implicit */unsigned int) (signed char)41))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 1; i_19 < 21; i_19 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) arr_1 [22]))));
                        arr_71 [i_0 + 1] [(signed char)1] [i_15] [(signed char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))));
                        arr_72 [i_0] [i_15] [i_16] [i_19] [i_16] [i_16] = ((/* implicit */unsigned int) var_1);
                    }
                }
            } 
        } 
    }
    for (signed char i_20 = 1; i_20 < 9; i_20 += 1) 
    {
        var_36 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_4 [i_20 - 1] [i_20 + 1] [i_20 + 1]))))));
        var_37 = ((/* implicit */long long int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((var_1) >= (((/* implicit */long long int) arr_53 [i_20] [i_20]))))) >= (((/* implicit */int) (short)15))))))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 1) 
    {
        var_38 += ((/* implicit */signed char) min((arr_0 [i_21]), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_23 [(signed char)8] [i_21] [(_Bool)1]), (((/* implicit */int) (short)23241))))))))));
        arr_80 [i_21] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_9)))) >= ((~(((/* implicit */int) var_9))))));
    }
    for (unsigned int i_22 = 2; i_22 < 12; i_22 += 4) 
    {
        var_39 = ((/* implicit */short) ((arr_77 [i_22]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 1933041216U)) && (((/* implicit */_Bool) arr_28 [i_22]))))))))));
        var_40 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        var_41 = ((/* implicit */int) (!(min((arr_38 [i_22 + 3] [i_22 - 1] [i_22] [i_22 - 1]), (arr_38 [i_22 + 3] [i_22 - 1] [(_Bool)1] [i_22 - 1])))));
    }
    for (unsigned long long int i_23 = 2; i_23 < 16; i_23 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_24 = 2; i_24 < 14; i_24 += 2) 
        {
            var_42 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) : (var_8))) / (((/* implicit */long long int) ((/* implicit */int) var_5))));
            var_43 = ((/* implicit */signed char) (~(((((((/* implicit */int) arr_68 [i_24] [i_24 + 1] [i_23] [i_24])) >= (arr_22 [2LL] [i_24]))) ? (((/* implicit */int) arr_60 [i_23] [i_23 + 1] [i_24 + 3] [i_23 + 1] [20ULL] [i_24])) : (((/* implicit */int) var_6))))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            var_44 = ((/* implicit */unsigned int) ((arr_48 [i_25] [i_25] [i_25] [i_25] [i_23]) ? (min((arr_86 [i_23 - 2]), (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (short)15)))) : (((arr_53 [(signed char)6] [i_25]) / (((/* implicit */int) var_5))))))));
            var_45 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_50 [i_23 + 1] [i_23 + 1] [i_23] [i_25] [i_25])) : (12582912)))) + (((var_0) & (var_0)))))));
        }
        var_46 = var_8;
    }
}
