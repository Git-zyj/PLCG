/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60529
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = var_7;
                arr_5 [i_0] [i_0] [i_1 - 1] = ((/* implicit */signed char) var_14);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */int) (short)-1)) % (var_7))) == (((/* implicit */int) var_9))))) <= (((((/* implicit */int) var_5)) ^ (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_3)))))))));
}
