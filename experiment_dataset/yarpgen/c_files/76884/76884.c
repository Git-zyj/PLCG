/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((max(377757045, 377757034)))) ? var_1 : (((((min(var_7, var_11))) ? ((var_6 ? -21936 : 31744)) : var_12))))))));
    var_16 = ((var_13 ? var_2 : (~var_2)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = ((var_2 ? (min((arr_4 [i_0] [i_0 + 1] [i_0 - 1]), (~21935))) : ((max((min(-1, 21907)), (var_2 || 511))))));
                    arr_9 [i_0] [18] |= var_12;
                }
            }
        }
    }
    var_18 = (max(var_18, -var_4));
    #pragma endscop
}
