/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71346
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
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) var_0);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_10))));
            var_22 = var_7;
            arr_4 [i_0] = var_17;
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_23 = ((/* implicit */signed char) var_7);
            var_24 &= ((/* implicit */_Bool) var_4);
            var_25 &= ((/* implicit */unsigned char) ((_Bool) ((_Bool) var_2)));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) ((_Bool) (unsigned char)92));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)176));
        var_27 = ((/* implicit */_Bool) var_12);
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) var_4);
        var_29 = ((/* implicit */_Bool) var_2);
    }
    var_30 = ((/* implicit */unsigned int) ((_Bool) ((unsigned char) var_10)));
    var_31 -= ((/* implicit */signed char) ((_Bool) var_4));
}
