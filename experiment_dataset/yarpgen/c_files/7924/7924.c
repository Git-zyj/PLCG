/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 = (~(((((var_1 ? var_7 : var_1))) ? -17406 : var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [8] = (+-17420);
                            var_12 = (min(var_12, (((!(arr_0 [i_1 - 2] [i_3 - 2]))))));
                            arr_11 [3] = (((arr_8 [1] [4] [2] [i_3 - 2]) ^ (((arr_8 [i_3 - 1] [i_3] [i_3 - 2] [i_3 - 2]) | (arr_8 [i_3] [i_3] [6] [i_3 - 2])))));
                        }
                    }
                }
                var_13 = ((((max(-17396, 9))) ? ((37612 ? 1 : 1)) : (1 | 2147483647)));
            }
        }
    }
    var_14 ^= -27924;
    #pragma endscop
}
