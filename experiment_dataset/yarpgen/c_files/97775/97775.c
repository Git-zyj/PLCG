/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 |= var_7;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((((arr_2 [i_0 - 1]) ? var_10 : (arr_2 [i_0 - 1])))) || ((((arr_2 [i_0 - 1]) ? 1 : var_2)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (((arr_6 [i_1] [i_1] [1] [i_1]) && ((min(((1 ? var_10 : 1)), ((-3602369320190990861 ? 1 : 60877)))))));
                    arr_8 [i_1] = ((!((min(var_1, 1)))));
                    var_17 = (((min(765862388513387425, var_4))) ? (-14 & 1) : ((min(-1, (arr_3 [i_1] [i_1])))));
                    arr_9 [i_0] [2] [i_1] [2] &= ((((min((arr_4 [i_0 - 1] [2] [i_0 - 1]), (arr_5 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) != (arr_6 [i_0] [i_0] [i_1] [2])));
                }
            }
        }
        arr_10 [i_0] = (min(var_2, (max(var_10, var_0))));
        var_18 = (max(var_18, ((max(((((1 > 1) <= var_5))), (max((1 || 12), ((1 ? var_7 : 255)))))))));
    }
    #pragma endscop
}
