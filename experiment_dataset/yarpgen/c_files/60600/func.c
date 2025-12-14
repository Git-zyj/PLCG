/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60600
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [9U] [i_1] [(_Bool)1] = ((/* implicit */short) max((((var_6) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-9427)))), (((/* implicit */int) (short)-9427))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) 1182251178);
                                arr_14 [i_0] [i_1] [21U] [i_3] [21U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (31U)))) ? ((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])))) : (((/* implicit */int) (short)-9427))))) : (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 2] [19] [i_2 - 2])) ? (arr_8 [i_2] [0] [i_2 + 3] [i_2] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) min((716065679), (((/* implicit */int) (unsigned char)196))));
    var_16 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) & ((~(((/* implicit */int) var_3)))))) | (((/* implicit */int) var_3))));
}
