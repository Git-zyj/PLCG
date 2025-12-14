/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(2556195781, 1738771514));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0 + 3] [i_1] = (arr_1 [i_0] [i_0]);
                arr_6 [i_0 + 1] = var_8;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            arr_12 [i_3] [3] = (((arr_8 [i_2 + 2]) ? (arr_8 [i_2 + 1]) : (arr_8 [i_2 + 2])));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_19 [i_3] [i_5] = (((((~(arr_0 [i_2])))) ? (((arr_3 [i_2 + 1] [i_3]) ? var_10 : (arr_3 [i_4] [5]))) : (arr_2 [i_2 + 3] [i_3 + 1] [i_4 + 1])));
                        arr_20 [i_2] [i_3] [i_2 + 4] [i_2 + 2] = var_7;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_27 [i_6] [i_3] [i_6] [i_7 - 1] = ((var_5 ? (arr_17 [i_2 + 3] [i_2 + 3] [i_6] [i_7 + 3]) : (arr_25 [i_2 + 1] [i_7 - 1] [i_3] [i_7])));
                        var_12 = var_8;
                        arr_28 [i_2] [i_3] [i_6] [i_6] [i_7] = var_6;
                        arr_29 [3] [2] [i_3] [i_3 + 1] [i_2 + 2] = ((0 ? 2556195781 : 0));
                    }
                }
            }
        }
        var_13 = ((arr_23 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 3]) ? (arr_0 [i_2 + 4]) : (arr_23 [i_2 - 1] [i_2 - 1] [i_2] [i_2]));
        var_14 = ((((525770075 ? 2556195781 : (arr_3 [13] [i_2 + 4]))) << (((arr_9 [i_2 + 4]) - 544822670))));
        arr_30 [i_2] [i_2 - 1] = arr_22 [0] [0] [0];
    }
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        arr_34 [i_8] = ((~(((~-155686260) ? var_8 : ((((arr_3 [i_8] [i_8 + 1]) ? var_5 : var_0)))))));
        arr_35 [i_8] = (!((min(((var_6 ? (arr_33 [16]) : var_0)), var_7))));
        arr_36 [i_8] [i_8] = (((min(((155686259 ? 2367977736 : 41823)), (min(1871427416, var_10))))) == ((+(min((arr_32 [i_8] [i_8 + 1]), (arr_4 [i_8]))))));
        arr_37 [i_8 + 1] = var_7;
    }
    #pragma endscop
}
