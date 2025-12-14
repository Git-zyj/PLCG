/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min((~var_3), (((var_12 ? ((max(var_0, var_4))) : var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((var_3 ^ (min((arr_3 [i_0] [i_0] [i_1 + 2]), (arr_3 [i_0] [i_1] [i_1 + 2]))))))));
                arr_4 [i_0] [i_1 + 2] = (~-75232342593850432);
                var_19 &= (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
