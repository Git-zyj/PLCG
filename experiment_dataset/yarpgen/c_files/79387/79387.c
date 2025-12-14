/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_8 [i_3] = ((var_2 / var_1) / var_5);
                        var_16 = (max(var_16, (((630796394 ? 105 : var_9)))));
                        var_17 = (((var_10 ^ -106) ? (!var_1) : var_5));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_17 [i_4] [i_5] [i_6] [i_5] = 101;
                            var_18 = (min((var_4 && var_6), var_13));
                        }
                    }
                }
            }
            var_19 = var_12;
            var_20 = ((((min(17640, var_13)))) ^ ((-(var_5 / -82))));
            var_21 = (min(var_21, ((((~99) ? (((var_10 ? var_13 : 120))) : (min(var_12, 1573042146263051681)))))));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_22 = (min(var_22, ((min((((~(16865 | 14)))), (min((((1880420243 ? var_8 : 8708894509689813202))), var_15)))))));
                        var_23 = var_0;
                        var_24 = (((min((max(var_0, 4294967295)), (302495916 & -56))) >> ((((min(-1, var_11))) - 1256229067))));
                        arr_24 [i_8] [i_8] [i_8] [i_0] = var_6;
                    }
                }
            }
            var_25 ^= ((var_15 <= (!var_13)));
            var_26 += (min((var_4 + 177), (!630796393)));
        }
    }
    var_27 = (((!var_7) ? var_13 : (632976394207351265 || var_1)));
    #pragma endscop
}
