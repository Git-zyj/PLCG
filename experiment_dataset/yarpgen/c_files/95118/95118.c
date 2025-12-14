/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = var_9;
        var_12 = (+(max((((arr_0 [i_0] [i_0]) / (arr_1 [i_0]))), 1)));
        arr_2 [i_0] [i_0] = (((min(0, -8))));
        var_13 += ((!((min((arr_1 [2]), 0)))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, 27));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_15 -= (min((max((~2), (~1987409665783187522))), (arr_4 [i_2])));
                    arr_9 [i_1] = (((0 / var_7) ? var_6 : (~1)));
                    arr_10 [i_1] = (var_5 ? (((min(190670144, (arr_6 [i_1]))) * (((((arr_0 [i_1] [i_1]) == var_2)))))) : ((((((0 ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1])))) | (arr_1 [i_1])))));
                }
            }
        }
        arr_11 [i_1] = ((-((max((arr_4 [i_1]), (arr_4 [i_1]))))));
        arr_12 [i_1] = (min(-23993, (~11780141622921852024)));
    }
    var_16 = 190670144;
    var_17 = (max(var_17, (((!((min(var_2, var_2))))))));
    #pragma endscop
}
