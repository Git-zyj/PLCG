/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = ((!(arr_0 [i_0])));
                    arr_8 [i_2] [i_2] [2] |= ((-((~((4398012956672 ? (arr_3 [i_0]) : var_12))))));
                    var_14 = (((arr_3 [i_1 + 2]) ? ((max(-4398012956673, var_12))) : (((arr_3 [i_1 + 2]) - (arr_3 [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [18] [i_3 + 2] [i_1] [i_3 - 3] [i_4] = (((!(1 * 0))));
                                arr_17 [22] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1] &= ((+(((1465 != 11417057536929560397) ? var_4 : (((arr_2 [i_1] [i_0]) ? var_12 : (arr_10 [i_0] [8] [i_0] [3] [i_4])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(((((var_1 ? var_1 : var_4)) - var_10)), (-2147483647 - 1)));
    var_16 = (((697 ? 4294967295 : 16933)));
    #pragma endscop
}
