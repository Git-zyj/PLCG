/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((min((33554431 != 93), -24822)))));
    var_13 = (-var_1 ? ((((var_0 ? -32758 : var_1)))) : var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((((min((arr_6 [i_2 + 1] [i_2]), (arr_6 [i_2 - 1] [i_2])))) ? ((((arr_2 [i_0]) | var_4))) : (((arr_7 [i_2 - 1]) | (~var_5)))));
                    var_14 = (((((var_1 && (((arr_2 [i_1]) && (arr_3 [i_2 - 3] [i_1])))))) % var_5));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_15 = (-575513565 + 19323);
                    var_16 = ((((min((arr_1 [i_3]), (((arr_10 [i_5]) & var_5))))) % (min((((-(arr_14 [i_3] [i_3])))), ((746340887 ? var_2 : (arr_15 [i_3] [i_3] [i_3] [i_3])))))));
                }
            }
        }
    }
    #pragma endscop
}
