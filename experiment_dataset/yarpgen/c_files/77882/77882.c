/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (max((((((arr_1 [i_0]) >= (arr_0 [i_0]))))), (((((-(arr_1 [i_0])))) ? (188 | 82) : (max((arr_1 [i_0]), 82))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= (max(((((~(arr_7 [14]))))), (min(var_7, (min(1427720572, 18446744073709551615))))));
                    var_18 = (((((~(arr_6 [i_0 + 1] [i_0 - 3] [i_0 - 2])))) ? (arr_0 [i_0]) : (382769172911249178 + 2)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            {
                arr_14 [i_3] = 35;
                arr_15 [i_3] = (arr_13 [i_3]);
            }
        }
    }
    #pragma endscop
}
