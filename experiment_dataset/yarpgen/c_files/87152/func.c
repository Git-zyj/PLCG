/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87152
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
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((signed char) ((signed char) (short)-4026));
                var_20 = ((/* implicit */short) var_13);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_4))));
    var_22 = ((/* implicit */short) 1641897987);
}
