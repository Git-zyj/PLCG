/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((!(arr_2 [i_0] [i_0])))) <= (((4294967283 < (arr_1 [i_0])))));
        arr_4 [i_0] = (!var_12);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_14 [11] [i_3] [6] = ((arr_12 [i_3] [i_3 - 1] [i_3 + 2] [i_3 - 1]) ? 17 : (((0 * -4531508930784971951) ? 37 : 119)));
                    var_19 = (((((var_12 ? var_14 : 4531508930784971950) & (arr_1 [9])))));
                    var_20 = (arr_11 [i_2] [i_3 + 4] [i_3 + 3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_19 [i_2] |= (max(((((((-120 ? 1 : 0))) == var_8))), (arr_16 [i_1])));
                                var_21 = (max(var_21, 179));
                                var_22 -= ((-1451024546569365850 ? (17910829125885630103 | 0) : (110 / 1)));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (max((arr_16 [i_1]), ((((var_12 / 7889852391471086533) <= (arr_11 [1] [i_1] [i_1] [i_1]))))));
        var_24 += (((((1 | ((min(var_4, (arr_6 [i_1]))))))) ? (min((max(31, 1755813083938939029)), 4531508930784971950)) : var_9));
    }
    var_25 += ((((max((var_3 % var_5), var_14))) ? ((max(var_4, ((var_14 ? 12 : var_7))))) : ((73 ? (var_9 >= var_2) : (min(var_1, 797906592))))));
    var_26 = (min(var_26, ((((-29173 ? 1 : 0))))));
    var_27 = var_6;
    #pragma endscop
}
