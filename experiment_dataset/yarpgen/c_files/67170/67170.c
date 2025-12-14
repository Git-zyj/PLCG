/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((max(127, var_6))) ? var_13 : (~var_0)))) ? var_3 : (((121 ? 49738 : var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 -= var_9;
                    var_16 -= ((-((max(0, -20)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 |= (arr_4 [i_0 - 1] [14]);

                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            var_18 = (min(var_18, (((1505160995866255100 ? 2047 : -8797696242909416225)))));
                            arr_13 [i_1] [i_1] [i_2] [i_1] [11] = var_2;
                            arr_14 [i_1] [i_1] [i_2] = (((((208 ? -2430105060109479550 : var_9))) ? (((12656956984020373671 || (arr_7 [i_1])))) : var_11));
                        }
                        arr_15 [i_1] [5] = (arr_11 [i_0 + 2] [i_0 + 1] [i_0] [i_1] [i_0 + 2]);
                        var_19 = ((var_2 ? (arr_3 [i_0] [i_1] [i_1]) : 15814));
                    }
                    var_20 = (max(var_20, (arr_7 [12])));
                    arr_16 [i_0] [i_1] [i_1] [i_2] = (max(((((max(-444423575, var_6))) ? (max(var_6, 7598)) : (max(419372223, 1505160995866255100)))), ((min(111, (-1 == 47193))))));
                }
            }
        }
    }
    #pragma endscop
}
