/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_11 ? var_2 : var_11))) ? (!var_5) : ((var_14 ? var_0 : var_10))))) ? (min(var_11, (65530 / var_7))) : 65527));

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((min((arr_0 [i_0 - 2]), var_7))) + ((~(arr_1 [i_0 - 2])))));
        var_20 = ((!(~var_13)));
        var_21 = ((223 ? (arr_1 [i_0 - 1]) : ((((max(8, var_0))) * var_0))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        var_22 = -var_12;
                        var_23 = (max(((min((arr_10 [i_1] [i_1 + 3] [i_2] [4]), 0))), ((((((arr_12 [10] [10]) >> (4181764278 - 4181764276)))) ? var_10 : ((var_10 ? (arr_5 [i_3]) : var_3))))));
                        arr_15 [i_1] [i_2] = (arr_8 [i_1] [i_1 + 3] [i_2]);
                    }
                }
            }
        }
        var_24 = ((var_16 == (arr_10 [0] [0] [i_1] [i_1 + 3])));
        var_25 = ((((arr_9 [i_1 - 2] [i_1 + 2]) >= (arr_11 [i_1] [i_1 + 2] [i_1 + 1] [i_1]))));
    }
    var_26 *= var_8;
    var_27 = (max(((min(-var_10, var_15))), ((209 ? (min(0, 1)) : var_16))));
    #pragma endscop
}
