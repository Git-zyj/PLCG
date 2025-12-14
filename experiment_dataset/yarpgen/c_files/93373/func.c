/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93373
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
    var_10 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (signed char)-56))))) << (((((var_8) ? (var_3) : (var_6))) - (1524239062U))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((int) ((int) arr_2 [i_1 - 3])));
                var_12 = ((/* implicit */long long int) ((_Bool) ((short) arr_2 [i_0 - 1])));
            }
        } 
    } 
    var_13 = var_2;
}
