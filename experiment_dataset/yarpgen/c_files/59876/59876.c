/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (arr_3 [i_0] [i_1]);
                var_15 = (~var_8);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                var_16 = 1675946189;
                var_17 = (min(var_17, (((((((~var_8) ? var_3 : var_6))) ? var_12 : ((((arr_8 [i_2] [4]) ? (((arr_6 [14]) + 32029)) : ((-1675946187 ? -111 : var_13))))))))));
                var_18 = (max(var_18, 11));
                var_19 *= ((+((((arr_5 [0]) && (arr_1 [i_2 - 1]))))));
                var_20 = var_0;
            }
        }
    }
    var_21 -= (min(1, 1469885057));
    var_22 = -var_8;
    var_23 = var_10;
    #pragma endscop
}
