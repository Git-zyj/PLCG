/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1 ? ((((max(218, 0))) ? var_7 : var_8)) : ((((min(1, var_11)))))));
    var_19 = (!var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 628444657;
                var_20 = (((!(arr_0 [i_0]))));
            }
        }
    }
    #pragma endscop
}
