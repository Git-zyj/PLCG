/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = -1;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = ((((((arr_2 [i_2 + 4]) ? 1929586705 : (arr_0 [i_3 - 1] [i_3 - 1])))) ? (arr_10 [i_2 - 3] [i_2 - 2] [i_2 + 1] [i_2 + 2] [i_2 + 3]) : (((arr_2 [i_2 + 3]) ? 157181811 : (arr_2 [i_2 - 2])))));
                                var_17 = (max(var_17, (arr_8 [8] [i_2 - 2] [4] [i_4])));
                            }
                        }
                    }
                }
                arr_12 [i_0] [5] [5] = 1929586708;
            }
        }
    }
    var_18 *= ((17873437524671443312 ? (0 & var_11) : var_8));
    #pragma endscop
}
