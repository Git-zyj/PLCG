/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (-(((arr_1 [i_0]) ? ((0 ? (arr_1 [i_0]) : 1629554126)) : ((2665413180 ? (arr_1 [i_0]) : 0)))));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_20 = ((20266275 ? 4294967288 : 1629554130));
            var_21 = (((((((var_14 ? (arr_1 [i_0]) : var_11))))) * ((var_13 / (arr_1 [1])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_22 = (min((((1629554115 ? (arr_11 [i_0] [i_1] [i_0] [i_3] [i_0]) : var_11))), ((min((min((arr_6 [i_1] [i_2] [i_3]), 2665413180)), (((arr_12 [i_0] [i_0] [i_2] [i_3] [11]) ? var_13 : 2665413158)))))));
                            arr_13 [1] [i_0] [i_0] [i_1] [i_4 + 1] = (((arr_0 [i_0]) ? ((((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_0]) ? 327465187 : (arr_5 [2])))) ? var_9 : (arr_1 [i_0]))) : ((min((arr_7 [i_1] [i_0] [i_1] [i_1 + 1]), (arr_3 [4] [i_0] [i_0]))))));
                        }
                    }
                }
            }
            var_23 = (min((min(-var_19, -3947782324)), (min(((var_14 ? var_7 : var_14)), ((min(var_18, 36399)))))));
        }
    }
    var_24 = (min(var_24, var_11));
    #pragma endscop
}
