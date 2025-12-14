/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = ((-((var_9 | ((-102 ? 13859 : 32750))))));
    var_18 = ((var_9 ? var_9 : (max(((-1 ? var_11 : 0)), 51925))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (arr_3 [i_0]);

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_19 = (min(var_19, var_15));
                    arr_9 [i_1] [i_0] [i_0] [i_2] = 13859;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 3; i_5 < 19;i_5 += 1)
                        {
                            arr_17 [i_0] [i_4] [i_4] [i_4] [i_4] [i_0] [i_5 - 1] = (arr_11 [i_0] [i_0] [11] [i_4]);
                            var_20 = var_10;
                            var_21 = (min(var_21, ((((((-13860 ? 0 : 13860))) % 13845)))));
                            var_22 = ((-(((arr_16 [i_0] [i_4] [i_3] [i_5 - 1]) / (((arr_6 [i_0] [i_0] [i_3] [i_4]) / (arr_16 [i_0] [i_4] [i_5] [i_4])))))));
                        }
                        arr_18 [i_4] = (min((arr_12 [i_0] [i_4]), (arr_0 [i_4])));
                        var_23 = 13859;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_24 = 1;
                        arr_22 [i_0] [i_1] [14] = -13860;
                        var_25 = (min(var_25, ((((((var_11 % (arr_1 [i_0])))) && 16273)))));
                        var_26 = ((((arr_7 [i_0] [i_0] [i_3] [i_0]) ? ((-13860 ? (arr_5 [i_0]) : (arr_15 [i_0] [i_0] [i_1] [i_0] [i_6]))) : (var_6 != 13860))));
                        var_27 = -11692;
                    }
                    var_28 ^= ((((arr_21 [i_0]) ? -var_3 : var_1)));
                    arr_23 [i_0] [i_1] [i_3] [i_1] = -16292;
                    arr_24 [i_0] [3] = ((((((arr_11 [19] [19] [i_0] [i_1]) ? (arr_11 [i_0] [i_0] [i_3] [i_0]) : (arr_11 [i_0] [i_0] [i_1] [i_3])))) ? (arr_3 [i_0]) : ((-13858 ? ((max(1, 18776))) : ((var_3 ? var_11 : var_2))))));
                    var_29 -= (arr_10 [i_0] [i_0] [i_3] [i_1]);
                }
                arr_25 [i_0] [i_1] = ((~(((arr_11 [i_1] [i_1] [i_1] [i_0]) & 18))));
                var_30 ^= ((((((((arr_12 [i_0] [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_1]))) % (var_12 - 13859)))) ? (((((!(arr_0 [i_1])))) - (arr_14 [i_0] [i_0] [i_0] [i_1]))) : (arr_7 [0] [i_0] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
