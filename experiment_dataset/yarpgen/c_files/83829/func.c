/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83829
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) arr_5 [i_0])))), (((int) min(((signed char)0), ((signed char)8))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0])))))), ((+(((/* implicit */int) arr_2 [i_2]))))));
                            arr_14 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (max(((+(arr_1 [i_0] [i_1]))), (((/* implicit */long long int) arr_12 [i_3 + 1] [i_3] [i_3 - 1] [i_3]))))));
                            arr_15 [i_2] [i_0] [i_0] [i_2] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (16632218384815482713ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_10);
    var_13 = var_8;
    var_14 = ((/* implicit */signed char) var_3);
    var_15 = var_2;
}
