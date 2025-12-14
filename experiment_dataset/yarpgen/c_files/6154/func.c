/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6154
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) var_8)), (var_3))))))), (var_12)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0]);
                    arr_12 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_1] [i_0])) : (((/* implicit */int) var_13))))));
                    var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_2])))));
                }
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    arr_15 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                    arr_16 [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 4; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) var_0);
                                arr_24 [i_0] [i_1] [i_0] [i_1] [i_3] [i_4 - 1] [i_0] = ((/* implicit */signed char) arr_22 [i_0] [i_0] [i_3] [i_4 - 4] [i_0]);
                                arr_25 [i_0] = ((/* implicit */int) arr_21 [i_0] [i_1] [i_3] [i_3]);
                                arr_26 [i_5] [i_0] = ((/* implicit */unsigned short) min((arr_17 [i_5] [i_3] [i_3] [i_1] [i_0]), (((/* implicit */signed char) arr_10 [i_4 - 4] [i_0]))));
                            }
                        } 
                    } 
                }
                var_17 *= max((min((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned char)0])))), (((/* implicit */unsigned long long int) ((arr_20 [i_0] [(short)2] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [10U] [i_1])))))))), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [12] [i_0] [i_0] [i_0])));
                var_18 -= ((/* implicit */_Bool) var_6);
                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (arr_21 [i_0] [i_1] [i_0] [i_0])));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                arr_33 [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) min((arr_31 [i_6] [i_6] [i_7]), (arr_31 [i_6] [i_6] [i_6])))))))), (((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_3))))) * (max((((/* implicit */unsigned long long int) var_1)), (var_12)))))));
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    arr_38 [i_6] [i_7] = ((/* implicit */short) ((signed char) min((max((((/* implicit */long long int) arr_36 [i_6] [i_7] [i_6] [i_7])), (arr_32 [i_7] [i_7] [i_6]))), (((/* implicit */long long int) arr_28 [i_6] [i_6])))));
                    arr_39 [i_7] [i_6] [i_6] = (i_6 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_6] [i_6]))))) : (((((arr_32 [i_6] [i_7] [i_6]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_35 [i_6] [i_6] [i_6])) + (10606)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_6] [i_6]))))) : (((((arr_32 [i_6] [i_7] [i_6]) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_35 [i_6] [i_6] [i_6])) + (10606))) - (16720))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> ((((~(((/* implicit */int) arr_31 [i_9] [(_Bool)1] [i_6])))) - (3606))))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            {
                                arr_48 [i_6] [i_10] [i_11] [i_10] [i_11] = ((/* implicit */unsigned short) arr_43 [i_6] [i_9] [i_6] [i_6]);
                                arr_49 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) arr_47 [i_6]);
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_28 [i_7] [i_11])), ((~(arr_29 [i_11]))))), (((/* implicit */unsigned long long int) arr_42 [i_11] [i_7] [i_7])))))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_40 [i_6] [i_7] [i_6])), (min((arr_34 [2U] [i_7] [i_7]), (((/* implicit */unsigned long long int) var_4)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_44 [i_6] [i_6] [i_7] [i_9])), (min((((/* implicit */short) arr_47 [6LL])), (arr_36 [i_9] [i_9] [i_7] [i_6])))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_6] [i_6] [i_6])) ? (arr_53 [i_6] [i_12] [i_9] [i_6]) : (((/* implicit */int) arr_44 [i_6] [i_7] [i_6] [i_12]))))) ? (min((((/* implicit */long long int) arr_31 [i_13] [i_6] [i_13])), (var_4))) : (((/* implicit */long long int) (+(0U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((((((/* implicit */_Bool) 4294967295U)) ? (3626975364U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))), (((/* implicit */unsigned int) -1846639854))))));
                                arr_56 [i_6] [i_7] [i_7] [i_9] [i_6] [i_13] = ((/* implicit */long long int) (~(var_12)));
                                var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) arr_42 [i_6] [i_12] [i_6])), (arr_31 [i_6] [i_6] [i_12])))) < (((/* implicit */int) max((arr_36 [i_6] [i_6] [i_6] [i_6]), (arr_52 [i_6] [i_6] [i_6]))))))), (max((arr_34 [i_6] [i_12] [i_13]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_52 [i_6] [i_7] [i_6])) : (((/* implicit */int) arr_41 [i_7])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 14; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_61 [i_15] [i_15]))));
                                var_27 = ((/* implicit */long long int) max((arr_58 [i_15] [i_7] [i_7] [i_6]), (max((var_12), (((/* implicit */unsigned long long int) max(((unsigned short)51154), (((/* implicit */unsigned short) (signed char)-127)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 &= var_13;
}
