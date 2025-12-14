/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93614
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
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-2)) % (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */int) arr_5 [i_0 + 2] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_16);
}
