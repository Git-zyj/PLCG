/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98108
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = max((arr_1 [i_0]), ((~(2064269126))));
                var_10 = ((/* implicit */int) min((var_10), (min((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 2]))), (((/* implicit */int) ((_Bool) arr_3 [i_0 - 2] [i_0] [10])))))));
                arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_1]);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) min(((~(var_0))), (((int) ((((/* implicit */_Bool) var_6)) ? (-2034591927) : (((/* implicit */int) var_3)))))));
}
