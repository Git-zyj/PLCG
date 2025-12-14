/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6710
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
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = var_12;
                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) -2011274061)) ? (2147483647) : (((/* implicit */int) (!(((/* implicit */_Bool) 8388607))))))) >= (1531508305)));
                var_16 = 909640494;
                var_17 = ((int) ((int) ((int) arr_1 [14])));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) 909640494)) || (((/* implicit */_Bool) var_5))))), (max((536870911), (var_1)))))) && (((/* implicit */_Bool) (~(var_7))))));
    var_19 = ((((/* implicit */_Bool) (~(max((var_11), (var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 536870911))))));
    var_20 |= (+(8388599));
    var_21 = (((-(((/* implicit */int) ((((/* implicit */_Bool) 12)) && (((/* implicit */_Bool) var_4))))))) * (min((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11))))), (min((-909640495), (var_9))))));
}
