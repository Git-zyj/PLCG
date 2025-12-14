/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!(~var_9))) ? 1 : 1));
    var_21 = ((((((61715 != 1) ? ((var_14 ? var_15 : var_16)) : (var_3 == var_11)))) ? (((((var_13 ? 61715 : var_17)) & ((var_2 ? 1 : var_1))))) : var_0));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = (min(-12314, (((3077531505 >= (arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_0] [i_1] [i_0] = var_8;
                    arr_7 [i_0] [i_2] [i_2] = ((((max((var_12 <= var_10), (!var_18)))) == (arr_5 [1] [i_1] [i_0])));
                    arr_8 [i_0] [i_1] [i_2] = (!(((var_14 / ((min((arr_3 [i_2] [i_0]), (arr_0 [8] [8]))))))));
                }
            }
        }
        var_23 = ((((((var_11 + 2147483647) << (152 - 152)))) ? var_14 : (arr_0 [i_0] [i_0])));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        arr_11 [i_3 + 2] = var_1;
        arr_12 [i_3] [i_3] = (!var_7);
        var_24 = ((~(arr_2 [i_3])));
    }
    var_25 = (min(var_25, ((max((((~((1217435811 ? 193 : var_3))))), (((((var_5 ? var_17 : var_11))) ? var_9 : -117)))))));
    #pragma endscop
}
