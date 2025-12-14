/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86978
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) min((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])), (((arr_3 [i_0] [i_1] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_1] [(short)17])) : (((/* implicit */int) (unsigned char)10))))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) min(((+(((/* implicit */int) ((short) var_3))))), (((/* implicit */int) ((unsigned char) (unsigned char)154)))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
    var_14 = (_Bool)0;
}
