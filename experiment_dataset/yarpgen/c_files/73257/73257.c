/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (((var_7 ? 1 : (arr_0 [i_0] [1]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            var_14 *= 1;
                            var_15 = (((arr_4 [11] [11] [i_3 + 2]) ? (((var_10 ? var_7 : var_6))) : var_2));
                            var_16 = (((arr_8 [i_1] [i_2 - 2] [12] [i_0]) ? (arr_13 [i_4 + 1] [i_1] [i_2 - 1] [i_3 - 2] [i_4]) : 250));
                            var_17 |= var_0;
                            var_18 = (((-32767 - 1) ? 0 : (-32767 - 1)));
                        }
                        var_19 *= -1;
                        var_20 = (arr_8 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_0]);

                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            var_21 = ((((var_1 ? 8 : 1)) & -23));
                            var_22 = -1;
                            var_23 &= (((255 ? (arr_10 [i_5 + 1]) : -3756162961833164915)) >> (var_0 + 57));
                        }
                    }
                }
            }
        }
    }
    var_24 = (((max(var_4, var_11))) * ((((!(1826600170608254620 > var_2))))));
    var_25 = (max(((var_1 ? var_10 : var_3)), (((-(11 || 158))))));
    var_26 &= 1;
    #pragma endscop
}
