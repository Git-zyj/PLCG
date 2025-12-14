/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (((((((min(var_6, var_8))) ? var_0 : (23797 + var_9)))) ? var_7 : var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((var_6 & var_1) ? ((775364717 ? 3758096384 : -37)) : (var_9 > 1))) >> (((((arr_4 [i_0 + 1] [i_1 + 3] [i_2 + 2]) | 9605897542848434989)) - 18446744073709551533)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_15 = (min(var_15, (((var_5 >> (4556610769453376618 - 4556610769453376614))))));
                        var_16 -= var_1;
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        var_17 *= (var_7 <= -77);
                        var_18 = ((var_5 << ((((var_4 ? (arr_8 [i_0 + 1] [i_0] [i_0] [i_0]) : var_6)) - 235))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_1] [i_1] &= ((5879 + (arr_0 [i_5 + 1])));
                        var_19 = (max(var_19, (var_2 & var_0)));
                        var_20 += (((((var_4 & (arr_1 [i_0])))) ? 1 : (arr_7 [i_0 + 4] [i_1 + 2] [i_2] [i_5])));
                        var_21 ^= 207087568;
                    }
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
