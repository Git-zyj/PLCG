/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92888
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_19 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */int) (unsigned short)42700)) : (((/* implicit */int) max((arr_0 [i_0 - 2] [i_0 - 2]), (arr_0 [i_0 + 2] [i_0 - 1]))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)18796))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) min((arr_2 [i_0 + 3] [i_0 + 3]), (var_18)))), (arr_0 [i_0 + 2] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 3] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 2]))))));
        var_21 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */int) max((arr_2 [i_0] [i_0 - 2]), (arr_2 [i_0 + 3] [i_0 + 2])))) : (((/* implicit */int) min((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 + 3] [i_0 + 2])))));
    }
    for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (unsigned short i_4 = 4; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_2]), (arr_9 [i_2]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (468474278U)))));
                        arr_14 [i_1] [(unsigned char)12] [i_3] [i_3] [i_4] &= ((/* implicit */signed char) arr_13 [i_1] [i_2] [i_3] [i_3] [i_4 - 4] [i_2]);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((max((arr_12 [i_1] [i_2] [i_4 - 1] [i_4 - 1]), ((signed char)-61))), (arr_9 [(unsigned char)14]))))));
                            var_24 = ((/* implicit */unsigned int) (signed char)60);
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (signed char)-61))));
                            var_26 *= ((/* implicit */unsigned int) var_12);
                            var_27 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_1 - 3] [i_4 + 1])) ? (max((468474277U), (((/* implicit */unsigned int) arr_16 [(signed char)2] [i_2] [i_2] [i_2] [i_2] [i_2] [(signed char)2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_4 - 1] [i_4 - 2]))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_2] [i_5])))))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) /* same iter space */
                        {
                            var_28 ^= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_6 [i_1 - 2])))) & (((/* implicit */int) arr_0 [i_1] [i_4 - 2]))));
                            var_29 = ((/* implicit */unsigned short) ((arr_16 [i_2] [i_1 - 3] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 2] [i_1 + 1]) == (arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1]))))) : (max((((/* implicit */unsigned int) (signed char)-106)), (var_11)))));
                            arr_19 [i_1] [i_2] [i_3] [i_2] [i_6 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_0 [i_6 - 1] [i_2]), (arr_0 [i_4 + 2] [i_3]))))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) /* same iter space */
                        {
                            arr_24 [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 3] [i_2] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_13 [i_1] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 3])))) ? (((/* implicit */int) arr_23 [i_1 - 2] [i_2] [i_2] [i_2] [i_1 - 2])) : (((/* implicit */int) arr_18 [i_2] [i_4 - 4] [i_4 - 3])))));
                            var_30 *= ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1 + 1] [(signed char)18] [i_1] [i_1]))))), ((+(((/* implicit */int) (unsigned short)65535)))))));
                        }
                        arr_25 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4 + 1])) || (((/* implicit */_Bool) (signed char)60)))) ? (arr_11 [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((arr_21 [i_3] [i_4 - 4] [i_4 - 4] [i_4 - 4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_4 - 2] [i_3] [i_4 - 3]))) : (arr_13 [i_3] [i_4 + 2] [i_4] [i_4 - 3] [i_4 + 1] [i_4 - 3]))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) 2U)))) ? (2008538634U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3]))))))));
                        var_31 -= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) arr_21 [i_1 + 2] [i_1 + 2] [i_3] [i_4 + 2])) <= (((/* implicit */int) arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4 - 3]))))), ((+(((/* implicit */int) (unsigned short)19))))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 3]))))) ? (((/* implicit */int) ((arr_7 [i_1] [i_1] [(unsigned char)0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1] [i_1] [i_1 - 2] [i_1 - 3] [i_1] [i_1])))))) : ((-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1 + 1])) >= (((/* implicit */int) (short)(-32767 - 1))))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_1 [i_11] [i_11 + 1])))), (((/* implicit */int) (signed char)60))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 1; i_12 < 18; i_12 += 4) 
                        {
                            arr_40 [i_8] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned int) arr_13 [i_11 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_11 - 1]);
                            arr_41 [i_8] [i_8] [i_8] [i_11 + 2] [i_8] [i_8] = ((/* implicit */int) (signed char)-61);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_12 - 1] [i_12 - 1] [i_12] [i_12 + 1] [i_9])) ? (((/* implicit */int) var_7)) : (arr_37 [i_8] [i_8] [i_8] [i_8] [i_11 + 1] [i_11 + 2] [i_12 + 1])));
                            arr_42 [i_8] [i_9] [i_8] [i_9] [i_8] = ((/* implicit */short) (signed char)-56);
                        }
                        var_35 = (~(((/* implicit */int) ((arr_37 [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 2] [i_11 + 2]) > (((/* implicit */int) arr_34 [i_10] [i_8] [i_8] [i_11 + 2]))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 4) /* same iter space */
                    {
                        var_36 = (i_8 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_22 [i_13 + 2] [i_13 + 2] [i_8] [i_13 + 1] [i_13 + 2])) + (2147483647))) << (((((((/* implicit */int) max(((signed char)-106), (arr_22 [i_13 + 2] [i_13 + 2] [i_8] [i_13 - 1] [i_13 + 1])))) + (129))) - (24)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_22 [i_13 + 2] [i_13 + 2] [i_8] [i_13 + 1] [i_13 + 2])) + (2147483647))) << (((((((((/* implicit */int) max(((signed char)-106), (arr_22 [i_13 + 2] [i_13 + 2] [i_8] [i_13 - 1] [i_13 + 1])))) + (129))) - (24))) - (89))))));
                        /* LoopSeq 2 */
                        for (signed char i_14 = 2; i_14 < 15; i_14 += 2) 
                        {
                            arr_48 [i_8] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_13 - 1] [i_13 + 1] [i_13 + 2] [i_13 + 1])), ((~(((/* implicit */int) var_8))))));
                            arr_49 [i_8] [i_9] [i_10] [i_9] [i_14 + 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_45 [i_8] [i_9] [i_10] [i_13 - 1] [i_9] [i_8])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_28 [i_14 + 1])), (arr_30 [i_8])))) : (((/* implicit */int) arr_0 [i_8] [i_8])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_44 [i_13 + 1] [i_14 + 2] [i_14 + 2] [i_14 + 2])), (max(((unsigned short)14), (((/* implicit */unsigned short) var_13)))))))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
                        {
                            arr_53 [i_8] [i_9] [i_8] [i_13 + 2] [i_8] = 2835422433U;
                            var_37 = ((/* implicit */int) arr_22 [i_15] [i_15] [i_8] [i_8] [i_15]);
                            var_38 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_45 [i_10] [i_10] [i_10] [i_13 + 1] [i_13 + 1] [i_8])) ? (((/* implicit */int) arr_22 [i_13 - 1] [i_13 - 1] [i_8] [i_15] [i_15])) : (((/* implicit */int) arr_22 [i_13 + 2] [i_13 + 2] [i_8] [i_15] [i_13 + 2]))))));
                        }
                        var_39 = ((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_13 + 2]);
                    }
                    arr_54 [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min(((unsigned short)65515), (((/* implicit */unsigned short) (signed char)-61))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_51 [i_8] [i_8] [i_8] [i_10] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8] [i_9] [i_9] [i_10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_32 [i_8] [i_8]), ((short)16384)))))))));
                }
            } 
        } 
    } 
}
