/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_11 ? ((max(10736, 0))) : 95));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((!(((var_9 ? (arr_10 [8] [i_1]) : var_10))))) && ((max((!var_17), var_1))))))));
                                var_20 = ((((~(~4294967295))) << (((arr_11 [i_0]) >> ((((~(arr_12 [i_0] [5] [i_1] [i_2] [i_3] [i_4]))) - 2925873502))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_21 = -1444943270;
                        var_22 = (((((((arr_3 [i_0] [i_5 + 1]) ? 23 : var_2)) <= var_2)) ? (-9223372036854775807 - 1) : 1444943270));
                    }
                }
            }
        }
    }
    var_23 = var_0;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                var_24 = (min(((-(arr_20 [i_6] [i_7] [i_7]))), (arr_20 [i_7] [i_6] [i_6])));
                var_25 -= ((~((var_13 * (arr_19 [i_6] [i_7] [18])))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_26 = ((((((~-1444943270) ? ((min(96, 159))) : ((~(arr_17 [i_6] [i_7])))))) ^ ((((max(var_3, 1241685142))) ? 122341806 : (var_8 & var_2)))));
                                var_27 = var_4;
                                var_28 -= var_11;
                            }
                        }
                    }
                }
                var_29 = (+(((0 % 5460636777265028301) / (min(var_14, var_7)))));
            }
        }
    }
    var_30 = (max(var_30, ((((min((var_1 / -1063230970), (min(var_13, var_5)))) <= (max(-8809646598452511032, var_3)))))));
    #pragma endscop
}
