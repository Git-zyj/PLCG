/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((~-1285870405) - ((~(((arr_2 [i_0] [i_0] [i_0]) * var_11)))));
                arr_7 [i_0] [i_0] [i_0] = ((((arr_5 [i_0] [i_1 + 3]) ? (arr_5 [i_1] [i_1 + 3]) : (arr_5 [i_0] [i_1 + 3]))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] = ((var_11 ? (arr_4 [i_0]) : var_7));
                    arr_12 [i_0] [i_0] [7] = (((arr_1 [i_1 - 1]) % (arr_1 [i_1 + 1])));
                    arr_13 [1] [i_1] [1] = (((arr_10 [i_1 + 1] [i_2 + 1]) ? (arr_2 [i_1 - 1] [i_2 - 1] [i_1 - 1]) : (arr_10 [i_1 - 2] [i_2 - 1])));
                }
            }
        }
    }
    var_16 = var_6;
    var_17 = ((((min((~255), 244))) ? var_0 : (4294967288 || 12)));
    #pragma endscop
}
