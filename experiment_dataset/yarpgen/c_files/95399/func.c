/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95399
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_18 = var_1;
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((/* implicit */unsigned long long int) var_2)), (((((unsigned long long int) var_6)) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_8);
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 7123978085281684426LL))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)-24307)) ? (((/* implicit */int) (short)13452)) : (((/* implicit */int) var_2)))), ((~(((/* implicit */int) (signed char)-104))))));
                var_22 = ((/* implicit */short) ((signed char) (-(9223372036854775807LL))));
                var_23 = (signed char)-104;
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_3))));
}
