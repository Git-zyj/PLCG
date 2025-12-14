/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68872
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 = arr_1 [i_0] [i_0];
        var_14 = ((/* implicit */int) var_3);
        arr_3 [i_0] &= ((/* implicit */int) min((((/* implicit */long long int) (-(((((-34922177) + (2147483647))) << (((arr_1 [i_0] [i_0]) - (504863856)))))))), (((((/* implicit */long long int) (~(var_8)))) / ((~(-7897707895742043069LL)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned short) var_0);
                                var_16 = ((/* implicit */int) max((var_16), (arr_9 [i_1] [4])));
                                var_17 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_1 [i_2 - 2] [i_1 - 2]) : (arr_11 [i_0])))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_12 [i_0] [i_0])))) ? (((/* implicit */int) ((arr_5 [i_3] [i_2]) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)41637)))))))) : (var_12)));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((int) min((13916471615739951375ULL), (arr_10 [i_0] [i_0] [i_0]))))));
                    var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */int) var_3)) >> (((var_11) - (3900292338U))))) | (((((/* implicit */_Bool) (unsigned short)23897)) ? (1611831603) : (var_12)))))), (((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23895))) : (-7897707895742043069LL))) : ((~(-131512168975096155LL)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((9223372036854775796LL), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)49783)), (-1611831593))))))) ? (max((((/* implicit */unsigned int) min((arr_18 [i_5] [i_5]), (var_8)))), (arr_19 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_15 [i_6] [i_5]) : (((/* implicit */unsigned long long int) arr_19 [i_5])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                {
                    arr_22 [i_5] [i_6 + 1] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_7])) ? (arr_20 [i_5] [i_6] [i_5]) : (((/* implicit */unsigned long long int) var_0))))) ? (arr_18 [i_5] [i_5]) : (arr_21 [i_5]));
                    arr_23 [i_5] = ((int) arr_16 [i_5 + 4]);
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_21 ^= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) ((arr_19 [2]) >= (arr_19 [8])))));
                        arr_26 [i_5] [i_5] [i_5] = ((unsigned int) ((-1611831573) / (var_9)));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            arr_30 [19ULL] [7ULL] [i_6 + 3] [i_6 + 3] [i_7] [i_8] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_5])) ? (arr_19 [i_5]) : (arr_19 [i_5])));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5 + 4] [i_8])) ? (353457036U) : (((/* implicit */unsigned int) arr_21 [i_9])))))));
                            var_23 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
                            var_24 = ((/* implicit */int) (+(arr_17 [i_6 + 4] [i_5 - 3] [i_5 + 2])));
                            var_25 = ((/* implicit */unsigned short) ((3941510260U) / (((/* implicit */unsigned int) 2147483642))));
                        }
                    }
                    for (int i_10 = 3; i_10 < 23; i_10 += 3) /* same iter space */
                    {
                        var_26 -= ((/* implicit */long long int) ((unsigned int) arr_25 [i_6 + 4] [i_6 + 4] [i_7] [5U]));
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            arr_37 [i_11] [i_11] [i_10] [i_10] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) var_5));
                            var_27 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) - (10720160723106631212ULL));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_7))) ? (((3941510260U) * (((/* implicit */unsigned int) arr_35 [i_5] [i_6] [0ULL] [i_10] [i_6])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5] [i_5 - 3])))));
                        }
                    }
                    for (int i_12 = 3; i_12 < 23; i_12 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) max((var_29), ((+(((int) arr_38 [i_5] [18LL] [i_7] [i_12]))))));
                        arr_40 [i_5] [i_6] [i_7] = ((((/* implicit */int) arr_39 [i_6] [i_5 + 2] [i_7] [i_12 - 3] [i_7])) / (((/* implicit */int) arr_39 [i_5] [i_5 + 3] [i_7] [i_12 - 3] [i_6])));
                        var_30 = ((/* implicit */int) max((var_30), (1114527144)));
                        var_31 ^= ((/* implicit */long long int) ((unsigned int) arr_15 [i_6] [i_7]));
                        var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_34 [i_5] [13LL] [13LL] [i_5] [i_5] [i_5])) <= (2147483636))))));
                    }
                }
                for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 3; i_15 < 23; i_15 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_13])) ? (arr_48 [15U] [5LL] [i_14] [i_14] [14] [i_6 + 1] [i_5]) : (((/* implicit */unsigned int) max((arr_29 [i_5] [i_6 + 3] [i_13] [i_14]), (((var_9) + (((/* implicit */int) arr_39 [i_5] [i_6] [i_13] [i_13] [i_15])))))))));
                                arr_49 [i_14] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((long long int) ((((/* implicit */_Bool) -2051585165)) ? (arr_18 [i_5] [i_5]) : (((/* implicit */int) arr_34 [i_5] [i_5] [i_13] [i_14] [i_15] [i_14])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 21; i_16 += 4) 
                    {
                        arr_53 [i_16 + 1] [i_5] [i_5] [i_5 - 2] = (+(((unsigned long long int) arr_31 [i_5 + 2] [i_6])));
                        var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_33 [i_5] [i_6] [i_13] [i_13] [i_5]))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (min((arr_20 [20U] [20U] [6]), (((/* implicit */unsigned long long int) arr_55 [i_5] [i_17] [i_13] [i_17])))) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_8))));
                        var_36 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 8782904110289838694LL)) ? (4201086799176419433ULL) : (10472325018131089872ULL)))));
                    }
                    var_37 = ((/* implicit */long long int) (-((~((-(1611831572)))))));
                    var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 672565837910611012LL)) ? (((/* implicit */int) ((unsigned short) ((unsigned short) -1776388045)))) : (((((/* implicit */int) ((arr_42 [i_5] [i_5] [i_6] [i_13]) < (((/* implicit */unsigned int) var_6))))) << (((((/* implicit */int) ((unsigned short) -382859019))) - (2275)))))));
                }
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_12))) < (max(((~(((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_5] [i_5])))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 1974353598)))))))));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned int) 182385253147888673ULL);
}
