/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((var_12 | 39), var_12))) ? var_4 : 45));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((((17642514615020042307 ? var_14 : 39)))))));
                    var_20 = (arr_1 [i_1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_21 = (max(var_21, (arr_10 [i_3])));
                var_22 = (((((max(var_17, 7)))) ? ((255 ? 249 : 139)) : (min((arr_7 [i_3 + 1]), (arr_8 [i_4])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_23 = (min(var_23, ((((arr_5 [i_5] [i_5] [i_6]) ? (((arr_5 [i_5] [i_5] [i_6]) ? (arr_5 [i_5] [i_6] [i_5]) : (arr_5 [i_5] [i_6] [i_6]))) : (max((arr_5 [12] [i_6] [i_6]), 164)))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_25 [i_5] [i_5] = (max((((48 ? (arr_24 [i_8 + 1] [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 1] [i_8]) : (arr_24 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8])))), (max((arr_24 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1] [8]), var_15))));
                            arr_26 [i_8] [i_8] [i_8] [i_8 + 1] [i_8 - 1] = max((!6), ((var_4 ? (arr_13 [i_6] [i_7]) : 18446744073709551615)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            {
                arr_34 [i_9] [i_9] = ((-25 ? (max((arr_14 [i_10 - 2] [i_10 - 2]), (arr_20 [i_9] [i_10 + 1]))) : ((((((var_14 ? var_12 : 12375164261716998380))) ? (arr_13 [i_9] [i_9]) : ((max(31, 1))))))));
                arr_35 [3] [i_10 - 2] [i_10] = (max(((-246 ? 242 : (max(var_5, 248)))), (arr_27 [i_9])));
                arr_36 [i_9] = var_2;
                var_24 += (max((((((-1086611830 ? 174 : 694575583240071281))) ? -52 : (50853 && 187))), 21));
            }
        }
    }
    #pragma endscop
}
