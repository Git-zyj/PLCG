/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93731
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
    var_19 = ((/* implicit */int) ((_Bool) (-((+(var_2))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_5 [i_0])))));
                    var_22 -= ((/* implicit */_Bool) max((0), (((/* implicit */int) (unsigned char)128))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) arr_0 [i_0]);
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((((((_Bool) arr_5 [8])) && (((/* implicit */_Bool) (-2147483647 - 1))))), ((!(((/* implicit */_Bool) 0)))))))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (!((!(((_Bool) var_12)))))))));
}
