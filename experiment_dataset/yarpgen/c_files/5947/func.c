/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5947
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_10 &= ((((((/* implicit */_Bool) arr_5 [i_0])) ? (14308364668070721642ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))));
                    var_11 = arr_0 [i_1] [i_1];
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_3))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_13 = (short)-1;
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(short)0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((14308364668070721656ULL) != (((/* implicit */unsigned long long int) arr_2 [i_0] [i_3])))))) : (((((/* implicit */_Bool) 1320400548U)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])) : (7597433588635770422ULL)))));
                }
                /* LoopNest 3 */
                for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((long long int) (unsigned char)71));
                                arr_21 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((int) 9726787160945786621ULL)))) ? (((2376740959U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_4] [i_4]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((-2147483635) <= (((/* implicit */int) (unsigned short)27210))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned char) -530927211))))) ? (((((/* implicit */_Bool) (short)-17124)) ? (5) : (((/* implicit */int) (unsigned char)61)))) : (((/* implicit */int) var_7))));
    var_16 = max((((/* implicit */int) var_2)), (var_8));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_5))));
}
