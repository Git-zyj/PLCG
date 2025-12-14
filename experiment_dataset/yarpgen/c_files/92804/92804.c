/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= -var_6;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 = ((((!(arr_1 [i_0 + 1])))));
        var_21 -= (max(((max(120, -913292227))), (((!(arr_0 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = 32205;
                    arr_7 [i_0] = (((arr_1 [i_0 - 1]) ? ((((((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : 239))) ? ((max((arr_4 [3] [i_1] [i_2 + 2] [i_2 + 2]), (arr_4 [i_0] [i_1] [i_2 + 1] [i_2 + 2])))) : ((((arr_4 [i_0] [5] [i_2] [9]) < (arr_1 [i_0])))))) : (((max(11733, 913292256))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_23 = (max(var_23, (((((((arr_8 [i_3 - 1] [i_3]) ? (arr_9 [i_3]) : (arr_8 [i_3] [i_3])))) ? ((1 ? 0 : (arr_3 [i_3] [5] [5]))) : ((((!(arr_9 [i_3]))))))))));
        var_24 -= ((-850956589 % (arr_4 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])));
    }
    var_25 = var_13;
    var_26 = ((-(((((var_1 ? var_2 : var_15))) ? 1 : (!var_7)))));
    var_27 = (max(var_27, (((22445 ? 66 : 11733)))));
    #pragma endscop
}
