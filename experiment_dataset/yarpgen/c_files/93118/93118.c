/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [6] [1] [i_0] [6] = (min(var_0, 18446744073709551615));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] [i_2] = (max((min(((((arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0]) ? 249 : 75))), (arr_1 [i_2 - 1] [i_2 - 1]))), (min(-12718093269129723126, ((((arr_6 [i_0] [i_0] [i_2]) ? 0 : (arr_4 [i_0] [i_1] [20]))))))));
                    }
                    arr_13 [i_2] = 1;
                    arr_14 [i_2] [10] [i_1] [i_2] = (arr_4 [i_0] [i_0] [i_0]);
                    arr_15 [i_2] [i_0] [i_1] [i_2] = (max((arr_2 [i_0] [i_0]), ((((arr_9 [i_0] [i_0] [5] [i_1]) == ((var_10 ? var_5 : 1)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            {
                arr_21 [i_5] [i_4] = ((((max(85, 1))) ? 1 : 127));
                arr_22 [i_5 - 1] = (min(-68, (1 | var_3)));
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
