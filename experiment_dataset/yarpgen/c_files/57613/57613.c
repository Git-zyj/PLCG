/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_1] [i_0 - 1]);
                var_18 = (((arr_1 [i_1]) >= (((-34 ? -899325647 : (arr_3 [i_0] [i_0]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 7;i_4 += 1)
            {
                {
                    var_19 = ((((((arr_2 [i_4] [i_3] [i_2]) ^ (((arr_10 [5] [i_3] [i_2]) << (((((arr_6 [i_4]) + 1653407683)) - 23))))))) ? (max((arr_10 [i_4] [6] [6]), (((arr_1 [i_3]) | (arr_6 [8]))))) : (arr_12 [i_4] [i_3] [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = (arr_10 [i_6] [i_3] [i_2]);
                                var_20 = ((6318480771172339631 ? 899325646 : 4859810513458617151));
                                var_21 = var_3;
                                var_22 = (min((-4859810513458617152 + 4859810513458617151), (arr_11 [i_2] [i_4] [i_5] [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
