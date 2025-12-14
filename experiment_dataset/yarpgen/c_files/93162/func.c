/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93162
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) var_6);
        var_14 -= ((/* implicit */unsigned int) (((+(16515072))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */long long int) (+(4294967295U)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] |= ((/* implicit */_Bool) var_9);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1898))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_14 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-19)) || (((/* implicit */_Bool) 3))))) | (1022534792)));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_15 &= ((/* implicit */_Bool) var_8);
                                arr_19 [i_1] [i_1] [i_3] [i_4] [i_4] [8U] [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_10 [i_1] [i_4])) ? (4818841344715593065ULL) : (((/* implicit */unsigned long long int) arr_4 [i_3]))))));
                                var_16 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                                var_17 &= ((/* implicit */unsigned char) ((arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]) | (var_1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_26 [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) (((~(arr_10 [i_1] [i_2]))) >= (2881138484U)));
                                var_18 = ((/* implicit */int) (unsigned char)128);
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (1413828811U)));
                    arr_27 [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4)) ? (arr_21 [i_1] [6ULL] [i_3] [i_3]) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_2]))) : (arr_13 [i_1] [i_3] [i_2] [i_3])));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_30 [i_8] = ((/* implicit */short) max((((arr_13 [i_8] [i_8] [i_8] [i_8]) | (((/* implicit */unsigned int) arr_25 [i_8] [i_8] [i_8])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)54282)) : (arr_20 [i_8]))))));
        var_20 = ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (short)-14411))) ? (((/* implicit */int) max(((signed char)-26), (((/* implicit */signed char) (_Bool)1))))) : (max((((/* implicit */int) var_0)), (var_2)))))) : (((((/* implicit */unsigned long long int) arr_1 [i_8] [i_8])) + (((arr_3 [i_8]) ? (((/* implicit */unsigned long long int) arr_1 [i_8] [i_8])) : (3239924708155206449ULL))))));
        arr_31 [i_8] = ((/* implicit */unsigned short) (-(arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
    }
    for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-9624))))) ? (((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9] [i_9])) : ((-(((/* implicit */int) arr_11 [i_9] [i_9]))))))), (((((/* implicit */_Bool) max((arr_4 [i_9]), (((/* implicit */int) var_4))))) ? (max((var_3), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9])))))))));
        arr_36 [i_9] = max(((~(((/* implicit */int) arr_35 [i_9])))), (((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (short)18586))))) ? (((/* implicit */int) arr_11 [i_9] [i_9])) : (max((((/* implicit */int) (unsigned char)137)), (16515072))))));
        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_9] [i_9])), ((unsigned char)83))))));
    }
}
