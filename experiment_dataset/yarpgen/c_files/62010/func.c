/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62010
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */short) var_10)), (var_2))))));
                arr_6 [i_0] = (-(((/* implicit */int) var_14)));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
                var_18 = ((/* implicit */long long int) (-((+(((/* implicit */int) ((short) var_3)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (-((~(((var_13) / (((/* implicit */int) var_0))))))));
    var_20 = ((/* implicit */_Bool) var_7);
}
