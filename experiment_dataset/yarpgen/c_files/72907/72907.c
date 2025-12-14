/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (~var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (((arr_4 [i_0]) + (((((((arr_2 [i_0] [9] [i_1]) ? var_14 : (arr_0 [i_1])))) || (arr_4 [7]))))));
                arr_6 [i_1] = (arr_1 [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (~(arr_2 [i_0] [i_0] [i_2]));
                    var_17 = (min(var_17, 6250897819043595102));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] = ((((((min(var_12, var_11))))) >= (arr_5 [1] [1])));
                    var_18 -= max((((((arr_5 [i_0] [i_1]) + 9223372036854775807)) >> (((arr_5 [i_0] [i_1]) + 3710394710742095379)))), 795024462);
                }
                var_19 = (((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_0]) : var_6));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_20 = -9221120237041090560;
                            arr_20 [i_0] [i_1] [i_5] = var_4;
                            arr_21 [i_5] [i_0] [2] [i_5] = (arr_19 [i_5] [i_4] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
