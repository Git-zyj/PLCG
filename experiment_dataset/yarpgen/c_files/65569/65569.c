/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((((max(var_7, var_2))) ? var_6 : var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((((-8065667765568695661 ? -8065667765568695682 : 0))) ? (arr_5 [i_0] [i_0] [3] [i_2]) : (((arr_5 [i_0] [i_0] [i_1] [i_2]) ? -24383 : var_3)));
                    var_12 = (min((((((-(arr_6 [4] [i_2] [12])))) ? (arr_5 [1] [1] [1] [i_2]) : (((arr_7 [1] [i_1] [i_2] [8]) ? var_8 : -3115756700726501334)))), ((min((arr_3 [i_2] [i_1]), (arr_3 [i_0] [i_1]))))));
                    arr_8 [i_2] [i_1] [i_2] = ((-((-(max(var_8, var_2))))));
                    arr_9 [i_0] [i_2] = (((-(arr_6 [i_0] [i_2] [i_0]))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_2] = 24386;
                        arr_13 [i_0] [i_2] = var_3;
                    }
                }
            }
        }
    }
    var_13 = ((((((var_7 ? var_8 : 8065667765568695670))) ? var_2 : var_9)));
    var_14 -= ((4640835792432719680 ? (max(var_0, (min(var_4, var_6)))) : var_5));
    #pragma endscop
}
