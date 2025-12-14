/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72155
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
    var_14 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 -= var_11;
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (-(1404664826)));
                                var_17 = ((/* implicit */unsigned short) var_13);
                                var_18 &= ((/* implicit */short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                            }
                        } 
                    } 
                    arr_11 [i_2] = (-((-(var_8))));
                }
            } 
        } 
    } 
    var_19 -= (~((~((~(((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */unsigned short) var_13);
}
