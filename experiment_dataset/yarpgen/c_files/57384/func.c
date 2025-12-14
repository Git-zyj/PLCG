/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57384
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
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) var_10)))))))), (var_1)));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(var_10))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_9)))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_7 [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [(signed char)9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((arr_6 [i_2] [i_3] [i_4]) | (((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [i_0])))), (((/* implicit */int) var_1))))) & (arr_11 [i_0] [i_1] [i_1] [i_3] [i_4])));
                                arr_16 [(short)3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (~(arr_7 [9U])));
                                var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) arr_2 [(_Bool)1])), (min((((/* implicit */unsigned long long int) var_8)), (arr_0 [15U]))))) : (min((((/* implicit */unsigned long long int) (-(var_11)))), (((((/* implicit */_Bool) arr_5 [i_3] [i_4])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_8 [i_2] [i_3])))))));
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34846))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_7 [i_5]);
                var_19 ^= ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) (unsigned short)34841)), (9U)))));
                var_20 &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((arr_6 [i_5] [i_6] [i_5]), (((/* implicit */int) arr_18 [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5] [i_5]))) : (var_0)))));
            }
        } 
    } 
    var_21 = var_6;
}
