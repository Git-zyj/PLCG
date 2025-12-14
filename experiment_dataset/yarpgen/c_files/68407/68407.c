/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1 - 1] [0] [i_2] = 10270742257414927962;
                    var_17 = ((!(!798451917)));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_18 = ((3496515379 & (((-(((var_13 <= (arr_2 [i_0] [i_0])))))))));
                        var_19 = ((!(798451910 < 675163744922177947)));
                        var_20 += ((((((arr_8 [i_3] [i_3 - 1] [i_3] [0] [i_3 - 1] [i_0]) == 8236990455120565292)))) == 3496515368);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                var_21 = var_13;
                var_22 = (min(var_22, (arr_5 [4] [i_5] [i_5] [i_5])));
            }
        }
    }
    var_23 = var_3;
    var_24 = ((var_1 - ((max(var_12, -3383894689408650047)))));
    #pragma endscop
}
