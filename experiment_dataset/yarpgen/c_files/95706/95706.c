/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((!var_11), (~-594878955)));
    var_16 |= ((var_7 && ((min(((5757657374113236511 ? -1880182441 : -1)), -20)))));
    var_17 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [2] [i_2] [9] [1] = arr_0 [i_0];
                            arr_14 [i_0] [14] [i_2] [i_3] = (min(((max((((83 ? (arr_1 [i_0]) : (arr_1 [i_0])))), 3260))), (max((~-19), (arr_9 [i_0] [i_0] [i_2] [13])))));
                            var_18 = ((~((~(max((arr_6 [i_1] [i_3]), 33))))));
                        }
                    }
                }
                var_19 = 4609434218613702656;
                arr_15 [i_1] = ((-(min(9223372036854775793, (((3248 ? -25 : 0)))))));
            }
        }
    }
    #pragma endscop
}
