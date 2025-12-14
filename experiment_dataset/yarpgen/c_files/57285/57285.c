/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((((var_15 ? var_12 : var_10))) ? 962072674304 : (min(122, 4282101996428931349)))), (max((min(var_3, var_13)), ((min(-585772393852511230, -1098737107)))))));
    var_21 = (~var_18);
    var_22 = (((((-var_14 ? var_5 : ((-33 ? var_1 : 5199))))) ? ((min(var_2, (0 >= var_8)))) : (min(-46756, var_12))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_23 = (min(18446744073709551615, -2754028256093763477));
                var_24 = (33584 + 248);
                arr_6 [i_0] [i_1] [i_0] = (var_16 <= 3);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_25 = ((var_14 ? 1565653780 : (arr_13 [i_0])));
                                arr_15 [i_0] [9] [i_0] [i_4] = var_19;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 *= var_8;
    #pragma endscop
}
