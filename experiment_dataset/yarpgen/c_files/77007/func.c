/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77007
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
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (1213389124) : (((/* implicit */int) var_6)))) >= (var_1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_9 [i_2] [i_1] = ((/* implicit */long long int) min((min((((1110912880) % (((/* implicit */int) (short)14762)))), (((/* implicit */int) arr_6 [6LL] [i_0] [i_1] [i_0])))), (((/* implicit */int) ((signed char) arr_6 [i_2] [4] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) var_13);
                                arr_15 [9] [i_2] = ((/* implicit */int) min((-4197829030565473706LL), (max((arr_13 [i_0 + 1] [i_2] [i_0] [(unsigned short)2] [i_0 + 2] [i_2] [i_0 - 1]), (arr_13 [i_0 - 1] [i_2] [i_0] [i_0] [i_0 + 2] [i_2] [i_0 + 2])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [(unsigned char)7] [(unsigned char)7] [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2] [i_1] [1]))))) : (((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_13 [i_0 + 2] [i_2] [i_2] [i_5] [i_2] [i_5] [i_2])), (arr_11 [i_0 + 2] [i_0 + 1] [(short)4] [i_0]))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))))))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5] [i_2] [i_2] [i_2] [i_5] [i_5] [i_1])) ? (min((4197829030565473705LL), (min((-2231128528660236746LL), (var_14))))) : (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2] [i_5])), (max((((/* implicit */int) (_Bool)1)), (arr_0 [i_1] [10ULL]))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_6] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_11)))), (((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) ((arr_5 [i_1] [i_1] [i_2]) - (((/* implicit */int) arr_2 [(_Bool)1] [i_1] [(short)6]))))) ? (min((9723830549570602380ULL), (((/* implicit */unsigned long long int) (unsigned char)124)))) : (((/* implicit */unsigned long long int) ((150208593) / (((/* implicit */int) (short)-28432)))))))));
                        arr_26 [i_2] [i_2] [i_1] [(short)8] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_1] [8] [2U] [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_7])) < ((~(-1427609685)))));
                        var_23 = ((/* implicit */short) (signed char)-111);
                    }
                }
                var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1055938179U)));
            }
        } 
    } 
}
