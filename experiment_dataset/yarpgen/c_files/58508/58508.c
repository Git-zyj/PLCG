/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [18] [i_0] = ((var_11 ? (arr_4 [i_1]) : -1));
            var_17 += (arr_4 [i_0]);
            var_18 = ((~(arr_4 [17])));
            arr_6 [i_0] [i_1] [13] = (((arr_1 [i_0]) ? var_5 : (arr_3 [i_0] [i_0] [i_0])));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_2 - 2] = (13 + 0);
            arr_10 [i_0] [i_2 + 4] [i_2] = ((0 ? (min((arr_0 [i_2 - 2] [i_2 - 1]), (arr_0 [i_2 - 2] [i_2 - 1]))) : (arr_0 [i_2 - 2] [i_2 - 1])));
        }
        var_19 = (min(var_19, var_12));
        var_20 = (arr_4 [i_0]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_21 = (min(var_21, var_7));
        arr_14 [i_3] = -1;
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    arr_26 [i_4] [i_5] [i_6 - 1] = (((((-19 ? -17 : -13))) ? (min((-2125 > var_12), (arr_23 [15] [15] [15]))) : (arr_20 [i_4])));
                    var_22 -= (((((!(((-6145054725998176737 ? var_11 : -59)))))) - -2329448833060040582));
                }
            }
        }
    }
    var_23 = ((!(var_7 <= 1)));
    #pragma endscop
}
