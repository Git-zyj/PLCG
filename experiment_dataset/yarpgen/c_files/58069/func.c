/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58069
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
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_15;
        var_17 = ((/* implicit */long long int) var_3);
    }
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */signed char) 7171843829229477994LL);
        arr_6 [(unsigned char)8] [(unsigned char)8] &= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_4 [20LL])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [10]))))))), (((/* implicit */int) arr_0 [24U]))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_1 [i_1 + 1]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (arr_5 [(unsigned short)2]))))))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 24; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */short) arr_7 [i_2] [i_2]);
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_8 [(unsigned short)8])))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
        arr_10 [i_2] = var_11;
    }
    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (signed char i_6 = 2; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_3 + 1] [(unsigned short)8]))))) ? (((/* implicit */int) ((signed char) var_12))) : (((/* implicit */int) arr_22 [1] [i_3] [i_3] [i_3]))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_22 ^= ((/* implicit */long long int) (((-(((/* implicit */int) arr_20 [i_3 - 1] [(unsigned short)0] [(unsigned short)4] [(unsigned short)0])))) < (min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) arr_18 [i_6 + 1]))))));
                            arr_26 [i_3] [i_3] [10U] [i_3] [i_7] [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(short)18])) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [(signed char)4])) >= (((/* implicit */int) arr_4 [22LL]))))) : ((-(((/* implicit */int) arr_4 [0U]))))));
                            var_23 = ((/* implicit */_Bool) ((4294967295U) << (((((/* implicit */_Bool) ((unsigned short) 10U))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)19))) : (arr_14 [i_7])))));
                        }
                        arr_27 [4U] [(short)8] [i_4] [(short)8] [i_3 - 1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4U))));
                        arr_28 [i_4] [i_6 - 2] [i_5] [i_4] = ((/* implicit */signed char) arr_25 [i_3] [i_4] [i_5] [i_4] [i_6]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_8 = 1; i_8 < 21; i_8 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-29992)) < ((~(((/* implicit */int) arr_20 [i_3] [(signed char)24] [(signed char)24] [i_3]))))));
            arr_32 [i_3] = ((/* implicit */unsigned long long int) var_3);
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_15 [i_8 + 1] [i_3] [i_3 - 1]))));
            arr_33 [i_3] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_7))))));
        }
        for (unsigned short i_9 = 1; i_9 < 21; i_9 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) max((arr_15 [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) < (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_3])))))))));
            arr_37 [(unsigned short)4] [i_9] [(unsigned short)4] |= ((/* implicit */signed char) arr_31 [i_9 + 3] [i_3 - 1]);
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            arr_41 [i_3] |= ((/* implicit */unsigned short) arr_38 [i_3 - 1] [i_3 - 1]);
            arr_42 [i_10] [i_10] [i_3 + 1] &= arr_38 [i_3 + 1] [i_3];
            arr_43 [i_3] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_10])) && (var_1)));
            var_27 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_5)) / (arr_36 [i_3] [i_3]))));
        }
        arr_44 [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(unsigned char)6])) * (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_7))))))))));
        /* LoopNest 2 */
        for (signed char i_11 = 1; i_11 < 24; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            {
                                arr_55 [i_3] [i_11] [8LL] [i_13] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_51 [i_13] [i_11] [i_13] [i_11] [i_3 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_11])))))) ? ((-(((/* implicit */int) arr_30 [i_3] [i_3])))) : (((/* implicit */int) var_5))));
                                arr_56 [i_11] [i_12] [i_13] = ((/* implicit */signed char) arr_25 [i_3] [i_3] [i_3] [i_11] [i_3]);
                                arr_57 [i_3] [i_11] [i_12] [i_13] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (-(arr_51 [i_3] [i_11] [i_11] [i_13] [i_14])))))));
                            }
                        } 
                    } 
                    arr_58 [i_3] [i_11] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-19))));
                    var_28 = ((/* implicit */signed char) arr_54 [i_3] [i_3] [i_3] [i_3] [i_3]);
                    var_29 = ((/* implicit */unsigned short) arr_40 [i_11 + 1] [i_3] [i_3 + 1]);
                }
            } 
        } 
    }
}
