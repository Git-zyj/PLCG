/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = 42828;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = 32550;
                            var_16 = (min(147, (max(var_4, -8622987801684058474))));
                        }
                    }
                }
                arr_8 [3] [i_1] = ((-(min((arr_4 [i_1] [i_1] [i_1] [i_0]), (arr_4 [i_1] [i_1] [i_1] [0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                arr_15 [i_5] [i_5] = (min((min(((9891 ? 3595303688 : 0)), -1532)), ((((arr_0 [i_4 - 3]) ? var_0 : -1)))));
                var_17 = (((((var_1 ? (arr_10 [i_4] [i_4 + 2]) : (arr_10 [i_4 - 3] [i_4 - 2])))) ? ((((arr_10 [10] [i_4 + 2]) ? 1 : 37294))) : (max(0, (arr_10 [i_4] [i_4 - 2])))));
            }
        }
    }
    #pragma endscop
}
