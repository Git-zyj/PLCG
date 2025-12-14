/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_4, (((((var_8 ? var_7 : var_2))) ? (!-613657576) : var_4))));
    var_13 = ((var_1 ? ((~(~var_1))) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (arr_2 [1])));
                var_15 *= ((!(((arr_2 [5]) >= (((arr_2 [i_1]) << (((arr_4 [i_0] [i_1] [6]) + 110))))))));
                var_16 += max(((((arr_1 [i_0] [i_1]) ? (255 & 613657576) : (arr_1 [i_0] [i_1])))), var_7);
            }
        }
    }
    #pragma endscop
}
