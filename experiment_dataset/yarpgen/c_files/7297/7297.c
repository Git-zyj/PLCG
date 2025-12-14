/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_16 + 2147483647) >> ((((173 ? var_11 : var_0)) - 4294960093)))) * (!var_13)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = -var_13;
                    var_20 &= (((-var_14 <= var_7) > (((-1061022497 >= ((var_5 ? var_2 : 90)))))));
                    arr_7 [i_1] [i_1] = ((((((var_16 >= -125) ? ((var_12 ? var_7 : var_15)) : var_13))) ? ((4197996226 ? 125 : 65535)) : var_16));
                    var_21 *= (((((var_14 ? 13508942407381385820 : var_17))) ? 1 : ((min(-1263504494, var_17)))));
                    var_22 -= ((((((((var_12 ? 125 : var_5))) ? (45 > 175) : var_3))) ? (5601365873004641720 + var_12) : 2));
                }
            }
        }
        arr_8 [i_0] [i_0] |= (((!var_6) * var_5));
        var_23 = (~(max((0 | var_7), ((-13 ? var_15 : var_6)))));
        var_24 |= ((((((max(229, 105))))) ? ((((var_2 >> (var_6 - 30110))) << (1050485285 - 1050485274))) : ((min(211, var_11)))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_25 = 16479;
        arr_11 [i_3] = (~(max(89, (90 * -13))));
    }
    #pragma endscop
}
