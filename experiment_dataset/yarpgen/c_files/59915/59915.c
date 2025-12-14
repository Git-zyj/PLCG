/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [0] [i_0] [i_1] [i_2] &= (114 == -5614915989097836061);
                    arr_11 [i_0] [i_0] [i_2] = ((((arr_5 [i_2] [i_1] [4]) ? var_9 : (var_9 < 14945))));
                    arr_12 [i_0] [i_1] [i_2] = (min((arr_6 [i_1]), ((((((((arr_0 [i_0] [i_1]) > var_1)))) == (min(var_7, var_8)))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_16 [i_3] |= ((var_3 == ((((!((((arr_15 [i_3] [i_3]) ? (arr_14 [i_3] [i_3]) : 44555)))))))));
        arr_17 [i_3] = 7367;
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_12 = (max(var_12, (((arr_15 [i_4 - 1] [i_4 - 1]) < (var_0 > var_9)))));
        var_13 ^= (arr_14 [i_4 + 1] [i_4 - 1]);
        arr_20 [i_4 - 2] &= ((-(((!((min(var_1, (arr_19 [i_4 - 1])))))))));
        var_14 = (((((!(((96 << (186 - 175))))))) != ((((arr_19 [i_4 - 1]) == 1)))));
    }
    #pragma endscop
}
