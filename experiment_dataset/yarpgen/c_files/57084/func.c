/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57084
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_3] [(unsigned short)10] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_2))) - (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                            arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((_Bool) var_4)) && ((!(((/* implicit */_Bool) var_2))))))) << (((max((max((((/* implicit */unsigned int) var_6)), (var_1))), (((/* implicit */unsigned int) var_4)))) - (1264318819U)))));
                        }
                    } 
                } 
                var_11 = ((/* implicit */unsigned int) max((var_11), (((unsigned int) max((var_0), (var_4))))));
                var_12 = ((/* implicit */unsigned int) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((+(((/* implicit */int) var_6))))))));
                var_13 = ((/* implicit */int) (+((+(var_1)))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_4);
}
