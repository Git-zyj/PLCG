/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((+(min((((-121 + 2147483647) << (var_7 - 252))), (arr_3 [i_0] [i_0] [i_0])))))));
                    var_18 = (!(((((var_4 ? (arr_2 [i_0] [i_0]) : var_11))) || (((var_0 ? (arr_4 [i_0] [i_0]) : (arr_5 [i_1] [i_2] [i_2] [i_2])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_19 = (max(var_19, ((max((((!(arr_1 [i_3 - 2] [i_3 - 1])))), (max((arr_1 [i_3 + 1] [i_3 - 1]), (arr_1 [i_3 + 1] [i_3 + 1]))))))));
                    var_20 = ((1 ? var_13 : ((min((arr_11 [i_5]), (max(15, 71)))))));
                }
            }
        }
    }
    var_21 = (((var_5 - ((min(var_6, var_7))))));
    var_22 = (min(120, 120));
    var_23 = (min(var_23, (((var_10 ? (max(var_13, var_9)) : (!4645795096428920362))))));
    #pragma endscop
}
