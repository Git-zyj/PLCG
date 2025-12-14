/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((((((min(var_12, var_3))) ? var_11 : (min(15821, var_5)))) / var_13));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = var_8;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = (((((((30105 ? var_14 : -1817166872))) ? (min(54566, 2147483647)) : var_10)) >= 0));
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((4116052104398431003 ? 18354 : 1));
                        var_20 = ((~((((arr_10 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 3]) <= (var_7 | 82))))));
                        arr_14 [i_3] [i_3] [i_3] [i_3] |= ((max(13741, ((14 ? var_15 : (arr_9 [10] [i_2]))))));
                    }
                }
            }
        }
        var_21 |= (max((((arr_11 [i_0] [i_0]) ^ (arr_8 [i_0] [i_0] [i_0] [i_0]))), ((var_8 ? (arr_4 [i_0] [6] [10]) : 1))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_17 [i_4] = (((min((((arr_15 [i_4] [i_4]) <= 16200)), (((arr_15 [i_4] [i_4]) && 19334)))) ? (((!((max(var_16, (arr_15 [i_4] [i_4]))))))) : -19317));
        arr_18 [i_4] = var_13;
    }
    var_22 = var_4;
    var_23 = ((var_8 ? var_7 : ((max(19316, ((min(-25, 1))))))));
    #pragma endscop
}
