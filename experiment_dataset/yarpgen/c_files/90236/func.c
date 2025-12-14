/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90236
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
    var_15 = ((/* implicit */long long int) ((min((791965895), (((/* implicit */int) var_13)))) + (var_7)));
    var_16 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((int) var_14);
                                var_18 = 791965895;
                                var_19 &= ((/* implicit */signed char) arr_10 [i_0] [i_4] [i_2] [6] [i_4]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) ((signed char) -1));
                }
            } 
        } 
    } 
}
