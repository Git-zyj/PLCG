/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (~var_12);
    var_21 = (min(var_21, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((arr_2 [i_0] [i_1] [i_0]) <= (arr_1 [i_1] [i_0])));
                var_22 += 1;
                var_23 = (((((-(arr_0 [i_1 + 1])))) ? ((((((arr_1 [i_0] [i_1]) ? (arr_0 [i_0]) : 3261711304)) + 205029606))) : var_12));
            }
        }
    }
    #pragma endscop
}
