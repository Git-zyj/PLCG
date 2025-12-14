/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90818
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_9))));
                var_21 = ((/* implicit */int) min((var_21), ((~(((/* implicit */int) arr_0 [(unsigned char)14]))))));
                var_22 = ((/* implicit */unsigned char) ((min(((-(var_10))), (var_10))) > (((/* implicit */int) (short)-20812))));
            }
        } 
    } 
    var_23 = ((signed char) min((min((((/* implicit */int) var_18)), (var_4))), (((/* implicit */int) var_14))));
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_10))));
    var_25 = ((/* implicit */short) ((((/* implicit */int) var_9)) / (var_10)));
}
