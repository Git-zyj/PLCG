/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80215
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
    var_12 = ((/* implicit */int) var_8);
    var_13 = ((/* implicit */unsigned char) ((var_10) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_0 [i_0])), (var_3)))));
                var_15 = ((((/* implicit */_Bool) max((arr_1 [i_0]), (var_6)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25)))) ? (max((((/* implicit */long long int) var_11)), (7665233303946246068LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [10]))))) : (min((((/* implicit */long long int) (_Bool)1)), (562947805937664LL))));
                arr_5 [i_1] = ((int) (~((~(((/* implicit */int) arr_0 [i_1]))))));
            }
        } 
    } 
}
