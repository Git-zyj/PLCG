/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((-((max(var_3, 93))))))));
                var_15 += -96;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_16 += max((!815350838217758776), ((var_13 != (-1 != 453274052497686413))));
                        var_17 = (max(((0 ? 26324 : var_6)), (-48207 && 0)));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_18 = ((((max(20144, 0))) ? (min(var_3, ((var_7 ? 51899 : var_2)))) : ((1 ? 0 : 65535))));
                        var_19 &= ((-0 <= (min(6112461103479953392, -2908101078))));
                    }
                    arr_13 [i_2] [i_1] [i_1 + 2] = ((var_8 ? (0 * var_10) : var_6));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1 - 2] [i_5] = var_11;
                            arr_21 [i_0] [i_5] [i_5] = var_3;
                            arr_22 [i_0] [i_5] [i_0] [i_0] = (!127);
                            var_20 += (var_8 * var_6);
                            var_21 += (((var_11 ? 32028 : var_9)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_28 [i_0 - 1] = ((((((((var_7 ? var_6 : 1))) ? var_4 : ((min(0, var_0)))))) ? var_0 : (var_10 * 56)));
                            arr_29 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = (((max(((max(var_2, var_10))), ((48 << (26 - 20))))) & var_3));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
