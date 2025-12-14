/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55428
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) var_17)) - (200)))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_18))));
        var_20 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)19471)) : (((/* implicit */int) var_18))))) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_4)) * (((/* implicit */int) arr_1 [i_2]))))));
            var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16831)) && (((/* implicit */_Bool) (unsigned char)48))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3] [i_3])) * (((/* implicit */int) var_14))))) : (((unsigned int) (unsigned short)60334))));
                arr_19 [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((arr_18 [i_4] [i_4] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
            }
            var_24 = arr_6 [i_1] [i_1];
            var_25 += ((/* implicit */unsigned long long int) (short)-16831);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_14 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (_Bool)0))));
            var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)-16831))) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_5] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16831)))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                var_29 = ((/* implicit */unsigned short) (-(arr_22 [i_1] [i_1] [i_1])));
                arr_30 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned short) (unsigned char)216));
            }
            /* LoopSeq 2 */
            for (unsigned char i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_9 = 3; i_9 < 17; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_39 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((long long int) (_Bool)1));
                        var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_18))));
                        arr_40 [i_1] [i_1] [i_1] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_23 [i_1]));
                    }
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_5))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 2; i_11 < 18; i_11 += 4) 
                    {
                        arr_43 [i_1] [i_1] [i_8] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_1] [i_1] [i_9 + 3] [i_1] [i_8 - 1] [i_11 + 1])) ? (((/* implicit */int) arr_38 [i_1] [i_1] [i_9 + 2] [i_9 + 2] [i_8 - 1] [i_11 + 1])) : (((/* implicit */int) (unsigned char)216))));
                        var_33 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)61023)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_5)))));
                        arr_44 [i_1] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 4437330878471110285ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16841))) : (arr_27 [i_1] [i_1] [i_1] [i_1])))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_48 [i_1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)0)))) : (((unsigned long long int) var_11))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_13))));
                        arr_49 [i_1] [i_1] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_35 [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_26 [i_1])))) * (((/* implicit */int) var_0))));
                    }
                    var_35 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)59306)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 2; i_13 < 20; i_13 += 4) 
                    {
                        arr_54 [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_6])) : (((((/* implicit */_Bool) arr_50 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)-16821))))));
                        var_36 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)50619)))) ? (1511635841652072692LL) : (-8135131638572575119LL)));
                        var_37 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_51 [i_1] [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_31 [i_1] [i_1] [i_1])))) / (((/* implicit */int) ((unsigned short) 12427081995114911212ULL)))));
                        var_38 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) >> (((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1]))));
                        var_39 = ((/* implicit */unsigned long long int) arr_41 [i_13] [i_13] [i_13] [i_13] [i_13]);
                    }
                    for (unsigned char i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        var_40 = ((/* implicit */_Bool) ((arr_27 [i_8 + 1] [i_14 + 1] [i_14 + 1] [i_9 + 2]) | (arr_27 [i_8 + 1] [i_14 + 1] [i_8 + 1] [i_9 + 2])));
                        arr_58 [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_53 [i_8] [i_14 - 2] [i_8 - 1] [i_9 - 3] [i_9 - 3]))));
                    }
                }
                for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    arr_61 [i_15] [i_15] [i_15] [i_15] &= ((/* implicit */short) (-(((/* implicit */int) arr_57 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_1] [i_8 + 1]))));
                    arr_62 [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0)))))));
                    var_41 = ((/* implicit */unsigned short) var_7);
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_65 [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
                    arr_66 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_1] [i_1]))))) + (((unsigned int) arr_13 [i_1] [i_1]))));
                }
                arr_67 [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_6] [i_8 + 1] [i_8 - 1] [i_8 - 1]))));
            }
            for (unsigned char i_17 = 3; i_17 < 20; i_17 += 2) 
            {
                var_42 += ((/* implicit */unsigned int) ((((_Bool) arr_26 [i_1])) ? (((/* implicit */int) ((unsigned short) (short)-16831))) : (((/* implicit */int) (!(arr_53 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_17] [i_17] [i_17 + 1] [i_17 + 1] [i_17] [i_17 + 1])) ? (((/* implicit */int) arr_51 [i_1] [i_1] [i_17 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_51 [i_1] [i_1] [i_17 - 2] [i_1] [i_17 - 2])))))));
                var_44 -= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-16821)))) & (((/* implicit */int) (unsigned char)134))));
                var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_31 [i_17 - 1] [i_17 - 1] [i_1])))))));
            }
            var_46 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_68 [i_1] [i_1] [i_1] [i_1]))));
            var_47 = ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1]))));
        }
    }
    var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) var_6))));
    var_49 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (min((((((/* implicit */int) (unsigned short)60033)) + (((/* implicit */int) (unsigned char)216)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) var_12)))))))));
}
