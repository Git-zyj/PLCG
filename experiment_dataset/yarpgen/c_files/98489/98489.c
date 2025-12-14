/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min(var_14, (max(var_11, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [0] [1] = (((arr_0 [i_0 - 1] [i_1]) ? 30 : (arr_0 [i_0 + 2] [i_1 + 1])));
                    arr_9 [i_2] [i_1] [i_2] [i_1] = ((var_3 || (arr_0 [i_1] [i_2])));
                }
                var_17 = ((max(-6371819177108999178, var_12)));

                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    arr_13 [5] [i_1] [7] = ((((min(var_9, (arr_0 [i_3 + 1] [i_1 + 1])))) << (((((arr_0 [i_3 + 1] [i_1 + 1]) ? (arr_0 [i_3 + 1] [i_1 + 1]) : (arr_0 [i_3 + 1] [i_1 + 1]))) - 99))));
                    var_18 = (arr_10 [i_3 + 1] [i_1] [i_3 + 1]);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_19 = (((min((arr_0 [i_0] [i_0]), ((-28 ? -114 : 0))))) ? ((((arr_3 [i_0 - 1]) ? 114 : (arr_3 [i_0 + 1])))) : var_8);
                    var_20 -= (~var_7);
                    var_21 = (+(((-73 && var_3) ? ((18446744073709551615 ? var_13 : var_10)) : (arr_11 [7]))));
                    arr_16 [i_1] = (((((-(arr_0 [i_0 + 1] [i_0 - 2])))) ? ((18446744073709551606 ? var_7 : (((!(arr_12 [i_1])))))) : (!var_1)));
                }
                var_22 = (arr_15 [i_0]);
                var_23 = (((arr_12 [i_1]) >= ((((var_3 | 164) ? (arr_4 [1] [i_1 + 1] [i_1]) : var_0)))));
            }
        }
    }
    #pragma endscop
}
