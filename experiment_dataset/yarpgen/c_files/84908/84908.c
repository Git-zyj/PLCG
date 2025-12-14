/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (49144 ? 16380 : 50964);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (((((min(14592, (arr_0 [4])))) ? (((arr_1 [5]) / 25731)) : ((14571 ? (arr_0 [i_0]) : var_9)))));
        arr_2 [7] = (max(var_4, ((-(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [4] = ((var_6 ? ((0 ? 62912 : 25758)) : 21211));
        arr_6 [i_1] = (64604 - 65527);
        arr_7 [i_1] [i_1] = (arr_1 [12]);
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = ((((((!-1060476639) ? ((min(50964, (arr_9 [i_2])))) : (!2623)))) ? (max((max((arr_8 [i_2] [i_2]), 2147483647)), 1534861341)) : 25742));
        arr_11 [i_2] = (min(((-((2238 ? (arr_8 [i_2] [i_2]) : -1075313255)))), (((((~(arr_8 [i_2 - 1] [i_2])))) ? -5938 : var_5))));
        var_17 = (min((!62932), var_11));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_18 = ((+(max(21129, ((2604 ? (arr_8 [i_3] [i_4 - 3]) : (arr_18 [i_5] [i_3] [i_3] [i_3] [i_2])))))));
                        arr_20 [i_3] [i_2] [i_4] [i_2] [i_3] = 47800;
                        var_19 = ((-((62932 ? var_7 : (arr_19 [i_2 - 3] [i_3 + 1] [i_3 + 1] [i_4 - 1] [i_5])))));
                    }
                }
            }
        }
        arr_21 [i_2] [i_2 - 1] = (-((-(~462270288))));
    }
    #pragma endscop
}
