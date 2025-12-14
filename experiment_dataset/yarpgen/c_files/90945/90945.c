/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (min((~var_8), ((1048575 >> (((max(var_0, (arr_2 [i_0] [i_1]))) - 823713288))))));
                arr_6 [i_0] = (max(4294967273, (((arr_2 [5] [5]) + -var_8))));
            }
        }
    }
    var_11 = ((var_1 ? (min((min(717243774, var_1)), var_2)) : var_6));
    var_12 = (max(var_12, ((var_0 ? (min((max(var_2, var_9)), (max(var_9, var_8)))) : ((((max(-717243777, var_9))) ? var_9 : 3445289549))))));
    #pragma endscop
}
