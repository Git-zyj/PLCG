/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66029
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)230)), (max(((-(((/* implicit */int) var_1)))), ((+(((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_0] [(unsigned short)17] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (((~(((/* implicit */int) (short)-8627)))) <= (max((((/* implicit */int) var_1)), (arr_9 [i_0 - 1])))));
                                var_12 |= ((/* implicit */unsigned long long int) (-(max((arr_9 [i_0 + 1]), (((/* implicit */int) var_2))))));
                                var_13 ^= ((/* implicit */unsigned short) arr_8 [(unsigned short)12] [(unsigned short)12] [i_2] [i_2] [0U] [(unsigned short)12]);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_10 [(unsigned char)14] [12U] [i_1 + 2] [i_1] [(unsigned char)14]), (arr_10 [18ULL] [i_1] [i_1 - 1] [i_0 + 1] [18ULL]))))));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((max((277791291U), (((/* implicit */unsigned int) (short)28727)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))))))));
            }
        } 
    } 
}
