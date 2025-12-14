/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58037
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
    var_18 = ((/* implicit */short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) (+(((((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) + (65)))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) min(((unsigned short)34558), (((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1]))))) ? (min((arr_5 [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_1] [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1])))))))));
        }
        arr_8 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-18681)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (-(arr_5 [i_2] [i_2] [i_2])));
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [12LL]))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_1 [i_2]))));
        var_22 = ((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)127))))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (((((/* implicit */int) arr_11 [i_3])) ^ (((/* implicit */int) min((arr_14 [i_3] [i_3]), (arr_11 [i_3])))))) : (((/* implicit */int) (short)-568))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_12 [i_3]), (arr_12 [i_3])))) ? ((~(((/* implicit */int) min((arr_3 [i_3] [i_3] [(unsigned short)6]), (arr_9 [i_3])))))) : ((~(((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_3 [(signed char)5] [i_3] [(signed char)3]))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) arr_5 [i_4] [i_5 - 1] [i_6]);
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((((/* implicit */int) arr_19 [i_3] [(short)10] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [i_3])) | (((/* implicit */int) arr_21 [i_3])))) : (((((/* implicit */int) arr_14 [i_4] [i_6])) << (((-8669449204141223758LL) + (8669449204141223773LL)))))));
                        arr_22 [i_3] [i_4] [i_5 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_5 - 1] [i_4] [i_5 - 1] [i_6] [i_5 - 1] [i_5 - 1]))));
                    }
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        arr_26 [i_3] [i_4] [i_5] = ((/* implicit */short) (+(((/* implicit */int) min((arr_10 [i_4]), (arr_20 [i_4] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_7]))))));
                        arr_27 [i_3] [i_3] [i_4] [i_4] [i_5 - 1] [(signed char)9] = arr_2 [i_3];
                    }
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1] [i_5])))), (((((/* implicit */_Bool) arr_28 [i_5 - 1] [i_4] [i_5 + 1])) ? (((/* implicit */int) arr_28 [i_5 - 1] [i_4] [i_5 + 1])) : (((/* implicit */int) arr_28 [i_5 - 1] [i_5 - 1] [i_5]))))));
                        arr_30 [i_3] [i_4] [i_5 + 1] [i_5 + 1] [i_8] [(signed char)10] = ((unsigned short) min((arr_18 [i_3] [i_4] [i_5 + 1] [i_8]), (arr_18 [i_3] [i_4] [i_5 + 1] [i_3])));
                    }
                    for (short i_9 = 3; i_9 < 11; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) min((arr_33 [i_3] [i_4] [i_9 + 1] [i_10]), (((/* implicit */short) arr_23 [i_3] [i_4] [i_5] [i_9])))))))));
                            arr_36 [i_3] [i_4] [i_5 + 1] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3639)) * (((/* implicit */int) (unsigned short)22))));
                        }
                        var_29 = ((/* implicit */short) min((min((((/* implicit */int) ((arr_29 [i_3] [i_4] [i_5 + 1]) == (arr_5 [(short)12] [i_5 + 1] [i_9])))), ((+(((/* implicit */int) arr_12 [i_3])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_4] [i_5 - 1] [i_5 + 1] [i_9 + 1])))))));
                        var_30 = (~(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_3] [i_4] [i_5])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_9 [i_3]))))) | (min((((/* implicit */long long int) arr_32 [i_3] [i_4] [i_5 - 1] [(unsigned short)0] [i_3])), (1665461283328452369LL))))));
                    }
                    arr_37 [i_3] [(unsigned short)5] [i_5 - 1] = ((/* implicit */short) (unsigned short)22);
                }
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 2; i_12 < 13; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                {
                    arr_47 [i_11] = ((/* implicit */short) (~((+(((arr_29 [i_11] [i_12] [i_13]) + (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_12] [i_13])))))))));
                    var_31 = ((((((/* implicit */int) arr_14 [i_11] [i_12 - 1])) <= (((/* implicit */int) arr_14 [i_11] [i_12 - 1])))) ? (min((-4286253366196479065LL), (((/* implicit */long long int) (signed char)-125)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_14 [i_11] [i_12 + 1]), (arr_14 [i_11] [i_12 + 1]))))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned short) arr_5 [i_11] [i_11] [i_11]);
        var_33 = ((/* implicit */unsigned short) arr_21 [i_11]);
    }
    var_34 = ((/* implicit */short) (signed char)12);
}
