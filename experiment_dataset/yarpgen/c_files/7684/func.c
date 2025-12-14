/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7684
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
    var_15 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || ((!(((/* implicit */_Bool) var_1))))))), (max((var_3), (min((var_11), (var_3))))));
    var_16 = max((var_9), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((17612145411608614634ULL), (((/* implicit */unsigned long long int) (unsigned char)74)))))));
    var_17 = ((/* implicit */unsigned char) (-(((((unsigned long long int) (unsigned char)208)) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))))))));
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_19 = ((arr_0 [i_1]) - (((/* implicit */unsigned long long int) ((long long int) var_8))));
            var_20 += ((/* implicit */short) arr_0 [i_1]);
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)84)))))));
            var_22 = 1915071845U;
            arr_6 [(unsigned char)6] [i_0] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_23 -= ((/* implicit */unsigned int) arr_4 [i_0] [i_2]);
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (short)-1686);
                    arr_19 [1U] [i_2] [(short)16] [(unsigned char)12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_5] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) var_11);
                        arr_24 [i_5] [i_5] = (-(var_1));
                        var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5 - 3])) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5 + 1])))));
                        var_25 = ((/* implicit */unsigned int) ((long long int) arr_16 [i_0] [i_2] [i_5 - 3] [i_5 - 3] [i_5]));
                    }
                    for (long long int i_6 = 2; i_6 < 20; i_6 += 1) 
                    {
                        arr_28 [(_Bool)1] [i_2] [i_6] [19U] [i_6 - 2] = ((/* implicit */unsigned long long int) var_4);
                        var_26 *= ((/* implicit */unsigned short) arr_22 [i_6] [i_2] [i_3]);
                        arr_29 [i_6] = ((/* implicit */long long int) ((((_Bool) arr_16 [i_0] [i_2] [i_3] [i_4] [i_2])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (arr_3 [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6 + 1] [i_6 - 2] [8U] [i_6 - 2] [8U] [8U])))));
                        var_27 = ((/* implicit */_Bool) (-(((var_14) - (((/* implicit */unsigned long long int) var_11))))));
                        var_28 = ((/* implicit */unsigned int) (-(arr_13 [i_4] [i_6 + 4] [i_6 + 4] [i_6 + 2])));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_29 = ((arr_21 [i_7] [i_7] [i_3] [i_7] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_7] [i_3]))));
                        arr_32 [i_0] [i_3] [i_3] [i_2] [i_3] [i_0] &= ((/* implicit */long long int) var_0);
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [(_Bool)1])))))));
                        var_31 &= ((/* implicit */long long int) (+(arr_31 [i_2] [i_2] [i_3] [6ULL] [i_2])));
                    }
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_3))));
                }
            }
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)134)))))) : (((var_9) & (arr_4 [i_2] [17LL])))));
        }
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_7 [i_0] [i_8] [i_8]))));
            var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)25847)) ? (((/* implicit */int) arr_7 [i_0] [i_8] [9ULL])) : (((/* implicit */int) (short)-1673))));
        }
        for (long long int i_9 = 3; i_9 < 23; i_9 += 2) 
        {
            arr_37 [i_0] [(_Bool)1] [i_9] = ((/* implicit */short) (~(arr_35 [i_9 - 1] [i_9 - 2])));
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((arr_26 [i_0] [i_9 - 3] [i_9] [i_0] [i_9]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))))))));
            var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0]))))) - (((unsigned int) var_11))));
        }
        var_38 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_21 [i_0] [16U] [i_0] [i_0] [i_0])))) ? (((var_11) | (arr_11 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
        var_39 &= ((/* implicit */_Bool) (+(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
        var_42 = ((/* implicit */long long int) arr_1 [i_10]);
    }
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
    {
        var_43 &= ((/* implicit */unsigned int) max((arr_9 [(_Bool)1]), (((/* implicit */unsigned long long int) var_12))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                {
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) max((((int) arr_35 [i_11] [i_11])), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [(unsigned char)20] [i_11] [i_13] [i_13] [i_12]))))))))))));
                    var_45 = ((/* implicit */unsigned char) max(((~(arr_35 [i_13] [i_12]))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)1691)))), (((/* implicit */int) var_0)))))));
                    var_46 = ((/* implicit */unsigned long long int) ((arr_11 [i_13]) < (max((arr_31 [i_11] [i_12] [i_11] [i_12] [i_11]), (arr_31 [i_11] [i_12] [i_11] [i_12] [i_12])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        arr_52 [i_14] [i_11] [i_13] [i_12] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_14])) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) arr_38 [i_14]))));
                        arr_53 [i_11] [i_12] [i_11] = arr_13 [i_11] [i_11] [i_11] [i_11];
                    }
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_57 [i_11] [i_11] [i_12] [(unsigned char)6] [i_11] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_13] [i_13]))));
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_13] [i_12] [i_11])) && (((/* implicit */_Bool) arr_56 [i_11] [i_11] [i_13] [i_15]))));
                    }
                }
            } 
        } 
    }
}
