/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57800
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
    var_11 += ((/* implicit */long long int) max((max((((/* implicit */int) var_1)), (var_4))), (((((((((/* implicit */int) var_6)) + (2147483647))) >> (((var_10) + (1467871427))))) ^ (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) - (((/* implicit */int) arr_0 [i_0]))))) ? (max((arr_6 [(unsigned short)7] [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (arr_6 [(unsigned short)8] [i_1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) min((((/* implicit */short) (unsigned char)31)), (arr_9 [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_3])));
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_2 [i_3 + 1]))) : (((/* implicit */unsigned int) ((var_3) ^ (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [(unsigned short)10]))))))))));
                                var_14 = ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_3 + 1] [9ULL] [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (arr_3 [i_3])))) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4 - 1] [i_1]))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((var_10), (((/* implicit */int) (unsigned char)15))))), ((~(-2809880195326317943LL)))))) ? (((/* implicit */unsigned int) 566598520)) : (arr_14 [(unsigned char)16] [i_1] [i_1] [(unsigned short)6])));
                    var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_15 [i_5] [i_5 + 1] [i_5 + 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_5 + 1] [i_5 - 2])) ? (((/* implicit */int) arr_10 [i_0] [i_5 - 1] [1LL] [i_0] [i_5] [i_1])) : (arr_15 [i_5 - 1] [i_5 + 1] [i_5 - 1]))))));
                    arr_17 [i_0] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */int) ((((((var_9) + (2147483647))) >> ((((~(arr_12 [i_0] [i_5]))) + (1002293011))))) != (-582010990)))) : (((/* implicit */int) ((((((var_9) + (2147483647))) >> ((((((~(arr_12 [i_0] [i_5]))) + (1002293011))) + (634549525))))) != (-582010990))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                arr_24 [i_8] [17] [i_6] [i_1] [i_8] = ((/* implicit */unsigned short) 13115260902681796956ULL);
                                arr_25 [i_8] [i_7] [i_7] [i_6] [i_1] [i_8] = ((/* implicit */long long int) arr_1 [i_1]);
                                arr_26 [i_6] [i_8] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [14LL] [(unsigned char)13])) ? (1689286007) : (((/* implicit */int) arr_5 [i_0] [10LL] [i_0])))))));
                                arr_27 [i_0] [i_8] [i_8] [i_7] [i_7] [5] = ((/* implicit */short) (~((+(((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(var_9)))) < (6703056370887577079ULL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 3; i_9 < 14; i_9 += 1) 
                    {
                        arr_30 [i_9] [i_6] [i_6] [i_1] [i_9] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_12 [(_Bool)1] [i_9])))));
                        var_18 = ((/* implicit */unsigned short) (((~(var_3))) - (((/* implicit */int) (unsigned char)0))));
                        arr_31 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [0] [0] [i_9] [14] [i_0])) ? (1357243726) : (((/* implicit */int) var_5))))) ? ((~(var_4))) : (((/* implicit */int) (signed char)-115))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_10] [(unsigned short)16] [i_10] [i_10])) * (((/* implicit */int) (!(((/* implicit */_Bool) 815704359)))))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_20 [3]))));
                        arr_34 [i_0] [i_0] [i_10] [(unsigned short)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [8] [i_10] [i_6] [(signed char)13] [i_1] [i_0])) ? (((/* implicit */unsigned int) 2147483647)) : (arr_14 [i_10] [i_6] [i_1] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65241)))))));
                                arr_40 [i_11] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((0) | (((/* implicit */int) arr_20 [i_12 - 1]))));
                                var_22 = ((/* implicit */_Bool) (+((~(-1338586889)))));
                            }
                        } 
                    } 
                }
                arr_41 [(unsigned short)14] = ((/* implicit */unsigned char) (((+(arr_14 [i_1] [(short)6] [i_1] [i_0]))) << (((arr_14 [i_1] [i_0] [i_0] [i_0]) - (2428273199U)))));
            }
        } 
    } 
}
