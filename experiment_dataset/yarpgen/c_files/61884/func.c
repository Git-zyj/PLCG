/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61884
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((unsigned int) ((unsigned int) (short)26152)));
                arr_8 [i_0] = ((/* implicit */unsigned int) ((short) 9U));
                arr_9 [i_0] = ((unsigned int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (short)0))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */int) var_2);
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) / (((/* implicit */int) ((unsigned char) ((unsigned char) var_2))))));
}
