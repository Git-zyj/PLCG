/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((((((min((arr_2 [22] [i_1]), (arr_3 [1] [1] [2])))) ? ((~(arr_1 [i_0]))) : ((min(0, (arr_3 [8] [i_1] [i_1]))))))))));
                var_13 = 1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_14 += 1;
                    arr_15 [i_2] [i_3] [i_2] = (((arr_4 [23] [i_2] [i_3 + 1]) ? (arr_4 [i_2] [i_2] [i_3 - 2]) : ((min(0, (arr_4 [i_3] [i_2] [i_3 + 3]))))));
                    var_15 = (min(((((((arr_10 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])))) ? (min((arr_12 [i_3 + 1] [i_4]), (arr_3 [i_2] [i_3] [i_3]))) : (arr_1 [i_3]))), ((min((arr_9 [i_3 + 2] [i_3 + 2]), ((min((arr_4 [i_2] [i_2] [i_2]), (arr_1 [i_3])))))))));
                    arr_16 [i_2] = (arr_14 [i_2] [i_2] [i_2]);
                    arr_17 [i_2] [i_2] = min((((min((arr_12 [i_2] [i_2]), 0)) ^ (arr_6 [i_2]))), (((0 ? (arr_8 [i_2] [i_4]) : (min(-3836303118305708522, 25002))))));
                }
            }
        }
    }
    var_16 = 0;
    var_17 = 18446744073709551599;
    #pragma endscop
}
