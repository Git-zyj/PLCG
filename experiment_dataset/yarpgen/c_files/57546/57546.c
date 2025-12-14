/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~23420);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [3] [i_1] [i_2] [i_3] [i_3] = (((((((max((arr_7 [i_0] [i_1] [i_2]), var_0))) < -23420))) << ((var_1 ? var_10 : (min((arr_11 [i_0] [i_1] [i_4]), var_10))))));
                                arr_14 [i_1] [i_1] [i_2] [i_2] [4] = (((max(3732051327, -18)) >> (((!(((3732051327 ? 562915968 : 3))))))));
                                var_12 = -95;
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] [i_1] = arr_6 [i_0] [i_1] [i_1];
                var_13 = (((((max(var_3, var_1)) & var_9))));
            }
        }
    }
    var_14 = (((var_5 ? 62 : -62)) < ((var_6 ? (62 < var_8) : var_5)));
    #pragma endscop
}
