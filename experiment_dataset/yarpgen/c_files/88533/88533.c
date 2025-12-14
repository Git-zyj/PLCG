/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 1;

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_12 -= (((((((arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 2]) ? -6806 : (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 2]))) + 2147483647)) << (var_8 - 10603655736710335391)));
                    arr_10 [10] [i_1] [i_1] [i_2] = var_5;
                    arr_11 [i_0] [i_0] [i_2] = (arr_0 [7] [7]);
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_13 -= var_3;
                    arr_16 [i_0 + 1] [i_0] [i_0 + 2] [i_0] = (((((arr_9 [i_0 + 2] [i_0 - 1]) / var_3)) ^ 6806));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_19 [i_4] [i_1] [i_4] = 1;
                    var_14 = ((182483952 << (!4096639456)));
                }
                arr_20 [10] [i_1] = 6806;
            }
        }
    }
    var_15 = var_7;
    var_16 = var_1;
    var_17 = (max(var_17, var_0));
    #pragma endscop
}
