/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94436
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (unsigned char)58))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_2 - 1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((5U) << (((var_17) - (3939355992535785672LL)))))) ? (((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_4 + 1])) : (((((/* implicit */int) arr_14 [i_4 - 1] [i_2] [i_1])) * (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [2] [2] [i_0] [(unsigned short)2]))))))) ? (((/* implicit */long long int) (~(2868800604U)))) : (var_18)));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_7 [i_0] [i_1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 |= ((/* implicit */short) (-((~(var_18)))));
}
