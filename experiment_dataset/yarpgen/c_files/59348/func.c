/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59348
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(_Bool)1] [(_Bool)1] [i_2] = arr_6 [(_Bool)1] [i_1] [i_2] [i_2];
                    arr_9 [i_0] = (_Bool)0;
                    arr_10 [i_0] [i_1] = (_Bool)1;
                }
            } 
        } 
    } 
    var_13 = var_3;
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
    var_15 = var_1;
}
