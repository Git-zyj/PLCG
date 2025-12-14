/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66096
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = arr_4 [i_1];
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) * (((((/* implicit */_Bool) (signed char)-118)) ? (133484890U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))))))), (arr_9 [i_3] [5] [i_1] [5])));
                                arr_14 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14867849880516341675ULL)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)-122))))) ? (((((/* implicit */_Bool) (+(var_16)))) ? ((~(arr_9 [i_0] [i_4] [i_0] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_4] [i_2] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_2] [i_2]))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_5))) : ((+(arr_2 [i_1] [i_0])))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((_Bool) max((((arr_5 [i_0] [i_0] [i_0]) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) (-(arr_2 [i_1] [i_0]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_25 [i_7] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_13 [i_0] [i_0] [i_5] [i_6] [i_7] [i_7]) : (((/* implicit */unsigned long long int) 1895821920))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */_Bool) ((arr_9 [i_1] [i_1] [i_1] [(unsigned char)18]) + (arr_21 [i_0] [i_1] [i_6] [i_7])))) || (((/* implicit */_Bool) 2496121768006608130ULL))))));
                                arr_26 [i_0] [i_0] [i_1] [(short)4] [i_6] [i_7] &= ((/* implicit */short) var_13);
                            }
                        } 
                    } 
                    arr_27 [i_5] [i_1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (3214987408U) : (((/* implicit */unsigned int) var_3))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_24 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (var_16) : (((/* implicit */int) (short)5888))))) ? (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_31 [i_0] [i_1] [i_0] [i_5] [i_1] [i_8] [15]))) : (arr_13 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_8] [i_0])) && (((/* implicit */_Bool) arr_29 [i_0] [i_1]))));
                                arr_32 [i_1] [i_9] = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_8] [i_9] [i_9]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_26 |= ((/* implicit */unsigned int) (signed char)1);
                        var_27 = ((/* implicit */unsigned short) arr_34 [i_10] [i_5]);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */short) arr_12 [i_0] [i_11] [i_5] [i_1] [i_0] [i_0] [i_0]);
                        var_29 &= ((/* implicit */int) (unsigned char)31);
                    }
                }
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            {
                var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), ((+(var_1)))));
                var_32 |= ((/* implicit */signed char) ((long long int) arr_6 [i_13] [i_12] [i_12] [i_12]));
                arr_43 [i_12] [i_12] = ((/* implicit */unsigned short) ((unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
            }
        } 
    } 
}
