/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (1920315652 + 39);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((((((1 % 1) * ((min(var_12, var_5)))))) ? (((1 >> (9229 - 9212)))) : (((217 ^ 4498974546606828655) ? var_3 : 1704292644724170908))));
                    var_16 = arr_1 [i_0];
                    var_17 -= ((552641347 << (((min((arr_1 [i_0]), (arr_2 [i_2 - 1] [i_2 - 1]))) + 1619764337850477770))));
                    var_18 ^= (((1920315652 != 1) ? ((((!(arr_4 [3] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))) : var_4));
                }
            }
        }
    }
    #pragma endscop
}
