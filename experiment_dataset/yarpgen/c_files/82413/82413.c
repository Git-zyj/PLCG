/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = 2334185605;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, var_2));
                        var_15 = var_10;

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_16 = (max(var_16, ((((arr_7 [i_0]) ? var_7 : (arr_7 [i_1]))))));
                            var_17 -= (arr_1 [i_1]);
                        }
                        var_18 = (((!var_3) ? (((arr_0 [i_0]) * var_10)) : var_6));
                    }
                }
            }
        }
        arr_11 [i_0] = ((((((((-(arr_8 [i_0])))) ? -61 : (arr_8 [i_0])))) ? (((-111 ? (!0) : 21))) : (((0 ? 9223372036854775807 : var_6)))));
        var_19 = ((((65024 ? 255 : (min(10876974512822321429, 0))))) ? (max((arr_6 [i_0 + 2] [i_0 + 2] [i_0] [i_0]), 1272466228)) : (arr_9 [i_0] [i_0]));
    }
    #pragma endscop
}
