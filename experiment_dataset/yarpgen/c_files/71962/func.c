/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71962
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) > (((((/* implicit */_Bool) (unsigned short)16022)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */_Bool) ((unsigned short) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((long long int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                                arr_12 [i_0] [i_0] [6] [i_3] [i_0] |= ((/* implicit */long long int) var_7);
                                arr_13 [i_0] [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned long long int) ((var_15) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((unsigned long long int) var_11))))) ? (((max((((/* implicit */unsigned int) var_10)), (var_0))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_17)) >= (var_6))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_8)) : (var_5)))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_0));
}
