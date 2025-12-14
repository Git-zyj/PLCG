/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 -= 487471416;
        var_19 = (min(var_19, (arr_1 [i_0])));
        var_20 = (min(var_20, (((((-((1604264186 - (arr_1 [i_0]))))) != -1503670499)))));
    }
    var_21 = ((((min(487471416, -487471416))) - 0));

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_22 = ((-(arr_1 [i_2])));
                    var_23 = (arr_8 [i_1] [i_2] [i_1]);
                    var_24 = ((-((((((!(arr_6 [i_1])))) != ((((arr_2 [i_1] [i_1]) != (arr_6 [i_2])))))))));
                    var_25 = (max(var_25, (!-1229879638)));
                    arr_10 [i_3] [i_2] [i_1] = ((((((min((arr_4 [i_1] [i_2] [i_3]), (arr_0 [i_3] [i_2]))) - (arr_7 [i_2])))) ? var_14 : var_12));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_26 = (min(-1229879638, ((((var_14 != (arr_15 [i_4])))))));
                        var_27 = var_10;
                    }
                }
            }
        }
        arr_20 [i_1] = (((arr_17 [i_1] [13] [i_1] [7]) != (arr_12 [i_1] [i_1] [i_1])));
        arr_21 [i_1] [i_1] = -487471416;
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_25 [i_7] = -487471416;
        var_28 = -312023219;
        var_29 += (((arr_22 [i_7]) != ((18338 - (((!(arr_23 [i_7] [1]))))))));
        arr_26 [i_7] [i_7] = ((((((((((arr_23 [i_7] [i_7]) != var_1)))) - (((arr_24 [15] [15]) ? (arr_22 [i_7]) : var_3))))) ? (((~(!1048575)))) : (arr_24 [7] [7])));
    }
    #pragma endscop
}
