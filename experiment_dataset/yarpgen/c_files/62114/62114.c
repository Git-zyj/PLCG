/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-200714566 ? var_1 : (max(var_4, var_4))))) ? (max(var_6, (-135109326507868628 + var_2))) : ((((var_9 > var_5) ^ (var_8 > var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_0] = (496595449 + 60513);
                    var_13 = (((((((!(arr_5 [i_0]))) ? ((0 ? var_10 : var_7)) : (((1073741824 ? 1 : 60679)))))) ? (((max(6261671190287900584, var_4)) + (arr_3 [i_1 + 2] [i_1 + 2]))) : ((var_4 ? (arr_1 [i_1 + 1] [i_1 + 3]) : (arr_1 [i_1 + 3] [i_1 + 1])))));
                }
            }
        }
    }
    var_14 = (min(var_14, (((~((1 ? (min(var_3, var_6)) : var_10)))))));
    var_15 = (min(var_15, ((((var_7 ? ((min(43288, var_10))) : var_11)) > (((~((496595452 ? -1714084514 : -1741495077)))))))));
    #pragma endscop
}
