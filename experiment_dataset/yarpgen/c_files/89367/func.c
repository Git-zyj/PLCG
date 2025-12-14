/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89367
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_4))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 - 2] [i_4] [(signed char)0] [i_3] [i_0] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0])))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0])) ? (arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57834)) ? (arr_1 [(unsigned char)9] [i_1]) : (((/* implicit */int) (signed char)101)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) & (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (arr_1 [i_0 - 2] [i_0 - 1]))))));
                                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) != ((~(arr_7 [i_0 - 2] [i_3])))));
                                var_19 = (unsigned short)30942;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (var_13)))))) ? (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) var_16)), (var_1)))) | (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)34593)) : (((/* implicit */int) (signed char)-102))))))) : (arr_2 [8U])));
                    var_21 = ((/* implicit */unsigned char) (short)21514);
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 16742528820960407091ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)101))) : (-7948203431569208028LL)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((unsigned long long int) var_1));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            for (unsigned int i_7 = 2; i_7 < 17; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((arr_22 [(unsigned char)14] [i_6] [i_7] [i_6 + 1]) < (min((arr_22 [i_5] [i_6] [i_7] [i_6 + 4]), (arr_22 [i_5] [i_6 + 4] [i_7] [i_6 + 1])))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 87482749U)) ? (((/* implicit */int) arr_14 [i_7])) : (((/* implicit */int) arr_15 [i_5]))))) || (((((/* implicit */_Bool) arr_14 [i_6])) && (((/* implicit */_Bool) arr_15 [i_5]))))))), (((unsigned int) arr_21 [i_6 + 1] [i_6 + 4] [i_7 - 1] [i_7 - 1])))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_17 [i_7 + 1]), (var_12)))) ? ((~(min((16840999151109411654ULL), (((/* implicit */unsigned long long int) arr_16 [i_5])))))) : (((/* implicit */unsigned long long int) (+(arr_26 [i_6 + 4] [i_6 + 3] [i_6] [i_6])))))))));
                        arr_27 [i_5] [i_9] [i_7 - 2] [i_9] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_24 [i_9] [i_7 - 2] [i_6 + 1] [i_5]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_9] [i_7 - 1] [(unsigned short)14] [i_5])) ? (arr_19 [i_5]) : (arr_26 [11LL] [i_6 - 2] [i_6] [i_6]))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2035905503)) ? (((/* implicit */int) (unsigned short)30943)) : (((/* implicit */int) (unsigned short)30922))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */int) arr_14 [i_6])) ^ (((/* implicit */int) var_1))))) >> (((max((((/* implicit */int) var_16)), (arr_17 [i_6 - 2]))) - (744105041))))))));
                        var_29 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((2089863367), (((/* implicit */int) var_5))))))) ? ((~(min((((/* implicit */unsigned long long int) arr_17 [i_5])), (var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_6 + 4] [i_7])) ? (arr_22 [i_9] [i_6 - 2] [i_6 - 1] [i_9]) : (arr_22 [i_5] [i_6] [i_6 - 2] [i_9]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 2; i_10 < 18; i_10 += 1) /* same iter space */
                    {
                        arr_31 [i_5] [i_7] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_6))) / (((/* implicit */int) ((unsigned short) (unsigned char)255)))));
                        var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_10 - 2] [i_7 + 1] [i_7] [i_7])) ? (arr_26 [i_10 - 2] [i_7 + 1] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_24 [i_10 + 1] [i_6 + 1] [i_5] [i_10]) : (arr_24 [i_10 - 2] [i_6 - 1] [i_5] [i_10]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 2; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_29 [i_7] [i_7 - 1] [i_7 + 2] [i_7] [i_7]))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_26 [i_11 - 1] [10LL] [i_7] [i_7 + 1])) : (arr_23 [i_11 - 1] [i_6] [i_7] [i_7 + 2] [i_6])));
                    }
                    for (unsigned int i_12 = 2; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_5] [i_6] [i_7 - 1] [i_12]))) ? (((/* implicit */unsigned long long int) ((int) arr_24 [i_5] [i_5] [i_5] [i_5]))) : (min((arr_24 [i_5] [i_6] [4] [i_12 - 1]), (((/* implicit */unsigned long long int) arr_30 [i_12] [i_7 - 2] [i_6] [16]))))));
                        arr_36 [i_5] [i_6 - 2] [i_5] [i_12] [i_5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_29 [i_5] [(unsigned char)4] [i_6] [i_7] [i_12 - 1])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_32 [i_7] [i_6 + 4])) : (((/* implicit */int) arr_32 [i_7] [i_6 + 4]))))));
                    }
                }
            } 
        } 
        var_35 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_16 [i_5]) + (2147483647))) >> (((arr_20 [i_5] [(unsigned char)6] [i_5]) - (8476689228152684382ULL)))))) ? (((/* implicit */unsigned long long int) ((4404917391473826581LL) + (((/* implicit */long long int) 4294967295U))))) : (min((((((/* implicit */_Bool) arr_16 [9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (8388607ULL))), (((/* implicit */unsigned long long int) arr_28 [i_5] [i_5] [i_5] [i_5]))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
    {
        var_36 -= ((/* implicit */short) (~(((/* implicit */int) arr_32 [i_13] [i_13]))));
        var_37 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 8554423300581497953LL)) ? (((/* implicit */int) arr_37 [1LL])) : (((/* implicit */int) arr_30 [i_13] [i_13] [i_13] [i_13]))))));
    }
}
