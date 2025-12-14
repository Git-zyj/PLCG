/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66883
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */signed char) (-(2159647612U)));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2]))) : (var_11)));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_19 |= ((unsigned long long int) arr_5 [i_3] [i_3] [i_3] [i_0]);
            arr_9 [i_3] [i_3] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_3] [(signed char)6] [2]))));
            var_20 += ((_Bool) arr_3 [i_3] [i_0] [i_0]);
        }
        for (signed char i_4 = 1; i_4 < 7; i_4 += 2) 
        {
            var_21 = ((/* implicit */short) (-(arr_5 [i_4 + 3] [i_0] [i_0] [i_4 + 2])));
            arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_4 + 2]))));
            var_22 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_4 - 1]))));
            var_23 = ((/* implicit */unsigned short) 2135319680U);
            var_24 = ((/* implicit */unsigned char) ((_Bool) arr_1 [i_4 + 2]));
        }
        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) 
        {
            arr_15 [i_0] [i_5] [i_5 + 1] = ((/* implicit */unsigned long long int) arr_8 [i_0]);
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 7; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 4) 
                    {
                        {
                            arr_27 [i_8] [i_5] [(signed char)8] [i_7] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_5 + 3])) ? (arr_20 [i_5] [i_8] [i_7 - 3] [i_8 + 1] [i_8 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                            var_25 = ((/* implicit */short) ((signed char) -1069112064));
                            arr_28 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_21 [i_7 + 1] [i_7] [i_7 - 2] [i_0])) - (var_7)));
                        }
                    } 
                } 
            } 
        }
        var_26 = ((((/* implicit */int) arr_10 [i_0] [i_0])) < (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0]))))));
        var_27 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
    }
    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
    {
        var_28 &= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_29 [i_9 + 3])) << (((((/* implicit */int) arr_29 [i_9 + 1])) - (119))))), (((/* implicit */int) arr_29 [i_9 + 3]))));
        arr_31 [(unsigned short)0] &= ((/* implicit */unsigned char) var_12);
    }
    var_29 = ((/* implicit */unsigned short) min(((+(var_2))), (((/* implicit */long long int) ((var_3) == (((/* implicit */int) ((unsigned char) 3238683241U))))))));
    /* LoopNest 3 */
    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_41 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_38 [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) arr_30 [i_11]))))))) % (arr_38 [(unsigned short)6] [i_11])));
                    var_30 -= ((/* implicit */signed char) arr_39 [i_12] [i_11] [i_10]);
                    arr_42 [i_12] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) min((arr_30 [i_10]), (((/* implicit */short) arr_29 [i_11]))))))), ((-(((/* implicit */int) ((unsigned char) 2147483647)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        arr_46 [i_10] [i_10] [i_11] [8U] [i_10] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_10] [i_11]))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) >> (((/* implicit */int) arr_40 [i_12] [i_13]))))) ? ((~(arr_37 [i_10] [i_10] [i_10]))) : (arr_39 [i_11] [i_12] [i_12])));
                        var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_45 [4ULL] [i_10] [i_12] [4ULL])) && (((/* implicit */_Bool) arr_30 [i_12])))))));
                        var_33 = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)29)) << (((8926811663690929927ULL) - (8926811663690929902ULL)))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        var_34 = (!(((/* implicit */_Bool) (+(min((1739516955U), (((/* implicit */unsigned int) arr_37 [i_10] [i_11] [10ULL]))))))));
                        var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_33 [i_12]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_43 [i_11] [i_12]), (arr_43 [i_11] [i_11]))))) : (max((arr_34 [i_11]), (arr_34 [i_10])))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        var_36 += ((/* implicit */_Bool) arr_35 [i_11]);
                        arr_53 [i_10] [i_10] [i_12] [i_10] [i_15] = ((/* implicit */short) (~((+(((/* implicit */int) var_10))))));
                    }
                    var_37 = ((/* implicit */unsigned long long int) arr_34 [i_12]);
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned long long int) var_15);
}
