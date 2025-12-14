/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = ((!(((573953137 & ((-573953138 ? 573953137 : 573953143)))))));
                var_18 |= (min(((((((arr_2 [i_0] [i_0] [i_0]) ? 4558622005411595328 : (arr_0 [i_1])))) ? (min((arr_1 [i_1]), 98)) : var_3)), ((((arr_4 [i_0 + 2] [i_1] [i_0]) <= (arr_4 [i_0 + 1] [i_1] [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = (~var_15);
                var_19 = 3753300269;
                var_20 = (max((((arr_3 [i_0] [i_0 + 1] [i_0]) ? 541667026 : var_3)), (((!(!128))))));
            }
        }
    }
    var_21 = var_1;
    var_22 = 2123304810;
    var_23 = ((!((min((!685755787), 685755787)))));
    #pragma endscop
}
