/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~4007617889104171412);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = ((9222809086901354496 << (2269 - 2269)));
        arr_3 [i_0] = var_1;
        arr_4 [i_0] = (((((~4007617889104171412) << (-69 + 75))) & 1841373257));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_1] = ((((~(max((arr_1 [i_0] [i_0]), 4294934528)))) < (((1959536340 ? var_7 : (arr_5 [i_2]))))));
                    arr_13 [i_0] [i_1 - 1] = (((0 * ((193 ? 2269 : 2187818711)))));
                    arr_14 [i_0] = (arr_6 [i_2] [i_2] [i_2]);
                }
            }
        }
        arr_15 [i_0] [i_0] = (((((min(412689898, 4))) ? (arr_9 [i_0]) : var_3)));
    }
    #pragma endscop
}
