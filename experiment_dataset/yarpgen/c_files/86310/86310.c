/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((9223372036854775807 != (((9676 << (((((arr_0 [i_0]) ? 20228 : 132120576)) - 20205)))))));
                arr_8 [i_0] [i_0] [i_1] = (max((arr_3 [i_1 - 1] [i_1 + 1]), ((((-2138685774 <= (arr_0 [i_0])))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = ((~(arr_9 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_3] [i_2] = 27734;
                    arr_17 [i_2] [i_2] = ((max(-1302277908, (((arr_14 [i_4] [i_4] [i_4] [i_4]) ? (arr_15 [i_2] [i_3] [i_4]) : -8)))));
                }
            }
        }
        arr_18 [i_2] [i_2] = (max((!10), ((132120594 ? (~var_1) : ((~(arr_10 [i_2] [i_2])))))));

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_21 [i_2] [i_5] = (var_8 % var_13);
            arr_22 [i_5] [i_2] = (arr_9 [i_2]);
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_26 [i_6] = (var_9 / 1);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_34 [i_6] [i_8 + 2] = ((max(2147483647, (arr_31 [i_6] [i_7]))));
                        arr_35 [i_7] [i_7] [i_9] |= ((~(20228 / 2147483647)));
                    }
                }
            }
        }
        arr_36 [i_6] [i_6] = 33911;
        arr_37 [i_6] [i_6] = var_3;
    }
    #pragma endscop
}
