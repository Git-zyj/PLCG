/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = 17750236225166418876;
                    arr_10 [i_0] [i_0] [i_2] [i_2 + 1] = (((--2108) ? (arr_3 [i_0] [11]) : 5872453622129398224));
                    var_12 = ((var_11 | (arr_7 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_13 = 5872453622129398224;
        arr_13 [5] = (arr_11 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_14 = (max(var_14, (!var_5)));
        arr_18 [i_4] [i_4] = (((arr_6 [i_4] [i_4] [i_4] [i_4]) ? var_1 : (arr_6 [i_4] [i_4] [12] [i_4])));
        var_15 = (-(arr_8 [i_4] [i_4]));
        var_16 = (max(var_16, 32764));
        var_17 = var_1;
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_21 [i_5 + 1] = ((var_3 ? var_8 : -1));
        arr_22 [i_5] [i_5] &= var_4;
    }
    var_18 ^= (var_0 && 5872453622129398220);
    var_19 -= var_1;
    var_20 = ((7777 << (-1 + 3)));
    #pragma endscop
}
