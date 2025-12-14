/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (((min((arr_3 [i_0]), (((arr_0 [5] [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : (arr_4 [i_0] [i_1] [i_0]))))) * ((((!((max((arr_2 [i_0]), (arr_4 [20] [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_2] [i_0] [i_2] = ((~(min((max((arr_0 [i_2] [i_2]), (arr_7 [6] [6]))), -2270534132))));
                            var_13 = (((-(arr_3 [1]))));
                            arr_13 [i_2] [i_1] [i_2] [i_1] [i_1] [i_2] = (0 - 14084);
                        }
                    }
                }
            }
        }
    }
    var_14 -= ((~(((~var_8) ? ((0 ? 2244453552 : (-2147483647 - 1))) : (~var_1)))));
    #pragma endscop
}
