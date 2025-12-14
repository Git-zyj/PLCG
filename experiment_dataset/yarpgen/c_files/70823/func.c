/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70823
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_11))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) min((var_13), (var_1)))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min(((-(arr_1 [i_0] [i_0 + 1]))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_5);
}
