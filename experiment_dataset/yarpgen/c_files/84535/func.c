/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84535
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) > (((/* implicit */int) var_9)))))))));
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_1])))) > (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */int) var_11)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_10);
    var_15 = var_9;
}
