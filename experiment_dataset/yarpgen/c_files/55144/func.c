/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55144
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) var_12);
                    var_20 = ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((max((var_15), (((/* implicit */long long int) var_17)))) << (((((((/* implicit */int) arr_0 [i_1])) << (((/* implicit */int) arr_13 [i_0] [i_0] [i_4] [i_3] [i_4])))) - (2))))) >> (((9223372036854775807LL) - (9223372036854775749LL)))));
                                var_22 = ((/* implicit */long long int) arr_3 [i_4 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((unsigned char) ((long long int) var_4)));
}
