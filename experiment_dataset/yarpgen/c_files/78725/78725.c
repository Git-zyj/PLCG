/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (min(var_20, var_12));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (max(((3684182567 ? -193353467 : 3684182571)), (min(125, 3919088845))));
                                var_22 = (min((min(24048, 4024)), 8));
                                var_23 *= (arr_4 [i_0] [8] [6]);
                                var_24 = (min(var_24, 16));
                                arr_13 [i_4] [i_3] [i_2] [5] [i_0] [i_3] [i_0] = (((((10715263817121793655 >> (3684182582 - 3684182555)))) ? 33550336 : (((5908838549642255111 ? (((arr_11 [2] [4] [1] [i_3] [i_3]) ? (arr_1 [i_2]) : (arr_8 [i_0] [i_4]))) : 58974)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
