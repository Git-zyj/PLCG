/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91010
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
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) - (((((/* implicit */int) var_16)) - (((/* implicit */int) ((unsigned short) 1600475171)))))));
    var_18 += ((/* implicit */signed char) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((((/* implicit */int) var_11)) < (((/* implicit */int) arr_1 [i_0]))))))))))));
        var_20 = ((/* implicit */unsigned short) var_12);
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) min((6144U), (((/* implicit */unsigned int) (unsigned short)28757))))) ^ (max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */int) var_16);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) (((~(((((/* implicit */_Bool) (short)13592)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (788820545U))))) < (((/* implicit */unsigned int) (-(arr_12 [i_1] [i_1] [i_1] [i_1] [11U]))))));
                                arr_17 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] = ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)41838)) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))));
                    arr_19 [i_1] [i_3] [i_3] [i_3] &= ((/* implicit */signed char) max((((1652592638U) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) arr_9 [i_3] [i_3] [i_2])))))))), (arr_3 [i_1])));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */long long int) min(((unsigned short)23698), (((/* implicit */unsigned short) (signed char)-107))))), ((-(((long long int) (signed char)123)))))))));
        var_24 = ((/* implicit */unsigned short) ((_Bool) ((((((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])) + (2147483647))) << (((/* implicit */int) (signed char)0)))) >> (((arr_0 [i_1]) + (3462590755377048339LL))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        arr_23 [i_6] = (!(((/* implicit */_Bool) (unsigned short)4448)));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            arr_26 [i_6] = ((/* implicit */unsigned int) min((((7929610340168499941ULL) / (((/* implicit */unsigned long long int) 2010540323)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) arr_25 [i_6] [i_6] [i_7])) : (((/* implicit */int) var_2)))))))));
            var_25 = (+(((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6]))) / (arr_24 [i_6]))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))))));
            arr_27 [i_6] [i_6] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) arr_20 [i_6])))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 3; i_8 < 21; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_10 = 2; i_10 < 19; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_10 + 1])) ? (((/* implicit */int) arr_20 [i_8 - 2])) : (((/* implicit */int) arr_20 [i_8 - 2])))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (726076459U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8 - 3] [i_8 - 1] [i_8 + 1])))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-((-(var_1))))))));
                            arr_37 [i_6] [i_6] [i_7] [i_6] [i_8] [i_9] [i_10 + 3] |= ((/* implicit */short) (!(((/* implicit */_Bool) -1775780439570076591LL))));
                            arr_38 [i_6] [i_7] [(unsigned char)11] [i_8] [i_10 + 3] = ((/* implicit */_Bool) var_10);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_29 += ((/* implicit */long long int) max((min((arr_32 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8]), (arr_32 [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8] [i_8] [i_8]))), (((/* implicit */unsigned int) ((signed char) arr_32 [i_8 - 2] [18U] [i_8 - 1] [i_8] [5U] [i_8])))));
                            var_30 = ((/* implicit */unsigned int) min((((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (var_1)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_6])))))));
                            var_31 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_42 [i_8] [i_8 - 2] [i_8 - 1] [i_9] [i_8] [i_9])) ? (arr_42 [11U] [i_8 - 2] [i_8 - 1] [i_11] [i_8] [(unsigned char)7]) : (arr_42 [i_6] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8] [i_8 - 2]))), (((/* implicit */int) ((unsigned short) (signed char)127)))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) min((-1600475175), (1578349229)));
                            arr_45 [i_7] [i_7] [i_9] [i_8 + 1] [i_7] [i_7] &= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_8 - 1] [i_8 - 3])))))));
                        }
                        arr_46 [i_8] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) var_0);
                    }
                } 
            } 
            var_33 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) arr_29 [i_6] [i_6] [i_7])))));
        }
    }
}
