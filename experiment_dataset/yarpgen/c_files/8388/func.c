/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8388
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
    var_18 = ((/* implicit */_Bool) ((unsigned char) var_2));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((~((~(arr_1 [i_0]))))) >> (((min((((/* implicit */int) ((short) 18446744073709551615ULL))), ((+(arr_1 [i_0]))))) + (27))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((min((min((-1267837441), (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (var_12)))))) <= (((/* implicit */int) var_16))));
}
