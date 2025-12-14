/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 4503595332403200;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((+(((((arr_4 [i_0] [i_1] [i_1]) / 16757706)) / ((~(arr_4 [i_0] [i_1] [i_1])))))));
                arr_6 [i_0] [i_0] = ((~(((!((min((arr_3 [i_0]), -1))))))));
                var_12 = 4278209590;
            }
        }
    }
    var_13 = ((~(var_7 / var_3)));

    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2 - 1] = max((((!(arr_7 [6])))), (((((arr_7 [20]) >> 0)) ^ ((((arr_8 [i_2] [i_2 + 1]) != (arr_7 [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [i_3] [10] [i_5] [i_5 - 2] = 4278209590;
                        arr_18 [i_4] [i_3] [i_2] [i_3] [i_2] |= (~(arr_7 [19]));
                        arr_19 [i_2 - 1] [i_3] [i_2 - 1] [i_5] = (arr_11 [i_2]);
                        var_14 = (arr_15 [i_2] [i_2] [i_2 - 2] [i_2 + 1] [i_2] [i_2]);
                    }
                }
            }
        }
        var_15 = (109 / -1);
    }
    #pragma endscop
}
