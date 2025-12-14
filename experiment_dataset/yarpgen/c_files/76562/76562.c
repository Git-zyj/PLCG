/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((3957362566 ? -613576142 : 223))));
    var_20 = ((((((!35) & var_1))) ? 613576141 : (-961198951755031176 / 3599)));
    var_21 |= var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (~(arr_4 [i_0] [i_2] [i_2] [i_2]));
                    var_22 = (((((max(var_10, (arr_1 [i_0] [i_1])))) ? var_18 : (min(613576118, 32)))));
                }
            }
        }
    }
    #pragma endscop
}
