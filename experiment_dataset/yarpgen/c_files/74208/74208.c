/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((((~(~74)))) ? ((((var_7 + 16040) ? (min(var_6, var_1)) : -50))) : (((((-82867202 ? 1 : -75))) | var_4))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (min(127, 74));
        var_11 = 813318910;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_12 = (((((((arr_1 [i_2]) << (arr_0 [i_3])))) ? (((arr_8 [i_1] [i_2] [i_1]) ? -82867201 : (arr_6 [i_0] [i_1] [i_2] [i_2]))) : (((arr_0 [i_0]) ? 82867201 : 47134)))));
                        var_13 = 8;
                    }
                }
            }
        }
    }
    var_14 = (((((((max(var_3, -53))) ? -886985062 : var_9))) == (((((var_3 ? 254 : 11))) ? (!var_5) : ((var_7 ? var_5 : 819075018))))));
    var_15 *= var_9;
    var_16 -= (((-99 + var_5) & var_8));
    #pragma endscop
}
