/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93392
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
    var_12 &= ((/* implicit */int) var_0);
    var_13 = ((/* implicit */unsigned int) -193514817);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = var_4;
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 65536)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [5])))), (((/* implicit */unsigned int) var_8)))) != (((/* implicit */unsigned int) max((((var_10) & (1428495544))), (65532))))));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((/* implicit */unsigned int) var_10)), (min((2191060563U), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) (+(min((var_7), (1287664838U)))))) ? (var_11) : ((~(3007302483U))));
}
